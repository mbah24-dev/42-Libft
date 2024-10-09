/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 00:08:47 by mbah              #+#    #+#             */
/*   Updated: 2024/10/09 10:44:35 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

/**
 * @brief Copie `n` octets de la zone mémoire `src` vers la zone mémoire `dest`,
 *        en prenant en compte les chevauchements (overlap) possibles entre
 *        les deux zones.
 *
 * Cette fonction fonctionne correctement même si les zones `src` et `dest`
 * se chevauchent, en copiant les octets de manière sûre.
 * Si `dest` est situé après `src` dans la mémoire, la copie se fait
 * en partant de la fin pour éviter l'écrasement des données.
 *
 * @param dest Pointeur vers la zone mémoire de destination où copier les octets.
 * @param src Pointeur vers la zone mémoire source à partir de laquelle copier les octets.
 * @param n Nombre d'octets à copier de `src` vers `dest`.
 * @return Renvoie un pointeur vers la zone mémoire `dest`.
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*psrc;
	unsigned char	*pdest;
	size_t			i;

	pdest = (unsigned char *) dest;
	psrc = (unsigned char *) src;
	i = 0;
	if (dest > src)
	{
		while (i < n)
		{
			pdest[n - 1 - i] = psrc[n - 1 - i];
			i++;
		}
	}
	else
		ft_memcpy(pdest, psrc, n);
	return (pdest);
}
