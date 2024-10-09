/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:22:25 by mbah              #+#    #+#             */
/*   Updated: 2024/10/09 23:38:55 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

static int	ft_itoa_len(long nbr)
{
	int		len;

	len = 1;
	if (nbr < 0)
		len++;
	while (nbr / 10 != 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

static void	ft_itoa_recursive(char *str, int *i, long nbr)
{
	if (nbr >= 10)
	{
		ft_itoa_recursive(str, i, nbr / 10);
		ft_itoa_recursive(str, i, nbr % 10);
	}
	else
	{
		str[*i] = nbr + 48;
		(*i)++;
	}
}

/**
 * Alloue et retourne une chaine de caractères représentant 
 * l’integer reçu en argument.
 *
 * \param	n	L'entier signé à convertir
 * \return		La chaine de caractères représentant l’entier signé.
 */
char	*ft_itoa(int n)
{
	char	*res;
	int		i;
	long	temp;

	temp = n;
	res = (char *) ft_calloc(ft_itoa_len(temp) + 1, 1);
	if (!res)
		return (NULL);
	i = 0;
	if (temp < 0)
	{
		res[i++] = '-';
		temp *= -1;
	}
	ft_itoa_recursive(res, &i, temp);
	res[i] = 0;
	return (res);
}
