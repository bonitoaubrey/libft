#include <stdio.h>
#include <string.h>

int	main (void)
{
	char buffer[] = "This is a test of the memset function";
	printf("\nBefore: %s\n", buffer);
	ft_memset(buffer, '*', 4);
	printf("After: %s\n\n", buffer);
	printf("%x\n", buffer);
}
