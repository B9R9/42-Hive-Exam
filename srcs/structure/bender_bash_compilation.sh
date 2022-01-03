#!/bin/bash

gcc -Werror -Wextra -Wall -c ~/Desktop/submit/aff_a.c
gcc -Werror -Wextra -Wall -o aff_a aff_a.o

rm -f aff_a.o
