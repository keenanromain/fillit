#include "libft2.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	char	*new_str;
	char	*ret_str;

	if (!s)
		return ((void *)0);
	new_str = ft_strnew(ft_strlen((char *)s));
	if (!new_str)
		return ((void *)0);
	ret_str = new_str;
	while (*s)
		*new_str++ = f(*s++);
	*new_str = '\0';
	return (ret_str);
}
