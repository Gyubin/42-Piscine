#!/bin/zsh

TMPDIRNAME=$(mktemp -d)
BINARYNAME=$RANDOM
trap "rm -rf $TMPDIRNAME" EXIT

cd ..
make all || exit 1
cp ft_display_file $TMPDIRNAME/$BINARYNAME
cd $TMPDIRNAME

YELLOW=$(printf "\e[33;1m")
GREEN=$(printf "\e[32;1m")
RED=$(printf "\e[31;1m")
RESET=$(printf "\e[m")

dd if=/dev/zero of=largefile bs=4096 count=2048 # 8 Megabytes
printf "" > input
printf "True\n" > expect.time
printf "" > expect.err

CMD="./$BINARYNAME largefile"

echo ${YELLOW}Check:${RESET} Program exits in less than 4 seconds
echo /usr/bin/time $CMD ">"user.out "2>"user.err "<"input
/usr/bin/time $CMD >user.out 2>user.err <input

python -c "print "$(cat user.err | awk '{print $1}')" < 4" > user.time

echo diff -U 3 user.time expect.time
diff -U 3 user.time expect.time
CHECKEXIT=$?
( exit $(echo $CHECKEXIT | bc) ) && echo "${GREEN}Check [OK]$RESET" || echo "${RED}Check [KO]$RESET \
	Try using a larger buffer"
