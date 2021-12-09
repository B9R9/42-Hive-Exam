/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sandbox.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:42:39 by briffard          #+#    #+#             */
/*   Updated: 2021/12/09 16:37:26 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./include/libexam.h"

int	main()
{

	int	lvl00 = 0;
	int	lvl01 = 1;
	int	lvl02 = 2;
	int	lvl03 = 3;
	int	lvl04 = 4;
	int	lvl05 = 5;
	int	ret00;
	int	ret01;
	int	ret02;
	int	ret03;
	int	ret04;
	int	ret05;


/*----------------------- INTRODUCTION TEXTE -------------------------------*/

	system("clear");
	printf("/********************************************************************************************/\n");
	printf("/*                                                                                          */\n");
	printf("/*     ::::::::       :::      :::   :::  :::::::     :::::::      :::::    :::    :::      */\n");
	printf("/*    :+:    :+:    +:+:      :+:+  +:+  :+:   :+:   :+:   :+:  :+:    :+:   :+: :+:        */\n");
	printf("/*     +:+        +:+ +:+    +:+:+: :+  +:+    +:+  +:+   +:+  +:+     +:+    +:+:          */\n");
	printf("/*       +#+    +#+  +#+    +#+ +#+#+  +#+     +#+ +#+#+#+    +#+      +#+   +#+#+          */\n");
	printf("/*        +#+  +#+#+#+#+   +#+  +#+#  +#+     +#+ +#+   +#+  +#+      +#+  +#+  +#+         */\n");
	printf("/* +#+   +#+ +#+     +#+  +#+   +#+  +#+     +#+ +#+    +#+  +#+    +#+  +#+     +#+        */\n");
	printf("/*   #+#+# +#+#     #+#+ #+#    #+# +#+#+#+#+   #+#+#+#+#     #+#+#    #+#        #+#       */\n");
	printf("/*                                                                                          */\n");
	printf("/********************************************************************************************/\n");

	printf("Welcome to the sandbox session!\n");
	printf("The sandbox mod offer you the possibility to pratice your coding skill without any contraint!\n");
	printf("It' s only about the learning!\n");

	printf("Fisrt, you have to choose your starting level. There are 5 levels.\n");
	printf("Level 0 is the easiest and the 5th is the most difficiult one\n");


/*--------------------------- CHOICE OF LEVEL -------------------------------*/

	printf("At witch level do you want start ? \n");
	ret00 = scanf("%d", &lvl00);
	ret01 = scanf("%d", &lvl01);
	ret02 = scanf("%d", &lvl02);
	ret03 = scanf("%d", &lvl03);
	ret04 = scanf("%d", &lvl04);
	ret05 = scanf("%d", &lvl05);
	if (!ret00) //in case of problem
		printf("ERROR");
	if (!ret01)
		printf("ERROR");
	if (!ret02)
		printf("ERROR");
	if (!ret03)
		printf("ERROR");
	if (!ret04)
		printf("ERROR");
	if (!ret05)
		printf("ERROR");
// we should also handle if the use choice is n > 0 ou n < 5

}
