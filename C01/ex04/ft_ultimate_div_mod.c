void	ft_ultimate_div_mod(int *a, int *b)
{
	int temp1 = *a;
	int temp2 = *b;
	
	*a = temp1 / temp2;
	*b = temp1 % temp2;
}
