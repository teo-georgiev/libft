/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeorgie <tgeorgie@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:36:44 by tgeorgie          #+#    #+#             */
/*   Updated: 2023/11/03 16:02:01 by tgeorgie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					i;
	int					sign;
	unsigned long long	num;

	i = 0;
	num = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		num = num * 10 + (unsigned long long)str[i] - '0';
		i++;
		if (num > 9223372036854775807)
			return (-1);
		else if (num < 9223372036854775807 && sign == -1)
			return (0);
	}
	return (sign * (int)num);
}
#include <stdio.h>
int main(void)
{
	char    *str[] = {"-9223372036854775807", "-54", "0", "2147483647", "2147483660", "-2147483648", "-2147483690", "     +2312sdsd23", "\0"};
    int     i = 0;

    printf("ft_atoi\n");
    while (*(str[i]))
    {
        if (ft_atoi((char *)(str[i])) != atoi((char *)(str[i])))
        {
            printf("<<<< KO\n");
            return 0;
        }
        printf("Ft:\t%d\n", ft_atoi((char *)(str[i])));
        printf("Lib:\t%d\n", atoi((char *)(str[i])));
        printf("-----\n");
        i++;
    }
    printf(">>>> OK\n");
	return (0);
}
