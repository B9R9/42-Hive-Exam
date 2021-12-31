/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function_generator.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 10:16:36 by ghorvath          #+#    #+#             */
/*   Updated: 2021/12/31 11:10:23 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libexam.h"
#include "./libft/libft.h"

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

int	ft_get_all_function(int nbr)
{
	FILE	*fp = NULL;
	char	str[3];
	int		ret;

	if (nbr == 0)
		fp = fopen("./text/level00_function.txt", "r");
	else if (nbr == 1)
		fp =fopen ("./text/level01_function.txt", "r");
	else if (nbr == 2)
		fp =fopen ("./text/level02_function.txt", "r");
	else if (nbr  == 3)
		fp =fopen ("./text/level03_function.txt", "r");
	else if (nbr == 4)
		fp =fopen ("./text/level04_function.txt", "r");
	else if (nbr == 5)
		fp =fopen ("./text/level05_function.txt", "r");
	else
		ft_putstrcolor("Trouble open file\n ", "red");
	fgets(str, 3, fp);
	ret = atoi(str);
	fclose(fp);
	return (ret);
}

/*
**ft_get_function:		open and read all the given function from the txt file
**and output it, that ft_randomnbr could chose randomly one
*/

char	*ft_get_function(int n, int nbr)
{
	int			fp = 0;
	char		*line_buffer = NULL;
	int			line_size;
	int			line_counter = 0;

	if (nbr == 0)
		fp = open("./text/level00_function.txt", O_RDONLY);
	else if (nbr == 1)
		fp = open ("./text/level01_function.txt", O_RDONLY);
	else if (nbr == 2)
		fp = open ("./text/level02_function.txt", O_RDONLY);
	else if (nbr == 3)
		fp = open ("./text/level03_function.txt", O_RDONLY);
	else if (nbr == 4)
		fp = open ("./text/level04_function.txt", O_RDONLY);
	else if (nbr == 5)
		fp = open ("./text/level05_function.txt", O_RDONLY);
	else
		ft_putstrcolor("Error in get function", "red");
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

char	*function_generator(int nbr)
{
	return (ft_get_function(ft_randomnbr(ft_get_all_function(nbr)), nbr));
}
