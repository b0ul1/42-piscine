#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int temp;
	int start = 0;
	int end = size - 1;

	while(start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}
#include <stdio.h>
int	main(void)
{
	int	tab[6] = {0,1,2,3,4,5};

	printf("%d,%d,%d,%d,%d,%d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
	ft_rev_int_tab(tab, 6);
	printf("%d,%d,%d,%d,%d,%d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
	return 0;
}
