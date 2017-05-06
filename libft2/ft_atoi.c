#include "libft2.h"

static int	ft_iswhitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' ||
			c == '\r' || c == '\f' || c == '\v');
}

int			ft_atoi(const char *str)
{
	int sum;
	int sign;

	sign = 1;
	sum = 0;
	while (*str && ft_iswhitespace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			sum = ((sum * 10) + ((*str++) - '0'));
		else
			return (sum * sign);
	}
	return (sum * sign);
}
