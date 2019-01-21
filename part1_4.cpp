#include<stdio.h>

double FahToCen(double Fah);

int main()
{
	printf("È­¾¾124.5µµ¸¦ ¼·¾¾·Î º¯È¯=%f\n", FahToCen(124.5));
	return 0;
}

double FahToCen(double Fah)
{
	double result1 =(Fah - 32) * 5 / 9;
	return result1;
}