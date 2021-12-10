/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   level_modifier.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:05:01 by ghorvath          #+#    #+#             */
/*   Updated: 2021/12/10 15:20:35 by ghorvath         ###   ########.fr       */
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
	int	levels;
	int	theChoices;

	while(1)
	{
		printf("Level00\nLevel01\nLevel02\nLevel04\nLevel05\n");
		printf("Enter your level: ");
		scanf("%d", &levels);

		switch(levels)
			case 1:
				printf("1. Add\n 2. Subtract\n3. Go back to menu");
				scanf("%d", &theChoices);

      switch (theChoices) {
         case 1:
           //calculation ...
         case 2:
           //calculation ...
         case 3:
           // Go Back to menu which is Basic math, Intermediate Math, Advance math
           // ***** I want to know how do i get back to the main menu. *****
    case 2:
