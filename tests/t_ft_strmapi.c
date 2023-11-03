#include "tests_libft.h"

char	test(unsigned int i, char c)
{
	char	new = c + i;
	return (new);
}

int	main(void)
{
	char 	*s = "loremipsum";
	char 	*arr = ft_strmapi(s, test);
	size_t	i;

	i = -1;
	while (arr[++i])
		printf("%c\n", arr[i]);
	return (0);
}
