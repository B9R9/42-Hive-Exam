/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   level_modifier.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:05:01 by ghorvath          #+#    #+#             */
/*   Updated: 2021/12/21 12:45:59 by ghorvath         ###   ########.fr       */
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



void	life(void)
{
	int	systemTest;
	int	studentSubmition;
	int	lifeCounter;
	int	life;
	int	outOfLife;
	int	lvlCounter;
	int	currentLevel;
	//int	tracker;
	int	number;

	systemTest = 5;
	lifeCounter = 0;
	life = 3;
	outOfLife = 0;
	lvlCounter = 0;
	printf("Choose your level: ");
	scanf("%d", &currentLevel);
	while (studentSubmition != systemTest && outOfLife == 0)
	{
		if (lifeCounter < life)
			{
				/*here gonna come a submition function*/
				printf("enter a number: ");
				scanf("%d", &studentSubmition);
				lifeCounter++;
			}
		else
			outOfLife = 1;
	}
	while (lvlCounter < 6)
	{
			if (outOfLife == 1)
		{
			printf("Failed! Would you like to try again?");
			printf("current level is: %d", currentLevel);
			break;
		}
		else
		{
			printf("Succeeded!");
			/*gain 1 more level*/

			//tracker = (int *)malloc(number * sizeof(int));
			//free(tracker);
			//currentLevel = tracker;

			currentLevel++;
			printf("current level is: %d", currentLevel);
			break;
		}
		break;
	}
	//return (currentLevel);
}

/*
void	level_modifier();
{
	int	userchoice;
	int	lvl;
	int	lifes = 3;
	do
	{
			printf("Level00\nLevel01\nLevel02\nLevel04\nLevel05\n");
			printf("Enter your level: ");
			scanf("%d", &userchoice);

		switch(userchoice)
		{
			case 1:
				do
				{
					printf("1. Add\n 2. Subtract\n3. Go back to menu");
					scanf("%d", &userchoice);
					switch (theChoices)
					{
						case 1:
						function_generator(lvl);

					}
				}
		}
	}while (lvl != 0);
}
*/

int	main()
{
	//printf("your level is %d\n", currentLevel);
	life();
	//printf("your level is %d\n", currentLevel);
}


/*
int	main()
{
	int	lvl;

	life(lvl);
	if (lvl == 0)
	{
		lvl = 1;
		printf("your levele is %d\n", lvl);
	}
	else
	{
		(lvl = 1);
		printf("failed\n");
	}
	printf("your levele is %d\n", lvl);

	return (0);
}
*/
