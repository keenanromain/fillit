#include "libft2.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen((char *)s);
	while (*s)
		s++;
	if (!c)
		return ((char *)s);
	--s;
	while (len)
	{
		if ((char)*s == c)
			return ((char *)s);
		s--;
		--len;
	}
	return (NULL);
}
