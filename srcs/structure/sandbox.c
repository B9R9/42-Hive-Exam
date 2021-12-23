/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sandbox.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 11:39:54 by briffard          #+#    #+#             */
/*   Updated: 2021/12/23 12:48:24 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./include/libexam.h"
#include "./libft/includes/libft.h"

static char	*file_name(char *fn)
{
	fn[ft_strlen(fn)] = '\0';
	return (fn);
}

int	main()
{
	int		fd, fd1, lvl, ret;
	int	secondchoice;
	char	*test;
	fd1 = 0;

	system("clear");
	sandbox_header();

/*----------------------- INTRODUCTION TEXTE --------------------------------*/
	fd = open("./text/sandbox.welcome.txt", O_RDONLY);
	if (!fd)
		ft_putstrcolor("ERROR WELCOME MESSAGE", "red");
	ft_display_file(fd);
	close(fd);

/*--------------------------- CHOICE OF LEVEL -------------------------------*/

	printf("At witch level do you want start ? \n");
	ret = scanf("%d", &lvl);
	if (!ret) //in case of problem
		printf("ERROR");;
 /*
  *  we should also handle if the user choice is n > 0 ou n < 5
 */
/*---------------------GENERATOR FUNCTION -----------------------------------*/
	do
	{	
	test = function_generator(lvl);

/*--------------------DISPLAY INSTRUCTION------------------------------------*/

	/*CREATION OF THE SUMISSION FOLDER*/
	system("clear");
	system("bash create_submissionfolder.sh");

	//test = file_name(test); //Try to remove '\n' at the end of test
	//-> not sure about it
	/*BETTER SOLUTION----------
	 * use ft_get_next_line in function generator  to get the line without \n
	 * we can try also to copy test in a new str chr by chr and stop before the
	 * \n
	 * */
	sandbox_header();
	printf("CURRENT  LVL : %d\n", lvl);//find a nicer place 
	openinstruction(file_name(test), lvl);
/*---------------------- MENU END -------------------------------------------*/	
	ft_putchar('\n');
	printf("-----------------------------------------------------------------\n");
	ft_putstrcolor("1 - NEXT FUNCTION ","green");
	ft_putstrcolor(" 2 - LVL DOWN ", "blue");
	ft_putstrcolor(" 3 - LVL UP ", "red");
	ft_putstrcolor(" 4 - SUBMIT ", "yellow");
	ft_putstrcolor(" 5 - EXIT \n","white");
	printf("-----------------------------------------------------------------\n");
	scanf("%d", &secondchoice);

	switch(secondchoice)
	{
		case 1:
			test = function_generator(lvl);
			break ;
		case 2:
			if (lvl > 0)
				lvl -= 1;
			test = function_generator(lvl);
			break ;
		case 3:
			if (lvl < 5)
				lvl += 1;
			test = function_generator(lvl);
			break ;
		case 4:
			/*NEED CHECKER CODE */
			break ;
	}
	}while (secondchoice != 5);
}
