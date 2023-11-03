#include "tests_libft.h"

void	t_ft_atoi(void)
{
	char    *str[] = {
		"s91221",
		"-54",
		"0",
		"2147483647",
		"2147483660",
		"-2147483648",
		"-2147483690",
		"     +2312sdsd23",
		"\0"};
    int     i = 0;

    printf("ft_atoi\n");
    while (*(str[i]))
    {
        printf("\t%d\t", ft_atoi((char *)(str[i])));
        printf("\t%d\n", atoi((char *)(str[i])));
        printf("-----\n");
        if (ft_atoi((char *)(str[i])) != atoi((char *)(str[i])))
        {
            printf("\033[1;31m<<<< KO\033[0m\n");
//            return ;
        }
        i++;
    }
    printf("\033[1;32m>>>> OK\033[0m\n");
}
