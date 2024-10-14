/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 00:10:25 by mbah              #+#    #+#             */
/*   Updated: 2024/10/14 16:00:05 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_size;
	size_t	src_size;
	size_t	res;

	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	if (size <= dest_size)
		return (src_size + size);
	res = src_size + dest_size;
	src_size = 0;
	while (src[src_size] && dest_size < size - 1)
	{
		dest[dest_size] = src[src_size];
		dest_size++;
		src_size++
	}
		
	dest[dest_size] = '\0';
	return (res);
}
