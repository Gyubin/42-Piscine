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

mkdir dir
printf "" > input
printf "" > expect.out
printf "Too many arguments.\n" > expect.err

CMD="./$BINARYNAME dir"

echo $CMD
echo ${YELLOW}Test:${RESET} Program terminates when faced with error
trap "echo ${RED}Diff [KO]$RESET" INT
$CMD >user.out 2>user.err <input
echo "${GREEN}Check [OK]$RESET"
