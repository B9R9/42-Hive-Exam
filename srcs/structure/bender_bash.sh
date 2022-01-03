#!/bin/bash

noir='\e[0;30m'
gris='\e[1;30m'
rougefonce='\e[0;31m'
rose='\e[1;31m'
vertfonce='\e[0;32m'
vertclair='\e[1;32m'
orange='\e[0;33m'
jaune='\e[1;33m'
bleufonce='\e[0;34m'
bleuclair='\e[1;34m'
violetfonce='\e[0;35m'
violetclair='\e[1;35m'
cyanfonce='\e[0;36m'
cyanclair='\e[1;36m'
grisclair='\e[0;37m'
blanc='\e[1;37m'

neutre='\e[0;m'


result=0
returntest=$(cat -e bender_return_value_aff_a.txt)

if [[ $(./aff_a "abc"| cat -e) == "$returntest" ]]; then
	printf "test: ${vertclair}OK${neutre}\n"
	let result++
else
	printf "test: ${rougefonce}KO${neutre}\n"
fi

if [[ $(./aff_a "RaInB0w d4Sh!" | cat -e) == "$returntest" ]]; then
	printf "test: ${vertclair}OK${neutre}\n"
	let result++
else
	printf "test: ${rougefonce}KO${neutre}\n"
fi

if [[ $(./aff_a "ThE Ck3 Is L|3" | cat -e) == "$returntest" ]]; then
	printf "test: ${rougefonce}KO${neutre}\n"
else
	printf "test: ${vertclair}OK${neutre}\n"
	let result++
fi

if [[ $(./aff_a " " | cat -e) == "$returntest" ]]; then
	printf "test: ${rougefonce}KO${neutre}\n"
else
	printf "test: ${vertclair}OK${neutre}\n"
	let result++
fi

if [[ $(./aff_a | cat -e) == "$returntest" ]]; then
	printf "test: ${vertclair}OK${neutre}\n"
	let result++
else
	printf "test: ${rougefonce}KO${neutre}\n"
fi

if [[ $result == 5 ]]; then
	printf "${vertclair}You sucessed 5/5 tests.${neutre}\n"
else
	printf "${rougefonce} You sucessed only %s/5 tests${neutre}\n""$result"
fi
./submission_validator aff_a $result
