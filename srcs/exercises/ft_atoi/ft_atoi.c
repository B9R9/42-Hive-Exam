/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 09:10:01 by briffard          #+#    #+#             */
/*   Updated: 2021/11/15 09:58:31 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_isdigit(int c)
{
	unsigned char d = c;
	if(d >= '0' && d <= '9')
		return(1);
	return(0);
}

int	ft_isspace(int	c)
{
	unsigned char d = c;

	if(d == ' ' || d == '\f' || d =='\n' || d== '\n' || d == '\r' || d == '\t' || d =='\v')
		return(1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	result;
	int	neg;
	int	i;

	i = 0;
	result = 0;
	neg = 1;
	while(ft_isspace(str[i]))
		i++;
	if(str[i] == '-')
	{
		neg = -1;
		i++;
	}
	else if(str[i] == '+')
		i++;
	while(str[i] != '\0')
	{
		if(ft_isdigit(str[i]))
		{
			result *= 10;
			result += str[i] - '0';
		}
		else
			break;
		i++;
	}
	return (result * neg);
}

int	main()
{
	char str[] = "   +1652jhfv";

	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
	return(0);

}
