/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 00:13:16 by mbah              #+#    #+#             */
/*   Updated: 2024/10/09 00:18:55 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

/**
 * @brief Copie `n` octets de la zone mémoire `src` vers la zone mémoire `dest`.
 *
 * La fonction `ft_memcpy` copie exactement `n` octets de la mémoire pointée par `src`
 * vers la mémoire pointée par `dest`. Les zones source et destination ne doivent
 * pas se chevaucher, car cela pourrait entraîner un comportement indéfini.
 * 
 * Si `dest` et `src` sont tous deux nuls (`NULL`), la fonction retourne `NULL`.
 *
 * @param dest Pointeur vers la zone mémoire de destination où copier les octets.
 * @param src Pointeur vers la zone mémoire source à partir de laquelle copier les octets.
 * @param n Nombre d'octets à copier de `src` vers `dest`.
 * @return Renvoie un pointeur vers la zone mémoire `dest`.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*pdest;
	char	*psrc;
	size_t	i;

	if (!dest && !src)
		return (NULL);
	pdest = (char *) dest;
	psrc = (char *) src;
	i = 0;
	while (i < n)
	{
		pdest[i] = psrc[i];
		i++;
	}
	return (pdest);
}
