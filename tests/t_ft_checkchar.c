#include "tests_libft.h"

static void tests_char(char f_name[], int *test, int (f)(int), int (f_lib)(int))
{
    int i;

    i = 0;
    printf("%s\n", f_name);
    while (test[i])
    {
        if (ft_isprint(test[i]))
            printf("\tval %c", test[i]);
        else
            printf("\tval %d", test[i]);

        printf("\t\t%d\t\t%d\n", f(test[i]), f_lib(test[i]));
        i++;
    }
	printf("##############################################\n");
}

void t_ft_checkchar(void)
{
	int     charset[] = {
		'a', 'A', '9', '/', 200, -1, 2147483647, '\0'
		};

	tests_char("ft_isalpha", charset, &ft_isalpha, &isalpha);
    tests_char("ft_isdigit", charset, &ft_isdigit, &isdigit);
    tests_char("ft_isalnum", charset, &ft_isalnum, &isalnum);
    tests_char("ft_isascii", charset, &ft_isascii, &isascii);
    tests_char("ft_isprint", charset, &ft_isprint, &isprint);
    tests_char("ft_toupper", charset, &ft_toupper, &toupper);
    tests_char("ft_tolower", charset, &ft_tolower, &tolower);
}
