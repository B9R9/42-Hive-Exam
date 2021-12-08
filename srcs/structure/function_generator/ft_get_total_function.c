/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_total_function.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 10:16:36 by ghorvath          #+#    #+#             */
/*   Updated: 2021/12/08 14:25:03 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <time.h>
#include <math.h>
/*
int	ft_randomnbr(int n)
{
	function need to take int n. n will be the total of len arr name function level i.
	srand(time(NULL));
	int	nbr;
	int	min;
	int	max;

	min = 1;
	max = 5;
	nbr = (rand()%(max - min + 1 )) + min;
	return (nbr);
}

int	ft_get_total_function()
{
	FILE	*fp;
	char	str[3];
	int		ret;

	fp = fopen("/Users/ghorvath/Workspace/ExamShell/srcs/structure/function_generator/level1_function.txt", "r");
	fgets(str, 3, fp);
	ret = atoi(str);
	printf("%d", ret);
	fclose(fp);
	return (ret);
}
*/
void	get_function()
{
	FILE		*fp;
	char		*line_buffer;
	size_t		line_buffer_size;
	ssize_t		line_size;
	int			line_counter;

	line_buffer = NULL;
	line_buffer_size = 0;
	line_counter = 0;
	/*if (!fp)
	{
		perror("ERROR! Can not open this file!");
		exit(EXIT_FAILURE);
	}*/
	fp = fopen("/Users/ghorvath/Workspace/ExamShell/srcs/structure/function_generator/level1_function.txt", "r");
	line_size = getline(&line_buffer, &line_buffer_size, fp);
	while (line_size >= 0)
	{
		if (line_size == 1)
			continue;
		else
			line_size = getline(&line_buffer, &line_buffer_size, fp);
			printf("%s", line_buffer);
		line_counter++;

	}
	free(line_buffer);
	line_buffer = NULL;
	/*if (fclose(fp) == -1)
	{
		perror("ERROR! Can not close this file");
		exit(EXIT_FAILURE);
	}
	return (*line_buffer);*/
}

int main()
{
	get_function();
	//ft_randomnbr(ft_get_total_function());
	//ft_get_total_function(ft_randomnbr());
}
