void	ft_swap(int *a, int *b)
{
	int temp = 0;

	temp = *b;
	*b = *a;
	*a = temp;
}

#include <stdio.h>
int	main(void)
{
	int a = 4;
	int b = 6;

	printf("AVANT : A = %d et B = %d\n", a, b);
	ft_swap(&a, &b);
	printf("APRES : A = %d et B = %d\n", a, b);
	return 0;
}

