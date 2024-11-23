/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:42:30 by mbah              #+#    #+#             */
/*   Updated: 2024/11/20 16:07:28 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*cpy_dest;
	char	*cpy_src;

	if (!dest && !src)
		return (NULL);
	cpy_dest = (char *) dest;
	cpy_src = (char *) src;
	i = 0;
	while (i < n)
	{
		cpy_dest[i] = cpy_src[i];
		i++;
	}
	return (cpy_dest);
}
