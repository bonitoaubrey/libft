#include "libft.h"

int	ft_tolower(int c)
{
	if ((unsigned char)c >= 'A' && (unsigned char)c <= 'Z')
		c = c - 'A' + 'a';
	return (c);
}
