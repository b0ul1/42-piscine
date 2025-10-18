#include <stdio.h>

void	ft_decr(int *tab, int size)
{
	int i = 0;
	int temp = 0;

	while(i < size -1)
	{
		while( tab[i] < tab[i + 1])
		{
			temp = tab[i]; 
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		i++;
	}
}

int	main(void)
{
	int tab[5] = {84, 3, -4, 1, 9};
	int i = 0;
	
	printf("Avant tri = ");
	while (i < 5)
	{
		printf("%d,", tab[i]);
		i++;
	}
	ft_decr(tab, 6);
	i = 0;
	printf("\nApres tri =");
	while (i < 5)
	{
		printf("%d,", tab[i]);
		i++;
	}
	return 0;
}
