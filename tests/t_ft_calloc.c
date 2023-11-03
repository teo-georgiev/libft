#include "tests_libft.h"

void	t_ft_calloc(void)
{
    int     *arr1;
    int     *arr2;
	int 	int_max = 2147483647;
    size_t  count;

    count = 10;

	// Library function
    printf("calloc\n");
    arr1 = (int *)calloc(30, sizeof(int));
    printf("\tcalloc  \t\t");
    for (size_t i = 0; i < count; i++)
        printf("%d ", arr1[i]);
	printf("\n");

	// FT function
    arr2 = (int *)ft_calloc(30, sizeof(int));
    printf("\tft_calloc\t\t");
    for (size_t i = 0; i < count; i++)
        printf("%d ", arr2[i]);
    printf("\n");
    free(arr1);
    free(arr2);

	if (ft_calloc(int_max, int_max))
		printf("\tOK\n");
	else 
		printf("\tKO\n");
}
