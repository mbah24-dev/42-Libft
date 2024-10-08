/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:35:22 by mbah              #+#    #+#             */
/*   Updated: 2024/10/08 18:20:23 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

static int	ft_atoi_overflow(int sign)
{
	if (sign < 0)
		return (0);
	return (-1);
}

/**
 * La  fonction ft_atoi() convertit le début de la chaîne pointée 
 * par nptr en entier de type int. 
 *
 * \param	nptr	Une chaine de caractère.
 * \return			Un entier signé de type int.
 */

int	ft_atoi(const char *nptr)
{
	unsigned long	nbr;
	int				sign;

	while (ft_isspace(*nptr))
		nptr++;
	sign = 1;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	nbr = 0;
	while (ft_isdigit(*nptr))
	{
		if ((nbr * 10 + (*nptr - '0')) / 10 != nbr)
			return (ft_atoi_overflow(sign));
		nbr = nbr * 10 + (*nptr - 48);
		nptr++;
	}
	return (sign * nbr);
}
