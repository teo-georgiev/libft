#include "tests_libft.h"

void	t_ft_strlcat(void)
{
    char    dst_ft[10] = "a";
    char    dst_lib[10] = "a";
    char    *src = "lorem ipsum dolor sit amet";
    size_t  dstsize;

    dstsize = 0;
    printf("ft_strlcat\n");
    printf("\tReturn\t\t%zu\t\t%zu\n", ft_strlcat(dst_ft, src, dstsize), strlcat(dst_lib, src, dstsize));
    printf("\tString\t\t%s\t\t%s\n", dst_ft, dst_lib);
    printf("\tLen\t\t%zu\t\t%zu\n", ft_strlen(dst_ft), ft_strlen(dst_lib));
}
