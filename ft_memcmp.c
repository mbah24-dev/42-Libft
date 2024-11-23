/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:46:19 by mbah              #+#    #+#             */
/*   Updated: 2024/11/18 16:38:45 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_bis;
	unsigned char	*s2_bis;

	i = 0;
	s1_bis = (unsigned char *) s1;
	s2_bis = (unsigned char *) s2;
	while ((s1_bis[i] == s2_bis[i]) && n != 0 && (i < n - 1))
		i++;
	if (i == n)
		return (0);
	return (s1_bis[i] - s2_bis[i]);
}
