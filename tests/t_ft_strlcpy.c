#include "tests_libft.h"

void	t_ft_strlcpy(void)
{
	char    dst_ft[30];
    char    dst_lib[30];
    char    *src = "This is a string";
    size_t  dstsize;

    dstsize = 5;
    printf("ft_strlcmp\n");
    printf("\tReturn\t\t%zu\t\t%zu\n", ft_strlcpy(dst_ft, src, dstsize), strlcpy(dst_lib, src, dstsize));
    printf("\tString\t\t%s\t\t%s\n", dst_ft, dst_lib);
    printf("\tLen\t\t%zu\t\t%zu\n", ft_strlen(dst_ft), ft_strlen(dst_lib));
}
