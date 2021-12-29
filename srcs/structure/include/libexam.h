/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libexam.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 11:40:27 by briffard          #+#    #+#             */
/*   Updated: 2021/12/29 12:59:46 by briffard         ###   ########.fr       */
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

/*GLOBAL_VARIABLES*/

int lvl;

//#include "libft.h"

/*PROTOTYPE*/

void	exam_header();
void	sandbox_header();
char	*function_generator(int nbr);
void	openinstruction(char *fn, int lvl);
int		life(int currentLevel);

#endif
