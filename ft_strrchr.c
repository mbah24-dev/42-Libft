/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:02:44 by mbah              #+#    #+#             */
/*   Updated: 2024/11/18 13:17:44 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*s_bis;

	i = ft_strlen(s);
	s_bis = (char *) s;
	while (s_bis[i] != (unsigned char) c)
	{
		if (i == 0)
			return (NULL);
		i--;
	}
	return (s_bis + i);
}
