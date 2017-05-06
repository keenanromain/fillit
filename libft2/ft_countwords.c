#include "libft2.h"

int		ft_countwords(const char *s, char c)
{
	int words;

	if (!c)
		c = ' ';
	while (*s && *s == c)
		s++;
	words = 0;
	while (*s)
	{
		++words;
		while (*s && *s != c)
			++s;
		while (*s && *s == c)
			++s;
	}
	return (words);
}
