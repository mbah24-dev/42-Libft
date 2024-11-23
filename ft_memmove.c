/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:59:18 by mbah              #+#    #+#             */
/*   Updated: 2024/11/06 20:13:03 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*cpy_dest;
	unsigned char	*cpy_src;

	i = 0;
	cpy_dest = (unsigned char *) dest;
	cpy_src = (unsigned char *) src;
	if (dest > src)
	{
		while (i < n)
		{
			cpy_dest[n - 1 - i] = cpy_src[n - 1 - i];
			i++;
		}
	}
	else
		ft_memcpy(cpy_dest, cpy_src, n);
	return (cpy_dest);
}
