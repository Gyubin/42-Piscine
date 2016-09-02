#!/bin/zsh

TMPDIRNAME=$(mktemp -d)
BINARYNAME=$RANDOM
trap "rm -rf $TMPDIRNAME" EXIT

cd ..
make all || exit 1
cp ft_display_file $TMPDIRNAME/$BINARYNAME
cd $TMPDIRNAME

GREEN=$(printf "\e[32;1m")
RED=$(printf "\e[31;1m")
RESET=$(printf "\e[m")

dd if=/dev/zero of=largefile bs=4096 count=4096
echo >> largefile

printf "" > input
printf " 16777217\n" > expect.out
printf "" > expect.err

CMD="./$BINARYNAME largefile"

echo $CMD "| wc -c"
$CMD 2>user.err <input | wc -c > user.out
echo diff -U 3 user.out expect.out
diff -U 3 user.out expect.out 
OUTEXIT=$?
echo diff -U 3 user.err expect.err
diff -U 3 user.err expect.err
ERREXIT=$?
( exit $(echo $OUTEXIT + $ERREXIT | bc) ) && echo "${GREEN}Diff [OK]$RESET" || echo "${RED}Diff [KO]$RESET"
