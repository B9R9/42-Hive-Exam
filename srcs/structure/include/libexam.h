/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libexam.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:56:36 by briffard          #+#    #+#             */
/*   Updated: 2021/12/10 08:58:22 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBEXAM_H
# define LIBEXAM_H

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

#endif
