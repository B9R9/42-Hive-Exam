/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   level_modifier.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:05:01 by ghorvath          #+#    #+#             */
/*   Updated: 2021/12/13 08:25:48 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<time.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<math.h>
#include<stdbool.h>
/*
void	level_modfier()
{
	int lvl = 0;
	do
	{
		printf("Did it %d times\n",lvl);
		lvl = lvl + 1;
		if (lvl < 5)
			continue;
		break;
	} while(true);
}

int main ()
{
	level_modfier();
	return (0);
}
*/

void	level_modifier();
{
	int	userchoice;
	int	lvl;
	int	lifes = 3;
	do{
			printf("Level00\nLevel01\nLevel02\nLevel04\nLevel05\n");
			printf("Enter your level: ");
			scanf("%d", &lvl);

		switch(lvl)
		{
			case 1:
				printf("1. Add\n 2. Subtract\n3. Go back to menu");
				scanf("%d", &userchoice);

			switch (theChoices)
			{
				case 1:
				{
					function_generator(lvl);
					while (guess != secretnumber && outofguesses == 0)
					{
						if (quesscount < quesslimit)
						{
							//submit file
							quesscount++;
						}
						else
							outofguesses == 1;
					}
					if (outofguesses == 1)
						printf("Failed! Would you like to try again?");
					else
						continue;
				}

			}
			case 2:
			}while (lvl != 0);
}
