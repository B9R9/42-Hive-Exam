/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 09:59:03 by briffard          #+#    #+#             */
/*   Updated: 2021/12/08 21:28:12 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<math.h>

int	is_power_of_2(unsigned int c)
{
    unsigned long i,

    i = 1;
    while(i < c)
        i = 2 * i;
    if (i == n)
        return (1);
    else 
	    return(0);
}

int main()
{
	//const char *emoji = "\U0001f921";
	//write(1, emoji, strlen(emoji));
	int i = 0;

	while(i < 40)
	{
		printf("%d is %s\n",i, is_power_of_2(i) ? "true" : "false");
		i++;
	}
}
