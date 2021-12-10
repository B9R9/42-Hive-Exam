/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sandbox.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <briffard@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2021/12/08 13:42:39 by briffard          #+#    #+#             */
/*   Updated: 2021/12/10 09:35:05 by briffard         ###   ########.fr       */
=======
/*   Created: 2021/12/10 11:39:54 by briffard          #+#    #+#             */
/*   Updated: 2021/12/10 11:40:18 by briffard         ###   ########.fr       */
>>>>>>> main
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
	ft_putstrcolor("Before Message","green");
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
		ft_putstrcolor("before function generator\n", "green");
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

