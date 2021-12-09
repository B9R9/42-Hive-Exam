/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sandbox.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:42:39 by briffard          #+#    #+#             */
/*   Updated: 2021/12/09 15:57:42 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./include/libexam.h"

int	main()
{

	int	lvl = 0;
	int	ret;

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
	printf("The sandbox mod offer you the possibility to pratice you coding skill without any contraint!\n");
	printf("It' s only about the learning!\n");

	printf("Fisrt you have to choose your starting level. There is 5 level.\n");
	printf("Lvl 1 is the easiest and the 5 is difficiulte one\n");


/*--------------------------- CHOICE OF LEVEL -------------------------------*/

	printf("At witch level do you want start ? \n");
	ret = scanf("%d", &lvl);
	if (!ret) //in case of problem
		printf("ERROR");
// we should also handle if the use choice is n > 0 ou n < 5

}
