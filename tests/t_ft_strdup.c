#include "tests_libft.h"

void	t_ft_strdup(void)
{
	char    *s1 = "LoremIpsumDolorSitAmet";

	printf("ft_strdup\n");
	printf("\t%s\n", strdup(s1));
	printf("\t%s\n", ft_strdup(s1));
}
