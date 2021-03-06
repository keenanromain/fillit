#include "libft2.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		s1++;
		s2++;
	}
	if (!*s1)
	{
		if (!*s2)
			return (0);
		else
			return (*(unsigned char *)s2 * -1);
	}
	return (*(unsigned char *)s1);
}
