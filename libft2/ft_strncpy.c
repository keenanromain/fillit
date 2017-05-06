#include "libft2.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	letters_copied;
	char	*head;

	letters_copied = 0;
	head = dst;
	while (letters_copied < len)
	{
		if (*src)
			*dst++ = *src++;
		else
			*dst++ = '\0';
		++letters_copied;
	}
	return (head);
}
