#include "tests_libft.h"

void	t_ft_memcmp(void)
{
    int s1[] = {1, 5, 15, 382};
    int s2[] = {-1, 5, 15, 382};
   	char    s3[] = "LorexIpsumDolor";
	char    s4[] = "LorexIpsumDolor";
//	size_t  n = 15;

    printf("ft_memcmp\n");
    printf("\tLib:\t\t%d\n", memcmp(s1, s2, sizeof(s1)));
    printf("\tFt:\t\t%d\n", ft_memcmp(s1, s2, sizeof(s1)));
    printf("\tLib:\t\t%d\n", memcmp(s3, s4, sizeof(s1)));
    printf("\tFt:\t\t%d\n", ft_memcmp(s3, s4, sizeof(s1)));
}
