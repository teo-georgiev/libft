/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeorgie <tgeorgie@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:34:26 by tgeorgie          #+#    #+#             */
/*   Updated: 2023/11/01 15:55:26 by tgeorgie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	if (!lst || !new)
		return ((void)0);
	if (*lst == 0)
	{
		*lst = new;
		return ;
	}
	node = *lst;
	while (node->next != 0)
		node = node->next;
	node->next = new;
}
/*
#include <stdio.h>
int	main(void)
{
	t_list	*root;
	t_list	*node0;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	char	*str0 = "zero";
	char	*str1 = "one";
	char	*str2 = "two";
	char	*str3 = "three";

	node0 = ft_lstnew(str0);
	node1 = ft_lstnew(str1);
	node2 = ft_lstnew(str2);
	node3 = ft_lstnew(str3);
	root = 0;
	ft_lstadd_back(&root, node3);
	ft_lstadd_back(&root, node2);
	ft_lstadd_back(&root, node1);
	ft_lstadd_back(&root, node0);
	while (root)
	{
		printf("%s\n", root->content);
		root = root->next;
	}
	return (0);
}*/
