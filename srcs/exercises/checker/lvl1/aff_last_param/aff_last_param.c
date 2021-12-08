/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 08:46:52 by briffard          #+#    #+#             */
/*   Updated: 2021/11/15 09:09:10 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char	*str)
{
	while(*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	if(argc < 2)
	{
		ft_putstr("Not enough parameters to print.");
		return (0);
	}
	while(argv[argc - 1][i] != '\0')
		ft_putchar(argv[argc - 1][i++]);
	ft_putchar('\n');
}
