#include "libft2.h"

char	*ft_strrev(char *s)
{
	char	*rev;
	char	*head;
	int		len;

	len = ft_strlen(s);
	head = ft_strnew(len);
	if (head)
	{
		rev = head;
		while (*s)
			++s;
		while (len)
		{
			--len;
			*rev++ = (*--s);
		}
	}
	return (head);
}
