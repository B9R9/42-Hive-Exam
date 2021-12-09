/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libexam.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <briffard@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:56:36 by briffard          #+#    #+#             */
/*   Updated: 2021/12/09 09:42:23 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBEXAM_H
# define LIBEXAM_H

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

#endif
