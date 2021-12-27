/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <briffard@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:48:22 by briffard          #+#    #+#             */
/*   Updated: 2021/12/07 12:23:19 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_color(char *s)
{
	if (!ft_strcmp(s, "red"))
		ft_putstr(RED);
	if (!ft_strcmp(s, "normal"))
		ft_putstr(NORMAL);
	if (!ft_strcmp(s, "green"))
		ft_putstr(GREEN);
	if (!ft_strcmp(s, "yellow"))
		ft_putstr(YELLOW);
	if (!ft_strcmp(s, "blue"))
		ft_putstr(BLUE);
	if (!ft_strcmp(s, "magenta"))
		ft_putstr(MAGENTA);
	if (!ft_strcmp(s, "cyan"))
		ft_putstr(CYAN);
	if (!ft_strcmp(s, "white"))
		ft_putstr(WHITE);
}
