#include <unistd.h>

void	ft_putchar(char n)
{
	write(1, &n, 1);
}

void	ft_print_comb2(void)
{
	int i;
	int j; 

	for(i = 0; i <= 99; i++)
	{
		for(j = i + 1; j <= 99; j++)
		{
			ft_putchar((i / 10) + '0');
			ft_putchar((i % 10) + '0');
			ft_putchar(' ');
			ft_putchar((j / 10) + '0');
			ft_putchar((j % 10) + '0');

			if( i < 98 || j < 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
	ft_putchar('\n');
	return 0;
}
/*
int	main()
{
	ft_print_comb2();
}*/
