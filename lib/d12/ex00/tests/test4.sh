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


printf "" > input
printf "" > expect.out
printf "Too many arguments.\n" > expect.err

CMD="./$BINARYNAME Two Args"

echo $CMD
$CMD >user.out 2>user.err <input
echo diff -U 3 user.out expect.out
diff -U 3 user.out expect.out 
OUTEXIT=$?
echo diff -U 3 user.err expect.err
diff -U 3 user.err expect.err
ERREXIT=$?
( exit $(echo $OUTEXIT + $ERREXIT | bc) ) && echo "${GREEN}Diff [OK]$RESET" || echo "${RED}Diff [KO]$RESET"
