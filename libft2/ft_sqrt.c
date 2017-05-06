#include "libft2.h"

static int	ft_sqrthelper(long long n, long long guess)
{
	if (guess <= 0)
		return (0);
	if ((guess * guess) <= n)
		return (guess);
	return (ft_sqrthelper(n, guess - 1));
}

int			ft_sqrt(int n)
{
	return (ft_sqrthelper(n, n));
}
