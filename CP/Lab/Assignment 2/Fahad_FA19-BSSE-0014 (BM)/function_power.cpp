#include <iostream>
#include <math.h>

double Power (float , int);


int main (void) {

	 
	//Task 4
	printf("\t\t\t\t Task 4 \n\n"); 
 
	float n1 , result = 0;
	int n2;
	
	printf("Enter Base: ");
	scanf("%f" ,&n1);
	
	printf("Enter the power of the base: ");
	scanf("%d" ,&n2);
 
	result  = Power(n1 , n2);
	
	printf("The result of base and power is: %0.2f \n\n",result  );
 
 

return 0;

}

//Task 4
double Power (float base , int power){
	
	return pow(base,power);
	
	
}







