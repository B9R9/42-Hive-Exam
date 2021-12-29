/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function_generator_GNL_imp.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 13:59:55 by ghorvath          #+#    #+#             */
/*   Updated: 2021/12/29 14:03:21 by ghorvath         ###   ########.fr       */
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

	fp = fopen("/Users/ghorvath/Workspace/ExamShell_updated/srcs/structure/text/level00_function.txt", "r");
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
	int			fp;
	char		*line_buffer = NULL;
	int			line_size;
	int			line_counter = 0;

	fp = open("/Users/ghorvath/Workspace/ExamShell_updated/srcs/structure/text/level00_function.txt", O_RDONLY);
	line_size = get_next_line(fp, &line_buffer);
	while (line_size >= 0)
	{
		free(line_buffer);
		line_size = get_next_line(fp, &line_buffer);
		if (line_size == 0)
			break;
		else if (line_counter == n)
		{
			return (line_buffer);
			break ;
		}
		line_counter++;
	}
	close(fp);
	return (line_buffer);
}
