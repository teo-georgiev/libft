#include "tests_libft.h"

void    tests_strchr(char f_name[], char *str[], int c, \
        char *(f_ft)(const char*, int), char *(f_lib)(const char*, int))
{
    int i;

    i = 0;
    printf("%s\n", f_name);
    while (*(str[i]))
    {
        printf("    %s | e\n", str[i]);
        printf("\tChar\t\t%s\t\t%s\n", f_ft(str[i], c), f_lib(str[i], c));
        printf("\tAddr\t\t%p\t%p\n", f_ft(str[i], c), f_lib(str[i], c));
        i++;
    }
	printf("##############################################\n");
}

void	t_ft_strchr(void)
{
	char    *str_test[] = {"test", "44", "tester", "Lorem ipsum dolor sit amet", "\0"};

	tests_strchr("ft_strchr", str_test, 'e' + 256, &ft_strchr, &strchr);
	tests_strchr("ft_strrchr", str_test, 'e', &ft_strrchr, &strrchr);
}
