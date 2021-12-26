/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   level_modifier.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:05:01 by ghorvath          #+#    #+#             */
/*   Updated: 2021/12/26 12:05:11 by ghorvath         ###   ########.fr       */
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

void	life(void)
{
	int	systemTest = 5;
	int	studentSubmition;
	int	lifeCounter = 0;
	int	life = 3;
	int	outOfLife = 0;
	int	currentLevel;
	int	*tracker;

	/*printf("Choose your level: ");
	scanf("%d", &currentLevel);
	if (currentLevel > 5)
	{
		printf("Error");
		exit (EXIT_FAILURE);
	}*/
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
	//tracker = (int *)malloc(sizeof(int) * ft_number_lenght(*currentLevel));
	//free(tracker);
	//currentLevel = tracker;
	while (currentLevel <= 5)
	{
		if (outOfLife == 1)
		{
			printf("Would you like to choose another level?");
			printf("current level is: %d", currentLevel);
			//break;
		}
		else
		{
			if (currentLevel == 5)
				currentLevel--;	//decreasing lvl so we can keep the maximum lvl as result
			printf("Succeeded!");
			/*gain 1 more level*/

			tracker = (int *)malloc(sizeof(int) * ft_number_lenght(currentLevel));
			//free(tracker);
			currentLevel = *tracker;

			currentLevel++;
			printf("current level is: %d", currentLevel);

		}
		break;
	}
	//return (currentLevel);
}


void	level_modifier()
{
	int	functionChoice;
	int	userChoice;
	do
	{
		printf("\nLevel00\nLevel01\nLevel02\nLevel04\nLevel05\n");
		printf("Enter your level: \n");
		scanf("%d", &userChoice);

		switch(userChoice)
		{
			case 1:
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
				life();
			case 2:
				life();
			case 3:
				life();
			case 4:
				life();
			case 5:
				life();
		}
	}while (userChoice != 0);
}


int	main()
{
	//printf("your level is %d\n", currentLevel);
	level_modifier();
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
