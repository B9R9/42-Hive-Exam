#!/bin/bash
norminette ../../../usersubmission/ft_putchar.c | awk '/ft_putchar/{print$2}' | grep -v auto

