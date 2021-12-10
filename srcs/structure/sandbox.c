/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sandbox.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <briffard@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 11:39:54 by briffard          #+#    #+#             */
/*   Updated: 2021/12/10 13:14:32 by briffard         ###   ########.fr       */
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
	//void	sandbox_header();

	int		fd, fd1, lvl, ret;
	char	*test;
	fd1 = 0;
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

	openinstruction(file_name(test));


}

