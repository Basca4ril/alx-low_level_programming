#include <stdio.h>
#include "variadic_functions.h"

int main(void)
{
	int sum;

	sum = sum_them_all(2, 98, 1024);
	printf("%d", sum);

	return (0);
}
