/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:53:27 by mbah              #+#    #+#             */
/*   Updated: 2024/10/14 17:13:00 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/**
 * Applique la fonction f à chaque caractère de la 
 * chaîne de caractères transmise comme argument, et 
 * en passant son index comme premier argument. Chaque 
 * caractère est transmis par adresse à f pour être 
 * modifié si nécessaire.
 *
 * \param	s	La chaine de caractères sur laquelle itérer.
 * \param	f	La fonction à appliquer à chaque caractère.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
