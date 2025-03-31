/*#include <stdio.h>

int main() {
    int num, count = 0;  // Declare num for input and count to store the number of 1's

    printf("Enter your number.\n");  // Prompt the user to input a number
    scanf("%d", &num);  // Read the user's input and store it in num

    // While loop continues as long as num is greater than 0
    while(num > 0) {  
        if(num & 1) {  // Check if the least significant bit (LSB) is 1
            count++;  // If LSB is 1, increment count
        }
        num = num >> 1;  // Right shift the bits of num by 1, effectively dividing by 2
    }

    printf("There are %d '1's in the binary representation of the number.\n", count);  
    // Print the number of 1's in the binary representation

    return 0;  // Return 0 and end the program
}*/

#include <stdio.h>

	int main(){

	int num;
	int count = 0;

		printf("Enter a number to count '1's:\n");
		scanf("%d", &num);

	while(num > 0){
		if(num & 1){
			count++;}
	num = num >> 1;
	}
		printf("There are %d ones in your number.\n", count);
	
	return 0;

}

