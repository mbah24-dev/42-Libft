/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 00:13:20 by mbah              #+#    #+#             */
/*   Updated: 2024/11/13 18:04:40 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*element;

	element = (t_list *) malloc(sizeof(t_list) * 1);
	if (element == NULL)
		return (NULL);
	element->content = content;
	element->next = (NULL);
	return (element);
}
