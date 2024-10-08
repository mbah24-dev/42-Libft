/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:58:18 by mbah              #+#    #+#             */
/*   Updated: 2024/10/08 17:59:41 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

/**
 * La fonction ft_isprint() vérifie que c 
 * est un caractère imprimable, y compris l'espace.
 *
 * \param	c	Un caractère non-signé.
 * \return		Un entier à valeur booléenne.
 */

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
