#include <unistd.h>

void	ft_rotone(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] >= 'a' &&  str[x] <= 'm') || (str[x] >= 'A' &&  str[x] <= 'M'))
		{
			str[x] = str[x] + 13;
		}
		else if ((str[x] >= 'n' &&  str[x] <= 'z') || (str[x] >= 'N' &&  str[x] <= 'Z'))
		{
			str[x] = str[x] - 13;
		}
		else
		{
			str[x]++;
		}
		write(1, &str[x], 1);
	x++;
	}
	write(1, "\n", 1);
}

int	main(int ac, char *av[])
{
	if (ac == 2)
		ft_rotone(av[1]);
}