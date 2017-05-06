#include "libft2.h"

char	*ft_strstr(const char *big, const char *little)
{
	int	chars_left;
	int	len_little;

	chars_left = ft_strlen((char *)big);
	len_little = ft_strlen((char *)little);
	while (chars_left >= len_little)
	{
		if (!ft_strncmp(big, little, len_little))
			return ((char *)big);
		big++;
		--chars_left;
	}
	return (NULL);
}
