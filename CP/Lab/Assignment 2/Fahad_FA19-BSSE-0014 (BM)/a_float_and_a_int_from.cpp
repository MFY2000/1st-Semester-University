#include <iostream>
#include <math.h>

float product (int , float);

int main (void) {

	//Task 3
	printf("\t\t\t\t Task 3 \n\n");
	
	int hi_num1;
	float hi_num2 = 0;
	
	printf("Enter First Decimals number: ");
	scanf("%d" ,&hi_num1);
	
	printf("Enter Second Point value Number: ");
	scanf("%f",&hi_num2);
		
	float new_result = product(hi_num1,hi_num2);
	
	printf("The result of a Float & a int is: %0.2f \n\n",new_result);

return 0;

}


//Task 3
float product (int a , float b){
	
	float re = a * b;
	
	return re;
}


