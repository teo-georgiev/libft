#include "tests_libft.h"

void	test_strlen(char *f_name, char **str, size_t(f)(const char*), \
        size_t(f_lib)(const char*))
{
	int i = 0;
    printf("%s\n", f_name);
    while (*(str[i]))
    {
        printf("\tlen\t\t%zu\t\t%zu\n", f(str[i]), f_lib(str[i]));
        i++;
    }
	printf("##############################################\n");
}

void	t_ft_strlen(void)
{
	char    *strs[] = {"test", "44", "tester", "Lorem ipsum dolor sit amet", "\0"};
	test_strlen("ft_strlen", strs, &ft_strlen, &strlen);
}
