#include "libft2.h"

char		*ft_itoa(int n)
{
	char	*bkwds_num;
	char	*head;
	int		sign;

	bkwds_num = ft_strnew(ft_numlen(n));
	if (!bkwds_num)
		return (NULL);
	head = bkwds_num;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sign = (n < 0 ? -1 : 1);
	n *= sign;
	while (n > 9)
	{
		*bkwds_num++ = (n % 10) + '0';
		n /= 10;
	}
	*bkwds_num++ = n + '0';
	*bkwds_num = (sign == -1 ? '-' : '\0');
	return (ft_strrev(head));
}
