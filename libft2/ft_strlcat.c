#include "libft2.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		bytes_remaining;
	size_t	ret;

	ret = ft_strlen(dst);
	bytes_remaining = size - ret - 1;
	if (bytes_remaining <= 0)
		return (ret + ft_strlen(src) + bytes_remaining + 1);
	while (*dst)
		dst++;
	ret += ft_strlen(src);
	while (bytes_remaining != 0)
	{
		--bytes_remaining;
		*dst++ = *src++;
		if (!*src)
			break ;
	}
	*dst = '\0';
	return (ret);
}
