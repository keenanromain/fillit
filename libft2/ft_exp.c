#include "libft2.h"

int		ft_exp(int base, int power)
{
	if (power == 0)
		return (1);
	return (base * ft_exp(base, power - 1));
}
