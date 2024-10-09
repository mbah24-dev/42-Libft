/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 00:31:00 by mbah              #+#    #+#             */
/*   Updated: 2024/10/09 10:52:44 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

/**
 * @brief Recherche le premier octet correspondant à `c` dans les `n` premiers octets
 *        de la zone mémoire pointée par `s`.
 *
 * La fonction `ft_memchr` parcourt les `n` premiers octets de la zone mémoire pointée
 * par `s` à la recherche de l'octet `c` (interprété comme un `unsigned char`).
 * Si l'octet est trouvé, la fonction renvoie un pointeur vers l'emplacement
 * du premier octet correspondant à `c`. Sinon, elle retourne `NULL`.
 *
 * @param s Pointeur vers la zone mémoire à examiner.
 * @param c Octet à rechercher (le caractère `c` est converti en `unsigned char`).
 * @param n Nombre d'octets à examiner dans la zone mémoire.
 * @return Renvoie un pointeur vers le premier octet correspondant à `c` dans la zone mémoire,
 *         ou `NULL` si `c` n'est pas trouvé dans les `n` premiers octets.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_bis;
	size_t			i;

	s_bis = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (s_bis[i] == (unsigned char) c)
			return (&s_bis[i]);
		i++;
	}
	return (NULL);
}
