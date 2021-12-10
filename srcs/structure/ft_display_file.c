/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <briffard@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 09:30:51 by briffard          #+#    #+#             */
/*   Updated: 2021/12/10 09:31:53 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libexam.h"
#include "./libft/includes/libft.h"

void	ft_display_file(int fd)
{
	char	*buffer;

	while (read(fd, &buffer, 1))
		write(1, &buffer, 1);
}

