/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:27:30 by mbah              #+#    #+#             */
/*   Updated: 2024/11/13 17:38:56 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_bis;

	i = 0;
	s_bis = (unsigned char *) s;
	while (i < n)
	{
		if (s_bis[i] == (unsigned char) c)
			return (s_bis + i);
		i++;
	}
	return (NULL);
}
