/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:15:43 by mbah              #+#    #+#             */
/*   Updated: 2024/11/15 23:53:12 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*s1_cpy;
	unsigned char	*s2_cpy;

	if (n == 0)
		return (0);
	s1_cpy = (unsigned char *) s1;
	s2_cpy = (unsigned char *) s2;
	while (*s1_cpy && *s2_cpy && *s1_cpy == *s2_cpy && n > 1)
	{
		s1_cpy++;
		s2_cpy++;
		n--;
	}
	return (*s1_cpy - *s2_cpy);
}
