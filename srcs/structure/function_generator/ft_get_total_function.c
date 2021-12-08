/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_total_function.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 10:16:36 by ghorvath          #+#    #+#             */
/*   Updated: 2021/12/08 12:27:35 by ghorvath         ###   ########.fr       */
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

int	ft_randomnbr(int n)
{
	/*function need to take int n. n will be the total of len arr name function level i.*/
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

char	*get_function(int n)
{
	FILE	*fp;
	static char	start[100];
	int		ret;

	fp = fopen("/Users/ghorvath/Workspace/ExamShell/srcs/structure/function_generator/level1_function.txt", "r");
	fgets(&start[1], 4, fp);
	printf("%s", start);
	return (start);
}



int main()
{
	//get_totalfunction();
	ft_randomnbr(ft_get_total_function());
	//ft_get_total_function(ft_randomnbr());
}
