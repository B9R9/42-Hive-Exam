/* *******************************i******************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sandbox.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:42:39 by briffard          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/12/10 09:18:54 by ghorvath         ###   ########.fr       */
=======
/*   Updated: 2021/12/10 09:35:05 by briffard         ###   ########.fr       */
>>>>>>> 2c7b7d182d4393682f84048960b32cad9c696220
/*                                                                            */
/* ************************************************************************** */

#include"./include/libexam.h"
#include "./libft/includes/libft.h"

static char	*file_name(char *fn)
{
<<<<<<< HEAD

	int	lvl = 0;
	int	ret;

/*----------------------- INTRODUCTION TEXTE -------------------------------*/

	system("clear");
	void	sandbox_header();

	printf("Welcome to the sandbox session!\n");
	printf("The sandbox mod offer you the possibility to pratice your coding skill without any contraint!\n");
	printf("It' s only about the learning!\n");

	printf("Fisrt, you have to choose your starting level. There are 5 levels.\n");
	printf("Level 0 is the easiest and the 5th is the most difficiult one\n");
=======
	fn[ft_strlen(fn)] = '\0';
	return (fn);
}

int	main()
{
	int		fd, fd1, lvl, ret;
	char	*test;
	fd1 = 0;
/*----------------------- INTRODUCTION TEXTE --------------------------------*/

	fd = open("./text/sandbox.welcome.txt", O_RDONLY);
	if (!fd)
		ft_putstrcolor("ERROR WELCOME MESSAGE", "red");
	ft_display_file(fd);
	close(fd);
>>>>>>> 2c7b7d182d4393682f84048960b32cad9c696220

/*--------------------------- CHOICE OF LEVEL -------------------------------*/

	printf("At witch level do you want start ? \n");
<<<<<<< HEAD

	//ret = scanf("%d", &lvl);

	if (ret > 0 && ret < 5)
		ret = scanf("%d", &lvl);
	else
		perror("ERROR! Invalid character!");

	/*if (!ret) in case of problem
		printf("ERROR");*/
// we should also handle if the use choice is n > 0 ou n < 5
=======
	ret = scanf("%d", &lvl);
	if (!ret) //in case of problem
		printf("ERROR");
 /*
  *  we should also handle if the user choice is n > 0 ou n < 5
 */
/*---------------------GENERATOR FUNCTION -----------------------------------*/

	test = function_generator();

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

	openinstruction(file_name(test));
>>>>>>> 2c7b7d182d4393682f84048960b32cad9c696220


}

