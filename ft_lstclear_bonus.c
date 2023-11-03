/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeorgie <tgeorgie@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:07:32 by tgeorgie          #+#    #+#             */
/*   Updated: 2023/11/02 10:02:27 by tgeorgie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*curr;

	if (!lst || !*lst)
		return ;
	curr = *lst;
	while (curr)
	{
		tmp = curr;
		curr = curr->next;
		del(tmp->content);
		free(tmp);
	}
	*lst = 0;
}
/*
void    free_content(void *s)
{
    free(s);
}

#include <stdio.h>
int main(void)
{
    t_list  *root;
    t_list  *node0;
    t_list  *node1;
    t_list  *node2;
    t_list  *node3;
    char    s0[] = "zero";
    char    s1[] = "one";
    char    s2[] = "two";
    char    s3[] = "three";

    node0 = ft_lstnew(s0);
    node1 = ft_lstnew(s1);
    node2 = ft_lstnew(s2);
    node3 = ft_lstnew(s3);
    root = 0;

    ft_lstadd_back(&root, node0);
    ft_lstadd_back(&root, node1);
    ft_lstadd_back(&root, node2);
    ft_lstadd_back(&root, node3);

    printf("%s\n", node0->content);
    printf("%p\n\n", node0->next);
    ft_lstclear(&root, &free_content);
    return (0);
}*/
