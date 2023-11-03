#include "tests_libft.h"

void	t_ft_atoi(void)
{
	char    *str[] = {"s91221", "-54", "0", "2147483647", "2147483660", "-2147483648", "-2147483690", "     +2312sdsd23", "\0"};
    int     i = 0;

    printf("ft_atoi\n");
    while (*(str[i]))
    {
        if (ft_atoi((char *)(str[i])) != atoi((char *)(str[i])))
        {
            printf("<<<< KO\n");
            return ;
        }
        printf("Ft:\t%d\n", ft_atoi((char *)(str[i])));
        printf("Lib:\t%d\n", atoi((char *)(str[i])));
        printf("-----\n");
        i++;
    }
    printf(">>>> OK\n");
}
