#include "tests_libft.h"

void	t_ft_memcpy(void)
{
    char    str_lib1[100] = "Thisiskindafun";
    char    str_ft1[100] = "Thisiskindafun";
    char    str_lib2[100] = "Thisiskindafun";
    char    str_ft2[100] = "Thisiskindafun";

    printf("ft_memcpy\n");
    memcpy(str_lib1 + 4, str_lib1, 6);
    ft_memcpy(str_ft1 + 4, str_ft1, 6);

    printf("ft_memcpy\n");
    memcpy(str_lib2 + 4, str_lib2, 6);
    ft_memcpy(str_ft2 + 4, str_ft2, 6);
    if (ft_strncmp(str_lib1, str_ft1, sizeof(str_ft1)))
        printf("<<<< KO\n");
    else
        printf(">>>> OK\n");

    if (ft_strncmp(str_lib2, str_ft2, sizeof(str_ft2)))
        printf("<<<< KO\n");
    else
        printf(">>>> OK\n");
}
