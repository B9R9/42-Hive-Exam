/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_randomnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:42:02 by briffard          #+#    #+#             */
/*   Updated: 2021/12/10 09:21:27 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libexam.h"

int	ft_randomnbr()
{
	/*function need to take int n. n will be the total of len arr name function level i.*/
	srand(time(NULL));
	int	nbr;
	int	min;
	int	max;

	min = 1;
	max = 100;
	nbr = (rand()%(max - min + 1 )) + min;
	return (nbr);
}
/*
int	main()
{
	printf("%d\n", randomnbr());
}
*/
//testing
