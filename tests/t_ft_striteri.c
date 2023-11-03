#include "tests_libft.h"

void	test(unsigned int i, char *c)
{
	*c = *c + i;
}

int	main(void)
{
	char 	s[20] = "loremipsum";
	size_t	i;

	i = -1;
	ft_striteri(s, test);
	while (s[++i])
		printf("%c\n", s[i]);
	return (0);
}
