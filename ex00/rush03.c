void	ft_putchar(char c);
void	print_column(int column_counter, int x);
void	print_row(int column_counter, int x);

void	rush(int x, int y)
{	
	int	column_counter;
	int	row_counter;

	row_counter = 1;
	while (row_counter <= y)
	{
		column_counter = 1;
		while (column_counter <= x)
		{
			if (row_counter == 1 || row_counter == y)
			{
				print_column(column_counter, x);
			}
			else
			{
				print_row(column_counter, x);
			}
			column_counter++;
		}
		ft_putchar('\n');
		row_counter++;
	}
}

void	print_column(int column_counter, int x)
{
	if (column_counter == 1)
	{
		ft_putchar('A');
	}
	else if (column_counter == x)
	{
		ft_putchar('C');
	}
	else
	{
		ft_putchar('B');
	}
}

void	print_row(int column_counter, int x)
{
	if (column_counter == 1 || column_counter == x)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}
