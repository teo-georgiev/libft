#include "tests_libft.h"

int	main(void)
{
	printf("%s\n", ft_itoa(-235));
	printf("%s\n", ft_itoa(1111235));
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(-2147483648));
	return (0);
}
