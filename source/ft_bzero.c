/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:56:41 by mbah              #+#    #+#             */
/*   Updated: 2024/10/08 17:59:16 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

/**
 * La  fonction bzero() met à 0 les n premiers octets
 * de l'espace mémoire pointé par s.
 *
 * \param	s	L'adresse d'un espace mémoire.
 * \param	n	Le nombre d'octets à mettre à 0.
 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
