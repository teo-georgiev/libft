/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeorgie <tgeorgie@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:40:44 by tgeorgie          #+#    #+#             */
/*   Updated: 2023/11/01 15:10:01 by tgeorgie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*head;

	if (!lst || !new)
		return ((void)0);
	head = *lst;
	new->next = head;
	*lst = new;
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
	ft_lstadd_front(&root, node3);
	ft_lstadd_front(&root, node2);
	ft_lstadd_front(&root, node1);
	ft_lstadd_front(&root, node0);
	while (root)
	{
		printf("%s\n", root->content);
		root = root->next;
	}
	return (0);
}*/
