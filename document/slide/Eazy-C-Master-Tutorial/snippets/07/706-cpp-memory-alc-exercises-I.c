#include <stdio.h>
int calc_square(int* someNumber)
{
	int getValue = *someNumber;
	return getValue * getValue;
}

int main()
{
	int value = 5;
	printf("%d\n", calc_square(&value));
}