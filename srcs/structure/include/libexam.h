/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libexam.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:56:36 by briffard          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/12/10 08:58:22 by ghorvath         ###   ########.fr       */
=======
/*   Updated: 2021/12/09 09:42:23 by briffard         ###   ########.fr       */
>>>>>>> 2c7b7d182d4393682f84048960b32cad9c696220
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBEXAM_H
# define LIBEXAM_H

<<<<<<< HEAD
/*INCLUDES*/

# include <stdio.h>
# include <string.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <time.h>
# include <math.h>
# include "libft.h"

/*PROTOTYPES*/
void	ft_display_file(int fd);
void	ft_checkfd();
void	clearBuffer();
int		ft_read(char *str, int lenght);
int		ft_randomnbr();
void	exam_header();
void	sandbox_header();
=======
/*INCLUDE*/

#include<time.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<math.h>

//#include "libft.h"

/*PROTOTYPE*/

int		ft_randomnbr(int n);
void	header();
char    *function_generator();
void    openinstruction(char *fn);
void    ft_display_file(int fd);
>>>>>>> 2c7b7d182d4393682f84048960b32cad9c696220

#endif
