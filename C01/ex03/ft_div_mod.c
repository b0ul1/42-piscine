void	ft_div_mod(int *a, int *b, int *div, int *mod)
{
	*div = (*a / *b);
	*mod = (*a % *b);
}

#include <stdio.h>
int	main(void)
{
	int a = 89;
	int b = 21;
	int div = 0;
	int mod = 0;

	ft_div_mod(&a, &b, &div, &mod);
	printf("DIV = %d MOD = %d\n", div, mod);
	return 0;
}
