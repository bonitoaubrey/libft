#include "libft.h"

int	ft_isdigit(int c)
{
	if ((char)c >= '0' && (char)c <= '9')
		return (c);
	return (0);
}
