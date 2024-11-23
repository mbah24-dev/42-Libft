/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:52:57 by mbah              #+#    #+#             */
/*   Updated: 2024/11/18 13:06:55 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*s_bis;

	i = 0;
	s_bis = (char *) s;
	while (s_bis[i] != (unsigned char) c)
	{
		if (s_bis[i] == '\0')
			return (NULL);
		i++;
	}
	return (s_bis + i);
}
