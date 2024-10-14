/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 00:09:01 by mbah              #+#    #+#             */
/*   Updated: 2024/10/14 16:16:09 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

/**
 * Alloue et retourne une nouvelle chaine, 
 * résultat de la concaténation de s1 et s2.
 *
 * \param	s1	La chaine de caractères préfixe.
 * \param	s2	La chaine de caractères suffixe.
 * \return 		La nouvelle chaine de caractères.
 */
char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	s1_size;
	size_t	s2_size;
	char	*res;

	if (!s1 || !s2)
		return (NULL);
	s1_size = ft_strlen(s1);
	s2_size = ft_strlen(s2);
	res = (char *) ft_calloc(s1_size + s2_size + 1, sizeof(char));
	if (!res)
		return (NULL);
	ft_strcpy(res, s1);
	ft_strcat(res, s2);
	return (res);
}
