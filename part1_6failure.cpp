#include <stdio.h>

int main()
{
	int num1 = 2000;
	int result1;
	result1 = (num1 % 4 == 0);
	result1 = (num1 % 4 == 0) && (num1 % 100 == 0);
	result1 = (num1 % 4 == 0) && (num1 % 100 == 0) && (num1 % 400 == 0);
	printf("%d",result1);
	return 0;
}