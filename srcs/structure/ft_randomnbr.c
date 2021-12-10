/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_randomnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:42:02 by briffard          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/12/10 09:21:27 by ghorvath         ###   ########.fr       */
=======
/*   Updated: 2021/12/08 11:54:16 by ghorvath         ###   ########.fr       */
>>>>>>> 2c7b7d182d4393682f84048960b32cad9c696220
/*                                                                            */
/* ************************************************************************** */

#include "./include/libexam.h"

int	ft_randomnbr(int n)
{
	srand(time(NULL));
	int	nbr;
	int	min;
	int	max;

	min = 1;
	max = n;
	nbr = (rand()%(max - min + 1 )) + min;
	return (nbr);
}
