/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <briffard@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:54:24 by briffard          #+#    #+#             */
/*   Updated: 2021/12/01 13:54:28 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memalloc(size_t	size)
{
	unsigned char	*arr;
	unsigned int	i;

	i = 0;
	arr = (unsigned char *)malloc(size);
	if (arr == NULL)
		return (NULL);
	else
	{
		while (i <= size)
		{
			arr[i] = '\0';
			i++;
		}
	}
	return (arr);
}
