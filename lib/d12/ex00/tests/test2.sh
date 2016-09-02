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

dd if=/dev/zero of=file bs=1 count=4
printf "\n" >> file
printf "" > input
printf "^@^@^@^@$\n" > expect.out
printf "" > expect.err

CMD="./$BINARYNAME file"

echo $CMD "| cat -e"
$CMD 2>user.err <input | cat -e > user.out
echo diff -U 3 user.out expect.out
diff -U 3 user.out expect.out 
OUTEXIT=$?
echo diff -U 3 user.err expect.err
diff -U 3 user.err expect.err
ERREXIT=$?
( exit $(echo $OUTEXIT + $ERREXIT | bc) ) && echo "${GREEN}Diff [OK]$RESET" || echo "${RED}Diff [KO]$RESET"
