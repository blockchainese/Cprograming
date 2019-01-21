#include<stdio.h>

int GigaToMega(int num);
int GigaToKilo(int num);
int multi1024(int num);

int main()
{
	printf("12GB=%dMB \n", GigaToMega(12));
	printf("12GB=%dKB \n", GigaToKilo(12));
	return 0;
}

int GigaToMega(int num)
{
	int result1 = multi1024(num);
	return result1;
}

int GigaToKilo(int num)
{
	int result2 = multi1024(GigaToMega(num));
	return result2;
}

int multi1024(int num)
{
	return num * 1024;
}