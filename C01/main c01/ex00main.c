#include <stdio.h>

void	ft_ft(int *nbr)
{
    *nbr=42;
}

int		main (void)
{
	int *pnbr;
	int nbr;

	nbr = 21;
	pnbr = &nbr;

	ft_ft(pnbr);
	printf("%d\n", nbr);
	return (0);
}

