/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:58:23 by mbah              #+#    #+#             */
/*   Updated: 2024/10/08 17:59:48 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

/**
 * La fonction ft_isspace() vérifie que c 
 * est un caractère blanc: espace, saut de page, 
 * changement de ligne, retour chariot, tabulation horizontale 
 * et tabulation verticale.
 *
 * \param	c	Un caractère non-signé.
 * \return		Un entier à valeur booléenne.
 */

int	ft_isspace(int c)
{
	return (c == ' ' || c == '\t' || c == '\v'
		|| c == '\n' || c == '\f' || c == '\r');
}
