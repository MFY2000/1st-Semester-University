#include <stdio.h>
#include <math.h>


int main (void) {
	
	//Task 9
	printf("\t\t\t\t Task 9 \n\n");
	
	int m , n;
	
	printf("Enter any number: ");
	scanf("%d" ,&m);
	
	if(m > 0){
	
		n = 1;
	
	}
	else if(m < 0){
	
		n = -1;
	
	}
	else{
		
		n = 0;
		
	}
	
	printf("The valus of m = %d ,The value of n= %d", m , n);
	
	

return 0;

}


