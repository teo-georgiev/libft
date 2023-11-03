/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeorgie <tgeorgie@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:25:16 by tgeorgie          #+#    #+#             */
/*   Updated: 2023/11/02 10:13:40 by tgeorgie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_libft.h"

static void	*f_str_toupper(void *s)
{
	size_t			i;
	unsigned char	*ptr_s;	

	ptr_s = (unsigned char *)s;
	i = 0;
	while (ptr_s[i])
	{
		ptr_s[i] = ft_toupper(ptr_s[i]);
		i++;
	}
	return ((void *)ptr_s);
}

static void    free_content(void *s)
{
	free(s);
}

void	t_ft_lastmap(void)
{
    t_list  *root;
    t_list  *root_new;
    t_list  *node0;
    t_list  *node1;
    t_list  *node2;
    t_list  *node3;
    char    s0[] = "four";
    char    s1[] = "five";
    char    s2[] = "six";
    char    s3[] = "seven";

    node0 = ft_lstnew(s0);
    node1 = ft_lstnew(s1);
    node2 = ft_lstnew(s2);
    node3 = ft_lstnew(s3);
    root = 0;

    ft_lstadd_back(&root, node0);
    ft_lstadd_back(&root, node1);
    ft_lstadd_back(&root, node2);
    ft_lstadd_back(&root, node3);

	root_new = ft_lstmap(root, &f_str_toupper, free_content);
	while (root_new)
	{
		printf("%s\n", (char *)root_new->content);
		root_new = root_new->next;
	}
}
