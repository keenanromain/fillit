#include "libft2.h"

static int	ft_islower(int n)
{
	return (n >= 'a' && n <= 'z');
}

static int	ft_isupper(int n)
{
	return (n >= 'A' && n <= 'Z');
}

int			ft_isalpha(int n)
{
	return (ft_isupper(n) || ft_islower(n));
}
