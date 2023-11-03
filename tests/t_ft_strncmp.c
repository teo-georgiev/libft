#include "tests_libft.h"

void	t_ft_strncmp(void)
{
    printf("ft_strncmp\n");
    printf("\ttast | test");
    printf("\t%d\t\t%d\n", ft_strncmp("tast", "test", 3), strncmp("tast", "test", 3));
}
