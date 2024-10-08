/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 00:28:34 by mbah              #+#    #+#             */
/*   Updated: 2024/10/09 00:31:59 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

/**
 * @brief Compare les `n` premiers octets des zones mémoire `s1` et `s2`.
 *
 * La fonction `ft_memcmp` compare les `n` premiers octets des zones mémoire
 * pointées par `s1` et `s2`. Elle renvoie une valeur négative, nulle ou
 * positive en fonction de la différence entre les octets des deux zones mémoire.
 * 
 * Si les deux zones mémoire sont identiques sur les `n` premiers octets,
 * la fonction retourne 0. Autrement, elle renvoie la différence entre le
 * premier octet différent (interprété comme `unsigned char`).
 *
 * @param s1 Pointeur vers la première zone mémoire.
 * @param s2 Pointeur vers la deuxième zone mémoire.
 * @param n Nombre d'octets à comparer.
 * @return Renvoie un entier négatif si `s1` est inférieure à `s2`, 0 si elles sont
 *         égales, ou un entier positif si `s1` est supérieure à `s2`.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*pstr1;
	unsigned char	*pstr2;

	if (n == 0)
		return (0);
	pstr1 = (unsigned char *) s1;
	pstr2 = (unsigned char *) s2;
	while (*pstr1 == *pstr2 && n > 1)
	{
		pstr1++;
		pstr2++;
		n--;
	}
	return (*pstr1 - *pstr2);
}
