#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int len1 = 0;
	int len2 = 0;
	int x = 42;
	char	*str_null = NULL;
	len1 += ft_printf("%c | %s | %s\n", 'a', "asd", str_null);
	len2 += printf("%c | %s | %s\n", 'a', "asd", str_null);
	//printf("%d\n%d\n",len1, len2 );
	len1 += ft_printf("%d | %i | %d\n" , 0, (int)-2147483648, 2147483647);
	len2 += printf("%d | %i | %d\n" , 0, (int)-2147483648, 2147483647);
	//printf("%d\n%d\n",len1, len2 );
	len1 += ft_printf("%u | %u\n", 0, 4294967295U);
	len2 += printf("%u | %u\n", 0, 4294967295U);
	//printf("%d\n%d\n",len1, len2 );
	len1 += ft_printf("%x | %X\n", 255, 255);
	len2 += printf("%x | %X\n", 255, 255);
	//printf("%d\n%d\n",len1, len2 );
	len1 += ft_printf("%p | %p\n", &x, str_null);
	len2 += printf("%p | %p\n", &x, str_null);
	//printf("%d\n%d\n",len1, len2 );
	len1 += ft_printf("%%\n");
	len2 += printf("%%\n");
	//printf("%d\n%d\n",len1, len2 );
	len1 += ft_printf("%a\n");
	printf("%d\n%d\n",len1, len2 );
	return (0);
}
