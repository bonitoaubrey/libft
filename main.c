#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char s[] = " 123 567 ";
	char **ss;
	ss = ft_split(s, ' ');
	printf("%s\n", s[0]);
}
