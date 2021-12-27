/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <briffard@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:02:55 by briffard          #+#    #+#             */
/*   Updated: 2021/12/01 14:03:00 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char	*s, void (*f)(char *))
{
	unsigned int	i;

	i = 0;
	if (s != NULL)
	{
		while (s[i] != '\0')
		{
			(*f)(&s[i]);
			i++;
		}
	}
}
