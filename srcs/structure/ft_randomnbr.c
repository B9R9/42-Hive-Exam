/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_randomnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:42:02 by briffard          #+#    #+#             */
/*   Updated: 2021/12/10 11:54:28 by ghorvath         ###   ########.fr       */
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
