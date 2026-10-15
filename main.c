#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int	len1;
	int	len2;
	void	*ptr = &len1;

	printf("=== Testing %c and %s ===\n", '%', '%');
	len1 = ft_printf("ft_printf: %c | %s\n", 'A', "Hello 42");
	len2 = printf("   printf: %c | %s\n", 'A', "Hello 42");
	printf("Return: ft=%d, orig=%d\n\n", len1, len2);

	printf("=== Testing %d, %i, %u ===\n", '%', '%');
	len1 = ft_printf("ft_printf: %d | %i | %u\n", -2147483648, 42, 4294967295U);
	len2 = printf("   printf: %d | %i | %u\n", -2147483648, 42, 4294967295U);
	printf("Return: ft=%d, orig=%d\n\n", len1, len2);

	printf("=== Testing %x, %X, %p ===\n", '%', '%');
	len1 = ft_printf("ft_printf: %x | %X | %p\n", 255, 255, ptr);
	len2 = printf("   printf: %x | %X | %p\n", 255, 255, ptr);
	printf("Return: ft=%d, orig=%d\n\n", len1, len2);

	printf("=== Testing NULL Pointer & String ===\n");
	len1 = ft_printf("ft_printf: %p | %s\n", NULL, (char *)NULL);
	len2 = printf("   printf: %p | %s\n", NULL, (char *)NULL);
	printf("Return: ft=%d, orig=%d\n", len1, len2);

	return (0);
}