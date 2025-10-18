void	ft_sort_int_tab(int *tab, int size)
{
	int i = 0;
	int temp = 0;

	while(i < size - 1)
	{
		while(tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		i++;
	}
}

#include <stdio.h>
int	main(void)
{
	int tab[5] = {45, 61, -2, 4, -4};
	int i = 0;
	while(i < 5)
	{
		printf("%d,", tab[i]);
		i++;
	}
	printf("\n");
	ft_sort_int_tab(tab, 6);
	i = 0;
	while(i < 5)
	{
		printf("%d,", tab[i]);
		i++;
	}
	return 0;
}
	
