/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 00:08:24 by mbah              #+#    #+#             */
/*   Updated: 2024/10/14 16:21:55 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*res;
	int		res_len;

	res_len = ft_strlen(s) + 1;
	res = (char *) ft_calloc(res_len, 1);
	if (!res)
		return (NULL);
	return (ft_strcpy(res, s));
}
