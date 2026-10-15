#include <stdarg.h>
#include <stdio.h>

float  average(int n, ...)
{
	// VA_LIST IS A POINTER TO A STRUCT 
	va_list ap; // سله 
	int		total;
	int		i;

	va_start(ap, n); //  واشرنا لل n ك  موئشر فتحنا سله 
	total = 0;
	i = 0;
	while (i < n)
	{
		total += va_arg(ap, int); // اخدنا اول واحد من سله نوعه int
		++i;
	}
	return (float)total / n;

}


int main()
{
    float average_age;     // flag 3
    average_age = average(3, 10, 15,20);
	printf("avg %f\n", average_age);
}