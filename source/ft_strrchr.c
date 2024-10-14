/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:14:34 by mbah              #+#    #+#             */
/*   Updated: 2024/10/14 17:18:17 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*res;
	int		i;

	res = (char *) s;
	i = ft_strlen(s);
	while (i > 0 && res[i] != (unsigned char) c)
		i--;
	if (i == 0)
			return (NULL);
	return (&res[i]);
}
