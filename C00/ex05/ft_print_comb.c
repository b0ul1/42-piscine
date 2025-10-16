#include <unistd.h>

void	ft_putchar(char n)
{
	write(1, &n, 1);
}

void	ft_print_comb(void)
{
	int i;
	int j;
	int l;

	for(i = '0'; i <= '9'; i++)
	{
		for(j = i + 1; j <= '9'; j++)
		{
			for(l = j + 1; l <= '9'; l++)
			{
				ft_putchar(i);
				ft_putchar(j);
				ft_putchar(l);

				if (i < '7' || j < '8' || l < '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
	ft_putchar('\n');
	return 0;
}

int	main()
{
	ft_print_comb();
}
