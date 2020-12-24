#include <stdio.h>
#include <math.h>


int main (void) {
	
	//Task 7
	printf("\t\t\t\t Task 6 \n\n");
	
	int n1 , n2 , n3;
	
	printf("Enter First Sides of triangle: ");
	scanf("%d" ,&n1);
	
	printf("Enter 2nd Sides of triangle: ");
	scanf("%d" ,&n2);
	
	printf("Enter 3rd Sides of triangle: ");
	scanf("%d" ,&n3);

	if(n1==n2 && n2==n3){
	
	printf("Equilateral triangle.");
		
	}
	else if(n1==n2 || n1==n3 || n2==n3){
	
	printf("Isosceles triangle.");
	
	}
	else{
    	
    printf("Scalene triangle.");
    
	}
	

return 0;

}


