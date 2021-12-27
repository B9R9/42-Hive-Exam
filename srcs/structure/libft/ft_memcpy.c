/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <briffard@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:55:41 by briffard          #+#    #+#             */
/*   Updated: 2021/12/03 08:20:33 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void	*dest, const void	*src, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*s;

	if (!src && !dest)
		return (NULL);
	s = (unsigned char *) src;
	p = (unsigned char *) dest;
	i = 0;
	while (i < n)
	{
		p[i] = s[i];
		i++;
	}
	dest = (unsigned char *)p;
	return (dest);
}
