/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libexam.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 11:40:27 by briffard          #+#    #+#             */
/*   Updated: 2021/12/27 14:47:01 by ghorvath         ###   ########.fr       */
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
void	openinstruction(char *fn);
void	ft_display_file(int fd);
int		life(int currentLevel);

#endif
