#include "tests_libft.h"

int main(int argc, char **argv)
{
	// Libc Functions
	if (argc == 1 || !(strcmp(argv[1], "ft_checkchar")))
		t_ft_checkchar();
	if (argc == 1 || !(strcmp(argv[1], "ft_strlen")))
		t_ft_strlen();
	if (argc == 1 || !(strcmp(argv[1], "ft_memset")))
		t_ft_memset();
	if (argc == 1 || !(strcmp(argv[1], "ft_bzero")))
		t_ft_bzero();
	if (argc == 1 || !(strcmp(argv[1], "ft_memcpy")))
		t_ft_memcpy();
	if (argc == 1 || !(strcmp(argv[1], "ft_memmove")))
		t_ft_memmove();
	if (argc == 1 || !(strcmp(argv[1], "ft_strlcpy")))
		t_ft_strlcpy();
	if (argc == 1 || !(strcmp(argv[1], "ft_strlcat")))
		t_ft_strlcat();
	if (argc == 1 || !(strcmp(argv[1], "ft_strchr")))
		t_ft_strchr();
	if (argc == 1 || !(strcmp(argv[1], "ft_strncmp")))
		t_ft_strncmp();
	if (argc == 1 || !(strcmp(argv[1], "ft_memchr")))
		t_ft_memchr();
	if (argc == 1 || !(strcmp(argv[1], "ft_memcmp")))
		t_ft_memcmp();
	if (argc == 1 || !(strcmp(argv[1], "ft_strnstr")))
		t_ft_strnstr();
	if (argc == 1 || !(strcmp(argv[1], "ft_atoi")))
		t_ft_atoi();
	if (argc == 1 || !(strcmp(argv[1], "ft_calloc")))
		t_ft_calloc();
	if (argc == 1 || !(strcmp(argv[1], "ft_strdup")))
		t_ft_strdup();
	/*
	// Additional Functions
	t_ft_substr();
	t_ft_strjoin();
	t_ft_strtrim();
	t_ft_split();
	t_ft_itoa();
	t_ft_strmapi();
	t_ft_striteri();
	t_ft_putchar_fd();
	t_ft_putstr_fd();
	t_ft_putendl_fd();
	t_ft_putnbr_fd();
	// Bonus Functions
	t_ft_lstnew();
	*/
	return (0);
}
