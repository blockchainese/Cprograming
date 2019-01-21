#include<stdio.h>

double InchToCm(double inch);
double CmToInch(double cm);

int main()
{
	printf("3.24inch->%fcm \n",InchToCm(3.24));
	printf("12.7cm->%finch \n",CmToInch(12.7));
	return 0;
}

double InchToCm(double inch)
{
	double result1 = inch * 2.54;
	return result1;
}

double CmToInch(double cm)
{
	double result2 = cm / 2.54;
	return result2;
}
