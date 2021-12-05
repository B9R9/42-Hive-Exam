/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 09:59:03 by briffard          #+#    #+#             */
/*   Updated: 2021/11/15 10:38:04 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<string.h>

/*int	is_power_of_2(int c)
{
	int i;

	i = 0;
	if(c == 1)
		return(1);
	else
		while(i <= c)
		{
			if(i * i == c)
				return(1);
			i++;
		}
		return(0);
}
*/
int main()
{
	const char *emoji = "\U0001f921";
	write(1, emoji, strlen(emoji));
	/*int i = 0;

	while(i < 30)
	{
		printf("i = %d - - = %d\n", i, is_power_of_2(i));
		i++;
	}*/
}
