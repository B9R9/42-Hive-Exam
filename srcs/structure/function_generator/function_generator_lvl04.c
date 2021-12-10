/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function_generator_lvl04.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 10:16:36 by ghorvath          #+#    #+#             */
/*   Updated: 2021/12/10 09:13:47 by ghorvath         ###   ########.fr       */
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
**ft_randomnbr:		randomly choose a number from the available functions from the choosen level
*/

int	ft_randomnbr(int n)
{
	//function need to take int n. n will be the total of len arr name function level i.
	srand(time(NULL));
	int	nbr;
	int	min;
	int	max;

	min = 1;
	max = n;
	nbr = (rand()%(max - min + 1 )) + min;
	return (nbr);
}

/*
**ft_get_all_function:		outputing the total amount of functions number in integer for randomnbr
*/

int	ft_get_all_function()
{
	FILE	*fp;
	char	str[3];
	int		ret;

	fp = fopen("./structure/function_generator/level04_function.txt", "r");
	fgets(str, 3, fp);
	ret = atoi(str);
	fclose(fp);
	return (ret);
}

/*
**ft_get_function:		open and read all the given function from the txt file
**and output it, that ft_randomnbr could chose randomly one
*/

char	*ft_get_function(int n)
{
	FILE		*fp;
	char		*line_buffer;
	size_t		line_buffer_size;
	ssize_t		line_size;
	int			line_counter;

	line_buffer = NULL;
	line_buffer_size = 0;
	line_counter = 1;
	fp = fopen("./structure/function_generator/level04_function.txt", "r");
	line_size = getline(&line_buffer, &line_buffer_size, fp);
	while (line_size >= 1)
	{
		line_size = getline(&line_buffer, &line_buffer_size, fp);
		if (line_size == 1)
			continue;
		else if (line_counter == n)
		{
			return (line_buffer);
		}
		line_counter++;
	}
	free(line_buffer);
	line_buffer = NULL;
	fclose(fp);
	return (line_buffer);
}

int main()
{
	ft_get_function(ft_randomnbr(ft_get_all_function()));
	return (0);
}
