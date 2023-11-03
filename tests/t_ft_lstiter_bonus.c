/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeorgie <tgeorgie@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:17:02 by tgeorgie          #+#    #+#             */
/*   Updated: 2023/11/02 12:56:34 by tgeorgie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_libft.h"

static void	print_content(void *s)
{
    printf("%s\n", s);
	printf("---------\n");
}

void	t_ft_lstiter(void)
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
    ft_lstclear(&root, print_content);
}
