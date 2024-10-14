/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:26:58 by mbah              #+#    #+#             */
/*   Updated: 2024/10/14 16:32:22 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*res;
	int		i;

	res = (char *) s;
	i = 0;
	while (res[i] && res[i] != (unsigned char) c)
		i++;
	if (res[i] == '\0')
			return (NULL);
	return (&res[i]);
}
