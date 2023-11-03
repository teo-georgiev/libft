#include "tests_libft.h"

void	t_ft_bzero(void)
{
    char    str_ft[50] = "LongLongishString";
    char    str_lib[50] = "LongLongishString";
    size_t  n = 5;

    printf("ft_bzero\n");
    ft_bzero(str_ft, n);
    bzero(str_lib, n);
    if (ft_strncmp(str_lib, str_ft, sizeof(str_ft)))
        printf("<<<< KO\n");
    else
        printf(">>>> OK\n");
}
