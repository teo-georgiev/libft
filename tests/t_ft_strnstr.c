#include "tests_libft.h"

void	t_ft_strnstr(void)
{
    char    *haystack = "Here is a longer string";
    char    *needle = "lonz";
    size_t  len = 3;

    printf("ft_strnstr\n");
    printf("\tStr\t\t%s\t\t%s\n", ft_strnstr(haystack, needle, len), strnstr(haystack, needle, len));
    printf("\tAddr\t\t%p\t\t%p\n", ft_strnstr(haystack, needle, len), strnstr(haystack, needle, len));
}
