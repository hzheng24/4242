#include <unistd.h>

int	main(int ac, char *av[])
{
	int x;

	x = 0;
	while (av[0][x])
	{
		write(1, &av[0][x], 1);
		x++;
	}
	write(1, "\n", 1);
}