#include <stdio.h>

	int main(){
		
		double a;
		double b;
		double total;

 			printf("Enter your number:\n");
			scanf("%lf", &a);
 
				printf("Enter the second number:\n");
				scanf("%lf", &b);

 		total = a * b;

	printf("The total is '%lf':\n", total);

return 0;
}
