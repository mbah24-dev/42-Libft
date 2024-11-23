/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 23:50:53 by mbah              #+#    #+#             */
/*   Updated: 2024/11/13 17:44:38 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	temp;

	temp = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		temp = -n;
	}
	if (temp > 9)
	{
		ft_putnbr_fd((temp / 10), fd);
		ft_putchar_fd((temp % 10) + 48, fd);
	}
	else
		ft_putchar_fd(temp + 48, fd);
}
