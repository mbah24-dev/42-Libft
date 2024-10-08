/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:58:53 by mbah              #+#    #+#             */
/*   Updated: 2024/10/08 17:59:52 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

/**
 * La fonction ft_isupper() vérifie que c 
 * est un caractère majuscule.
 *
 * \param	c	Un caractère non-signé.
 * \return		Un entier à valeur booléenne.
 */

int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
