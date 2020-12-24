#include <stdio.h>
#include <math.h>


int main () {
	
	//Task 6
	printf("\t\t\t\t Task 6 \n\n");
	
	int Temp = 0;
	
	printf("Enter temperature: ");
	scanf("%d" ,&Temp);
	
//	Using If Else statment;
	
	if( Temp <= 0 ){
		printf("Freezing weather ");
	}
	
	else if( Temp <= 10 ){
		printf("Very Cold weather ");
	}
	
	else if( Temp <= 20 ){
		printf("Cold weather ");
	}
	
	else if( Temp <= 30 ){
		printf("The Normal in Temp");
	}
	
	else if( Temp <= 40 ){
		printf("Its Hot ");
	}
	
	else{
		printf("Its Very Hot");
	}
	
	
	
	
	

return 0;

}


