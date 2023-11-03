/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeorgie <tgeorgie@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:08:35 by tgeorgie          #+#    #+#             */
/*   Updated: 2023/11/02 13:02:44 by tgeorgie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_libft.h"
void	t_ft_lstnew(void)
{
	char	s[] = "lorem ipsum";
	int		i = 97;
	t_list	*elem_s;
	t_list	*elem_i;

	elem_s = ft_lstnew(&s);
	elem_i = ft_lstnew(&i);
	printf("\tStr content\t\t%s\n", elem_s->content);
	printf("\tInt content\t\t%c\n", (char)elem_s->content);
}
