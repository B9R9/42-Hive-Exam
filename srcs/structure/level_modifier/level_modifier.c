/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   level_modifier.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:05:01 by ghorvath          #+#    #+#             */
/*   Updated: 2021/12/28 10:00:42 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
#include "./include/libexam.h"

int	life(int currentLevel)
{
	int		systemTest = 5;
	int		studentSubmition;
	int		lifeCounter = 0;
	int		life = 3;
	int		outOfLife = 0;
	char	input;
	int		counter = 0;

	while (studentSubmition != systemTest && outOfLife == 0)
	{
		if (lifeCounter < life)
			{
				//here gonna come a submition function
				printf("enter a number: ");
				scanf("%d", &studentSubmition);	//temporary for testing

				lifeCounter++;
			}
		else
			outOfLife = 1;
	}
	while (currentLevel <= 5)
	{
		do
		{
			if (outOfLife == 1)
			{
				printf("Would you like to choose another level? (y/n)\n");
				scanf(" %c",&input); input = ft_toupper(input);
				{
					if (input == 'N')
						exit(EXIT_FAILURE);	//exiting if we don't want to continue
				}
				printf("current level is: %d\n", currentLevel);
				return (1);
			}
			else
			{
				if (currentLevel == 5)

					currentLevel = currentLevel - 1;	//decreasing lvl so we can keep the maximum lvl as result
				currentLevel++;
				printf("Succeeded!");
				printf("current level is: %d", currentLevel);
				//gain 1 more level

				return (0);
			}
			break;
		} while (input != 'Y');	//do while loop for the question to continue or no

		break;
	}
	return (currentLevel);
}

void    level_modifier()
{
    int userChoice;
    int counter;
    do
    {
        printf("Succeeded %d\n", counter);
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
            case 0:*/
                /*do
                {
                    printf("1. Add\n 2. Subtract\n3. Go back to menu");
                    scanf("%d", &functionChoice);
                    switch (functionChoice)
                    {
                        case 1:
                        function_generator(lvl);

                    }
                }while (functionChoice != 0);*//*
                if (life(userChoice) == 0)
                    counter++;
                break;
            case 1:
                if (life(userChoice) == 0)
                    counter++;
                break;
            case 2:
                if (life(userChoice) == 0)
                    counter++;
                break;
            case 3:
                if (life(userChoice) == 0)
                    counter++;
                break;
            case 4:
                if (life(userChoice) == 0)
                    counter++;
                break;
            case 5:
                if (life(userChoice) == 0)
                    counter++;
                break;
        }
    }while (userChoice != 42); //the secret code how can get out of the system
}

int main()
{
    level_modifier();
}
*/
