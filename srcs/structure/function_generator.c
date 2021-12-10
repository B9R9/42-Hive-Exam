/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function_generator.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 10:16:36 by ghorvath          #+#    #+#             */
/*   Updated: 2021/12/10 11:45:47 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libexam.h"
#include "./libft/includes/libft.h"

/*
**ft_randomnbr:		
randomly choose a number from the available functions from the choosen level
*/

int	ft_randomnbr(int n)
{
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
**ft_get_all_function:		
outputing the total amount of functions number in integer for randomnbr
*/

int	ft_get_all_function(int nbr)
{
	FILE	*fp = 0;
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
	FILE		*fp = 0;
	char		*line_buffer;
	size_t		line_buffer_size;
	ssize_t		line_size;
	int			line_counter;
	
	line_buffer = NULL;
	line_buffer_size = 0;
	line_counter = 1;
	if (nbr == 0)
		fp = fopen("./text/level00_function.txt", "r");
	else if (nbr == 1)
		fp =fopen ("./text/level01_function.txt", "r");
	else if (nbr == 2)
		fp =fopen ("./text/level02_function.txt", "r");
	else if (nbr == 3)
		fp =fopen ("./text/level03_function.txt", "r");
	else if (nbr == 4)
		fp =fopen ("./text/level04_function.txt", "r");
	else if (nbr == 5)
		fp =fopen ("./text/level05_function.txt", "r");
	else 
		ft_putstrcolor("Error in get function", "red");

	line_size = getline(&line_buffer, &line_buffer_size, fp);
	while (line_size >= 1 )
	{
		line_size = getline(&line_buffer, &line_buffer_size, fp);
		if (line_size == 1)
			continue;
		else if (line_counter == n)
		{
			return(line_buffer);
		}
		line_counter++;
	}
	free(line_buffer);
	line_buffer = NULL;
	fclose(fp);
	return (line_buffer);
}

char	*function_generator(int nbr)
{
	return (ft_get_function(ft_randomnbr(ft_get_all_function(nbr)), nbr));
}
