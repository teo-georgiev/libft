#include "tests_libft.h"

void	t_ft_memchr(void)
{
    char    str_ft[] = "LoremIpsumDolor";
    char    str_lib[] = "LoremIpsumDolor";
    int     c = 'o';

    printf("ft_memchr\n");
    if (ft_strncmp(\
                memchr(str_lib, c, sizeof(str_lib)),\
                ft_memchr(str_ft, c, sizeof(str_ft)),\
                sizeof(str_ft)\
                )
        )
        printf("<<<< KO\n");
    else
        printf(">>>> OK\n");
    printf("\tLib:\t\t%s\n", (char *)memchr(str_lib, c, sizeof(str_lib)));
    printf("\tFt:\t\t%s\n", (char *)ft_memchr(str_ft, c, sizeof(str_ft)));
}
