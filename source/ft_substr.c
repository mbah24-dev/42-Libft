/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:24:11 by mbah              #+#    #+#             */
/*   Updated: 2024/10/14 17:24:32 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

/**
 * Alloue et retourne une chaine de caractères issue de
 * la chaine ’s’. Cette nouvelle chaine commence à l’index 
 * ’start’ et a pour taille maximale ’len’.
 *
 * \param	s		La chaine depuis laquelle extraire la nouvelle.
 * \param	start	L’index de début  dans la chaine ’s’.
 * \param	len		La taille maximale de la nouvelle chaine.
 * \return			La nouvelle chaine de caractères.
 */
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*res;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	res = (char *) ft_calloc(len + 1, 1);
	if (!res)
		return (NULL);
	ft_strlcpy(res, s + start, len + 1);
	return (res);
}
