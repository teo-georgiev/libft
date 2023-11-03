/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeorgie <tgeorgie@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:08:35 by tgeorgie          #+#    #+#             */
/*   Updated: 2023/11/01 15:05:22 by tgeorgie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (0);
	if (!content)
		node->content = 0;
	else
		node->content = content;
	node->next = 0;
	return (node);
}
/*
int	main(void)
{
	char	s[] = "lorem ipsum";
	int		i = 97;
	t_list	*elem;

	elem = ft_lstnew(&i);
	//write(1, elem->content, ft_strlen(&i));
	write(1, elem->content, 1);
	return (0);
}*/
