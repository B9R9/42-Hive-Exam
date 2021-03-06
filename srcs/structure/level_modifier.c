/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   level_modifier.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:05:01 by ghorvath          #+#    #+#             */
/*   Updated: 2021/12/31 11:14:39 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libexam.h"
#include "./libft/libft.h"

int	life(int currentLevel)
{
	int		systemTest = 5;
	int		studentSubmition = 0; //normally here we don t have value, just for now to work the function
	int		lifeCounter = 0;
	int		life = 3;
	int		outOfLife = 0;
	char	input;

	while (studentSubmition != systemTest && outOfLife == 0)
	{
		if (lifeCounter < life)
			{
				/*here gonna come a submition function*/
				printf("enter a number: ");
				scanf("%d", &studentSubmition);	/*temporary for testing*/

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
						exit(EXIT_FAILURE);	/*exiting if we don't want to continue*/
				}
				printf("current level is: %d\n", currentLevel);
				return (1);
			}
			else
			{
				if (currentLevel == 5)

					currentLevel = currentLevel - 1;	/*decreasing lvl so we can keep the maximum lvl as result*/
				currentLevel++;
				printf("Succeeded!");
				printf("current level is: %d", currentLevel);
				/*gain 1 more level*/

				return (0);
			}
			break;
		} while (input != 'Y');	/*do while loop for the question to continue or no*/

		break;
	}
	return (currentLevel);
}

