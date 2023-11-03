#include "tests_libft.h"

void	t_ft_memset(void)
{
    char    str_lib[50] = "Lorem";
    char    str_ft[50] = "Lorem";
    int     c = '*';
    size_t  len = 3;

    printf("ft_memset\n");
    if (str_ft != ft_memset(str_ft, c, len))
        printf("<<<< KO\n");
    else
        printf(">>>> OK\n");

    printf("\tlib memset:\t\t%s\n", (char *)memset(str_lib, c, len));
    printf("\tstr_lib addr:\t\t%p\n", str_lib);
    printf("\treturn addr:\t\t%p\n\n", memset(str_lib, c, len));

    printf("\tft_memset:\t\t%s\n", (char *)ft_memset(str_ft, c, len));
    printf("\tstr_ft addr:\t\t%p\n", str_ft);
    printf("\treturn addr:\t\t%p\n\n", ft_memset(str_ft, c, len));
}
