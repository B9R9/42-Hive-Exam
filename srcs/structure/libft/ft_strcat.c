/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <briffard@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:00:06 by briffard          #+#    #+#             */
/*   Updated: 2021/12/01 14:00:09 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char	*s1, char	*s2)
{
	unsigned int	len;
	unsigned int	i;

	len = ft_strlen(s1);
	i = 0;
	while (s2[i] != '\0')
		s1[len++] = s2[i++];
	s1[len] = '\0';
	return (s1);
}
