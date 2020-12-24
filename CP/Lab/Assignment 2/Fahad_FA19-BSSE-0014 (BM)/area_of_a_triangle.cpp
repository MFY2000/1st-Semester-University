#include <iostream>
#include <math.h>


float S_formula(int,int,int);
float area_formula(int,int,int,int);

int main (void) {

 
	//Task 5
	printf("\t\t\t\t Task 5 \n\n"); 
	
	int p, q , r;
	float area , S;
	
	printf("Enter three sides of a triangle are p, q and r");
	scanf("%d %d %d",&p,&q,&r);
		
	S = S_formula(p,q,r);
	area = area_formula(S,p,q,r);
	
	printf("The area of a triangle: %0.2f",area);






return 0;

}


float S_formula(int p,int q,int r){
	
	float result = (p + q + r) / 2;
	
	return result;
	
}








float area_formula(int S,int p,int q,int r){
	
	float result = sqrt( S * ( (S-p) * (S-q) * (S-r)) );
	
	return result;
	
}




