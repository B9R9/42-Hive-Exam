/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libexam.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 11:40:27 by briffard          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/12/27 14:55:14 by ghorvath         ###   ########.fr       */
=======
/*   Updated: 2021/12/27 13:50:14 by briffard         ###   ########.fr       */
>>>>>>> 6a04c711d42ff0c18ce3f24b831372ea96fbd378
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBEXAM_H
# define LIBEXAM_H

/*INCLUDE*/

# include <time.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <math.h>
# include <stdbool.h>

int lvl;

//#include "libft.h"

/*PROTOTYPE*/

int		ft_randomnbr(int n);
void	exam_header();
void	sandbox_header();
char	*function_generator(int nbr);
void	openinstruction(char *fn, int lvl);
void	ft_display_file(int fd);
<<<<<<< HEAD
int		life(int currentLevel);
=======
int		life(int result, int lvl);
>>>>>>> 6a04c711d42ff0c18ce3f24b831372ea96fbd378

#endif
