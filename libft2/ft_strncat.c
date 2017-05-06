#include "libft2.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	chars_copied;
	char	*head;

	head = s1;
	chars_copied = 0;
	while (*s1)
		s1++;
	while (chars_copied < n && *s2)
	{
		*s1++ = *s2++;
		chars_copied++;
	}
	*s1 = '\0';
	return (head);
}
