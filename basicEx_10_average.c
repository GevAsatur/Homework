#include <stdio.h>

int main(){

	double num1;
	double num2;
	double num3;
	double average;
	
	printf("Enter first number\n");
	scanf("%lf", &num1);

	printf("Enter second number\n");
	scanf("%lf", &num2);

	printf("Enter third number\n");
	scanf("%lf", &num3);

	average = (num1 + num2 + num3) / 3;

	printf("The average is %2.lf\n", average);

return 0;

}
