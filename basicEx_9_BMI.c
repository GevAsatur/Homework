#include <stdio.h>

	int main(){

		double BMI;
		double weight;
		double height;

		printf("Enter your weight in kg:\n");
		scanf("%lf", &weight);

		printf("Enter your height in meters:\n");
		scanf("%lf", &height);

		BMI = weight / (height * height);

		printf("Your BMI is %.2lf\n", BMI);

return 0;
}
