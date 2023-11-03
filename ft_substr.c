/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeorgie <tgeorgie@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 08:09:20 by tgeorgie          #+#    #+#             */
/*   Updated: 2023/11/03 15:49:18 by tgeorgie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new_s;

	if (!s)
		return ((char *)0);
	if (len > ft_strlen(s) - (size_t)start)
		len = ft_strlen(s) - (size_t)start;
	else if ((size_t)start >= ft_strlen(s))
		len = 0;
	new_s = malloc((len + 1) * sizeof(char));
	if (!new_s)
		return ((char *)0);
	i = 0;
	while (i < len)
	{
		new_s[i] = s[start + i];
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
/*
int	main(void)
{
    char            *s;
    char            *sub_s;
    unsigned int    start;
    size_t          len;

    s = "lorem ipsum dolor sit amet";
    s = "";
	start = -1;
    len = -1;
    sub_s = ft_substr(s, start, len);
    printf("ft_substr\n");
    printf("\ts:\t\t%s\n", s);
    printf("\tnew_s:\t\t%s\n", sub_s);
    printf("\tlen:\t\t%zu\n", ft_strlen(sub_s));
	return (0);
}*/
