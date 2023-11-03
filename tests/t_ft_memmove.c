#include "tests_libft.h"

void	t_ft_memmove(void)
{
    char    str_lib[100] = "Thisiskindafun";
    char    str_ft[100] = "Thisiskindafun";

    printf("ft_memmove\n");
    memmove(str_lib + 4, str_lib, 6);
    ft_memmove(str_ft + 4, str_ft, 6);
    if (ft_strncmp(str_lib, str_ft, sizeof(str_ft)))
        printf("<<<< KO\n");
    else
        printf(">>>> OK\n");
    printf("\tmemmove:\t\t%s\n", str_lib);
    printf("\tft_memmove:\t\t%s\n", str_ft);
}
