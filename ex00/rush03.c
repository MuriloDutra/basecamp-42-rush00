#include <unistd.h>

void	ft_putchar(char c);
void	draw_rectangle_column(int column_counter, int x);
void	draw_rectangle_line(int column_counter, int x);
void	draw_rectangle(int x, int y);

void	rush(int x, int y)
{	
	if (x > 0 && y > 0)
	{
		draw_rectangle(x, y);
	}
	else
	{
		write(1, "Invalid inputs\n", 20);
	}
}

void	draw_rectangle(int x, int y)
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
				draw_rectangle_column(column_counter, x);
			}
			else
			{
				draw_rectangle_line(column_counter, x);
			}
			column_counter++;
		}
		ft_putchar('\n');
		row_counter++;
	}
}

void	draw_rectangle_column(int column_counter, int x)
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

void	draw_rectangle_line(int column_counter, int x)
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
