/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:14:48 by mbah              #+#    #+#             */
/*   Updated: 2024/10/09 11:44:32 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

/**
 * @brief Écrit un entier sur un descripteur de fichier donné.
 *
 * La fonction `ft_putnbr_fd` affiche l'entier `n` sur le descripteur de fichier
 * spécifié par `fd`. Elle gère les entiers négatifs en ajoutant un signe `-` avant
 * de convertir et d'afficher les chiffres un par un.
 *
 * @param n L'entier à afficher.
 * @param fd Le descripteur de fichier sur lequel écrire (par exemple, 1 pour la sortie standard, 2 pour la sortie d'erreur).
 */
void	ft_putnbr_fd(int n, int fd)
{
	long int	nbr;

	nbr = n;
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr *= -1;
	}
	if (nbr >= 10)
		ft_putnbr_fd(nbr / 10, fd);
	ft_putchar_fd(((nbr % 10) + 48), fd);
}
