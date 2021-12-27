/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   level_modifier.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:05:01 by ghorvath          #+#    #+#             */
/*   Updated: 2021/12/27 10:39:22 by ghorvath         ###   ########.fr       */
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
int	ft_number_lenght(long nb)
{
	int	counter;

	counter = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		counter++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		counter++;
	}
	return (counter);
}
*/
int	life(int currentLevel)
{
	int	systemTest = 5;
	int	studentSubmition;
	int	lifeCounter = 0;
	int	life = 3;
	int	outOfLife = 0;
	//int	currentLevel;
	//int	*tracker;

	while (studentSubmition != systemTest && outOfLife == 0)
	{
		if (lifeCounter < life)
			{
				/*here gonna come a submition function*/
				printf("enter a number: ");
				scanf("%d", &studentSubmition); //temporary for testing
				lifeCounter++;
			}
		else
			outOfLife = 1;
	}
	while (currentLevel <= 5)
	{
		if (outOfLife == 1)
		{
			//printf("Would you like to choose another level?\n");
			printf("current level is: %d\n", currentLevel);
		}
		else
		{
			if (currentLevel == 5)
				currentLevel = currentLevel - 1;	//decreasing lvl so we can keep the maximum lvl as result
			currentLevel++;
			printf("Succeeded!");
			printf("current level is: %d", currentLevel);
			/*gain 1 more level*/

			//tracker = (int *)malloc(sizeof(int) * currentLevel);
			//free(tracker);
			//currentLevel = *tracker;
		}
		break;
	}
	return (currentLevel);
}


void	level_modifier()
{
	int	userChoice;
	do
	{
		printf("\nLevel00\nLevel01\nLevel02\nLevel04\nLevel05\n");
		printf("Enter your level: \n");
		scanf("%d", &userChoice);
		if (userChoice > 5)
		{
			printf("\nError!\n");
			printf("Please enter a valid level (0...5)!\n");
			continue;
		}
		switch(userChoice)
		{
			case 0:
				/*do
				{
					printf("1. Add\n 2. Subtract\n3. Go back to menu");
					scanf("%d", &functionChoice);
					switch (functionChoice)
					{
						case 1:
						function_generator(lvl);

					}
				}while (functionChoice != 0);*/
				life(userChoice);
				break;
			case 1:
				life(userChoice);
				break;
			case 2:
				life(userChoice);
				break;
			case 3:
				life(userChoice);
				break;
			case 4:
				life(userChoice);
				break;
			case 5:
				life(userChoice);
				break;
		}
	}while (userChoice != 42); //the secret code how can get out of the system
}

int	main()
{
	level_modifier();
}
