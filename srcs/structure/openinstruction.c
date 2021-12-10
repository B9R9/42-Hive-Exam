/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   openinstruction.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <briffard@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 09:17:15 by briffard          #+#    #+#             */
/*   Updated: 2021/12/10 09:19:15 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libexam.h"
#include "./libft/includes/libft.h"

void	openinstruction(char *fn)
{
	/*---------------------------DANGER ------------------------
	 * The result of  ft_strcmp is not  reliable
	 * it can generate mistake when you will have a difference of 10 between 
	 * two string
	 */

	int	fd = 0;

	if(ft_strcmp(fn, "hello") == 10)
	{
		printf("Dans le  if 1\n");
		fd = open("./text/hello.txt", O_RDONLY);
		if (!fd)
			ft_putstrcolor("ERROR", "red");
	}
	else if(ft_strcmp(fn, "aff_a")== 10)
	{
		printf("Dans le  if 2\n");
		fd = open("./text/aff_a.txt", O_RDONLY);
		if (!fd)
			ft_putstrcolor("ERROR", "red");
	}
	else if(ft_strcmp(fn, "aff_first_param") == 10)
	{
		printf("Dans le  if 3\n");
		fd = open("./text/aff_first_param.txt", O_RDONLY);
		if (!fd)
			ft_putstrcolor("ERROR", "red");
	}
	else if(ft_strcmp(fn, "aff_last_param") == 10)
	{
		printf("Dans le  if 4\n");
		fd = open("./text/aff_last_param.txt", O_RDONLY);
		if (!fd)
			ft_putstrcolor("ERROR", "red");
	}
	else if(ft_strcmp(fn, "aff_z") == 10)
	{
		printf("Dans le  if 5\n");
		fd = open("./text/aff_z.txt", O_RDONLY);
		if (!fd)
			ft_putstrcolor("ERROR", "red");
	}
	else if(ft_strcmp(fn, "ft_countdown") == 10)
	{
		printf("Dans le  if 6\n");
		fd = open("./text/ft_countdown.txt", O_RDONLY);
		if (!fd)
			ft_putstrcolor("ERROR", "red");
	}
	else if(ft_strcmp(fn, "ft_print_numbers") == 10)
	{
		printf("Dans le  if 7\n");
		fd = open("./text/ft_print_numbers.txt", O_RDONLY);
		if (!fd)
			ft_putstrcolor("ERROR", "red");
	}
	else if(ft_strcmp(fn, "maff_alpha") == 10)
	{
		printf("Dans le  if 8\n");
		fd = open("./text/maff_alpha.txt", O_RDONLY);
		if (!fd)
			ft_putstrcolor("ERROR", "red");
	}
	else if(ft_strcmp(fn, "maff_revalpha") == 10)
	{
		printf("Dans le  if 9\n");
		fd = open("./text/maff_revalpha.txt", O_RDONLY);
		if (!fd)
			ft_putstrcolor("ERROR", "red");
	}
	else if(ft_strcmp(fn, "only_a") == 10)
	{
		printf("Dans le  if 10\n");
		fd = open("./text/only_a.txt", O_RDONLY);
		if (!fd)
			ft_putstrcolor("ERROR", "red");
	}
	else if(ft_strcmp(fn, "only_z") == 10)
	{
		printf("Dans le  if 11\n");
		fd = open("./text/only_z.txt", O_RDONLY);
		if (!fd)
			ft_putstrcolor("ERROR", "red");
	}
	else
		ft_putstrcolor("erreur dans open instruction!", "red");
	ft_display_file(fd);
	close(fd);
}
