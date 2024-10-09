/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 00:40:07 by mbah              #+#    #+#             */
/*   Updated: 2024/10/09 10:56:04 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

/**
 * @brief Copie des octets de la zone mémoire `src` vers la zone mémoire `dest`
 *        jusqu'à ce que le caractère `c` soit trouvé, ou jusqu'à avoir copié
 *        `n` octets.
 * La fonction `ft_memccpy` copie des octets de la zone mémoire `src` vers `dest`.
 * La copie s'arrête lorsque le caractère `c` (interprété comme un `unsigned char`)
 * est trouvé dans `src`, ou après avoir copié `n` octets. Si le caractère `c`
 * est trouvé, un pointeur vers l'octet suivant dans `dest` est renvoyé.
 * Sinon, la fonction retourne `NULL`.
 *
 * @param dest Pointeur vers la zone mémoire de destination où copier les octets.
 * @param src Pointeur vers la zone mémoire source à partir de laquelle copier les octets.
 * @param c Caractère à rechercher pendant la copie (converti en `unsigned char`).
 * @param n Nombre maximum d'octets à copier.
 * @return Renvoie un pointeur vers l'octet suivant `c` dans la zone `dest` si `c` est trouvé.
 *         Si `c` n'est pas trouvé après avoir copié `n` octets, retourne `NULL`.
 */
void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*pdest;
	unsigned char	*psrc;
	size_t			i;

	pdest = (unsigned char *) dest;
	psrc = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		pdest[i] = psrc[i];
		if (psrc[i] == (unsigned char) c)
			return (pdest + i + 1);
		i++;
	}
	return (NULL);
}
