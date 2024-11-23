/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 00:25:15 by mbah              #+#    #+#             */
/*   Updated: 2024/11/18 13:19:09 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_reslen(int n)
{
	int	len;

	len = 1;
	if (n < 0)
		len++;
	while (n / 10 != 0)
	{
		n /= 10;
		len += 1;
	}
	return (len);
}

static void	ft_itoa_recursive(long nb, char *res, int *i)
{
	if (nb >= 10)
	{
		ft_itoa_recursive(nb / 10, res, i);
		ft_itoa_recursive(nb % 10, res, i);
	}
	else
	{
		res[*i] = nb + 48;
		(*i) += 1;
	}
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;
	long	nb;

	nb = n;
	i = 0;
	res = (char *) malloc((ft_reslen(nb) + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	if (n < 0)
	{
		res[i] = '-';
		i++;
		nb *= -1;
	}
	ft_itoa_recursive(nb, res, &i);
	res[i] = '\0';
	return (res);
}
