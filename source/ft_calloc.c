/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:56:48 by mbah              #+#    #+#             */
/*   Updated: 2024/10/08 17:59:22 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

/**
 * La fonction ft_calloc() alloue la mémoire nécessaire pour
 * un tableau de nmemb éléments de size octets, et renvoie un pointeur
 * vers la mémoire allouée qui a été remplie avec des zéros.
 *
 * \param	nmemb	Le nombre d'élements du tableau.
 * \param	size	La taille des élements du tableau.
 * \return			L'adresse de l'espace mémoire alloué.
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	array = malloc(nmemb * size);
	if (!array)
		return (NULL);
	ft_bzero(array, nmemb * size);
	return (array);
}
