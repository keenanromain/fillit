#include "libft2.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	char	*ret_str;
	int		i;

	if (!s)
		return ((void *)0);
	new_str = ft_strnew(ft_strlen((char *)s));
	if (!new_str)
		return ((void *)0);
	ret_str = new_str;
	i = 0;
	while (*s)
	{
		*new_str++ = f((unsigned int)i, (char)(*s++));
		i++;
	}
	*new_str = '\0';
	return (ret_str);
}
