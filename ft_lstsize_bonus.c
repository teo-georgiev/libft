/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeorgie <tgeorgie@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:10:16 by tgeorgie          #+#    #+#             */
/*   Updated: 2023/11/01 17:27:05 by tgeorgie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*root;

	if (!lst)
		return (0);
	size = 0;
	root = lst;
	while (root)
	{
		size++;
		root = root->next;
	}
	return (size);
}
/*
#include <stdio.h>
int	main(void)
{
	t_list  *root;
	t_list  *node0;
	t_list  *node1;
	t_list  *node2;
	t_list  *node3;
	char    *str0 = "zero";
	char    *str1 = "one";
	char    *str2 = "two";
	char    *str3 = "three";

	node0 = ft_lstnew(str0);
	node1 = ft_lstnew(str1);
	node2 = ft_lstnew(str2);
	node3 = ft_lstnew(str3);
	root = 0;
	ft_lstadd_front(&root, node3);
	ft_lstadd_front(&root, node2);
	ft_lstadd_front(&root, node1);
	ft_lstadd_front(&root, node0);

	printf("%d\n", ft_lstsize(root));
	return (0);
}*/
