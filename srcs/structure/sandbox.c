/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sandbox.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <briffard@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:42:39 by briffard          #+#    #+#             */
/*   Updated: 2021/12/09 15:58:23 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./include/libexam.h"
#include "./libft/includes/libft.h"

void	ft_display_file(int fd)
{
	char	*buffer;

	while (read(fd, &buffer, 1))
		write(1, &buffer, 1);
}


void	openinstruction(char *fn)
{
	printf("valeur de fn dans openinstruction: %s\n", fn);
	int	fd = 0;

	if(ft_strcmp("hello", fn))
	{
		fd = open("./text/hello.txt", O_RDONLY);
		if (!fd)
			ft_putstrcolor("ERROR", "red");
	}
	else if(ft_strcmp("aff_a", fn))
	{
		fd = open("./text/aff_a.txt", O_RDONLY);
		if (!fd)
			ft_putstrcolor("ERROR", "red");
	}
	else if(ft_strcmp("aff_first_param", fn))
	{
		fd = open("./text/aff_first_param.txt", O_RDONLY);
		if (!fd)
			ft_putstrcolor("ERROR", "red");
	}
	else if(ft_strcmp("aff_last_param", fn))
	{
		fd = open("./text/aff_last_param.txt", O_RDONLY);
		if (!fd)
			ft_putstrcolor("ERROR", "red");
	}
	else if(ft_strcmp("aff_z", fn))
	{
		fd = open("./text/aff_z.txt", O_RDONLY);
		if (!fd)
			ft_putstrcolor("ERROR", "red");
	}
	else if(ft_strcmp("ft_countdown", fn))
	{
		fd = open("./text/ft_countdown.txt", O_RDONLY);
		if (!fd)
			ft_putstrcolor("ERROR", "red");
	}
	else if(ft_strcmp("ft_print_numbers", fn))
	{
		fd = open("./text/ft_print_numbers.txt", O_RDONLY);
		if (!fd)
			ft_putstrcolor("ERROR", "red");
	}
	else if(ft_strcmp("maff_alpha", fn))
	{
		fd = open("./text/maff_alpha.txt", O_RDONLY);
		if (!fd)
			ft_putstrcolor("ERROR", "red");
	}
	else if(ft_strcmp("maff_revalpha", fn))
	{
		fd = open("./text/maff_revalpha.txt", O_RDONLY);
		if (!fd)
			ft_putstrcolor("ERROR", "red");
	}
	else if(ft_strcmp("only_a", fn))
	{
		fd = open("./text/only_a.txt", O_RDONLY);
		if (!fd)
			ft_putstrcolor("ERROR", "red");
	}
	else if(ft_strcmp("only_z", fn))
	{
		fd = open("./text/only_z.txt", O_RDONLY);
		if (!fd)
			ft_putstrcolor("ERROR", "red");
	}
	ft_display_file(fd);
	close(fd);
}

char	*file_name(char *fn)
{
	fn[ft_strlen(fn)] = '\0';
	return (fn);
}


/*void	ft_display_file(int fd)
{
	char	*buffer;

	while (read(fd, &buffer, 1))
		write(1, &buffer, 1);
}
*/
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

/*--------------------------- CHOICE OF LEVEL -------------------------------*/

	printf("At witch level do you want start ? \n");
	ret = scanf("%d", &lvl);
	if (!ret) //in case of problem
		printf("ERROR");
 /*
  *  we should also handle if the user choice is n > 0 ou n < 5
 */
/*---------------------GENERATOR FUNCTION -----------------------------------*/

	test = function_generator();
	//printf("%s\n", test);// result expeted !
	//(NULL) is printed after.

/*--------------------DISPLAY INSTRUCTION------------------------------------*/

	/*CREATION OF THE SUMISSION FOLDER*/
	system("clear");
	system("bash create_submissionfolder.sh");

	/*CREATION OF THE FILE NAME*/
	test = file_name(test);
	//printf("%s\n", test);
	//if (ft_strcmp(test,"hello") == 0)
	//	fd1 = open("./text/hello.txt", O_RDONLY);
	//	if(!fd1)
	//		ft_putstrcolor("ERROR INSTRUCTION", "red");
	//	ft_display_file(fd1);
	openinstruction(file_name(test));

}

