/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 22:01:11 by mbah              #+#    #+#             */
/*   Updated: 2024/11/07 22:45:10 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_strcat(char *dst, const char *src)
{
	size_t	i;
	size_t	d_len;

	i = 0;
	d_len = ft_strlen(dst);
	while (src[i])
	{
		dst[d_len] = src[i];
		i++;
		d_len++;
	}
	dst[d_len] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	res_size;

	if (!s1 || !s2)
		return (NULL);
	res_size = ft_strlen(s1) + ft_strlen(s2);
	res = (char *) malloc((res_size + 1) * sizeof(char));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1, ft_strlen(s1) + 1);
	ft_strcat(res, s2);
	return (res);
}
