#include "../libft.h"
#include <stdio.h>

int	main(void)
{
    char            *s;
    char            *sub_s;
    unsigned int    start;
    size_t          len;

    s = "lorem ipsum dolor sit amet";
    start = 0;
    len = 5;
    sub_s = ft_substr(s, start, len);
    printf("ft_substr\n");
    printf("\ts:\t\t%s\n", s);
    printf("\tnew_s:\t\t%s\n", sub_s);
    printf("\tlen:\t\t%zu\n", ft_strlen(sub_s));
	return (0);
}
