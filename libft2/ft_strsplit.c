#include "libft2.h"

char		**ft_strsplit(const char *s, char c)
{
	char	**arr;
	int		i;

	if (!s)
		return (NULL);
	arr = (char **)malloc((ft_countwords(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	while (*s && *s == c)
		++s;
	while (*s)
	{
		arr[i++] = ft_strsub(s, 0, ft_strfind((char *)s, c));
		while (*s && *s != c)
			++s;
		while (*s && *s == c)
			++s;
	}
	arr[i] = (void *)0;
	return (arr);
}
