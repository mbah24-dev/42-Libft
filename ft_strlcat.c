/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 19:46:49 by mbah              #+#    #+#             */
/*   Updated: 2024/11/18 13:03:03 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	result;
	size_t	s_size;
	size_t	d_size;
	size_t	i;

	i = 0;
	s_size = ft_strlen(src);
	d_size = ft_strlen(dst);
	if (size <= d_size)
		return (size + s_size);
	result = (d_size + s_size);
	while (src[i] && d_size + 1 < size)
	{
		dst[d_size] = src[i];
		d_size++;
		i++;
	}
	dst[d_size] = '\0';
	return (result);
}
