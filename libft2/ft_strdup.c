#include "libft2.h"

char	*ft_strdup(const char *str)
{
	char *new_str;

	new_str = ft_strnew(ft_strlen((char *)str));
	if (new_str)
		ft_strcpy(new_str, (char *)str);
	return (new_str);
}
