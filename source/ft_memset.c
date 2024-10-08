/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 22:02:17 by mbah              #+#    #+#             */
/*   Updated: 2024/10/09 00:07:25 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Remplit les `n` premiers octets de la zone mémoire pointée par `s`
 *        avec l'octet `c`.
 *
 * Cette fonction remplace chaque octet de la mémoire pointée par `s` par
 * la valeur `c` (après conversion de `c` en `unsigned char`) sur les
 * `n` premiers octets.
 *
 * @param s Pointeur vers la zone mémoire à remplir.
 * @param c Valeur (de type int) à copier dans chaque octet de la zone mémoire.
 *          Cette valeur est convertie en `unsigned char` avant la copie.
 * @param n Nombre d'octets à remplir à partir du début de la zone mémoire pointée par `s`.
 * @return Renvoie un pointeur vers la zone mémoire `s`.
 */
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*s_cpy;
	size_t			i;

	i = 0;
	s_cpy = (unsigned char *) s;
	while (i < n)
	{
		s_cpy[i] = (unsigned char) c;
		i++;
	}
	return (s);
}
