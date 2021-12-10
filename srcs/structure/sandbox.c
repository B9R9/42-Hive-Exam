/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sandbox.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:42:39 by briffard          #+#    #+#             */
/*   Updated: 2021/12/10 09:18:54 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./include/libexam.h"

int	main()
{

	int	lvl = 0;
	int	ret;

/*----------------------- INTRODUCTION TEXTE -------------------------------*/

	system("clear");
	void	sandbox_header();

	printf("Welcome to the sandbox session!\n");
	printf("The sandbox mod offer you the possibility to pratice your coding skill without any contraint!\n");
	printf("It' s only about the learning!\n");

	printf("Fisrt, you have to choose your starting level. There are 5 levels.\n");
	printf("Level 0 is the easiest and the 5th is the most difficiult one\n");

/*--------------------------- CHOICE OF LEVEL -------------------------------*/

	printf("At witch level do you want start ? \n");

	//ret = scanf("%d", &lvl);

	if (ret > 0 && ret < 5)
		ret = scanf("%d", &lvl);
	else
		perror("ERROR! Invalid character!");

	/*if (!ret) in case of problem
		printf("ERROR");*/
// we should also handle if the use choice is n > 0 ou n < 5


}
