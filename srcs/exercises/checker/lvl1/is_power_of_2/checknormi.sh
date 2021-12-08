#!/bin/bash
touch checknorminette.txt
> checknorminette.txt
norminette ft_is_power_of_2.c | awk '/ft_is_power_of_2.c/{print$2}' | grep -v auto > checknorminette.txt

