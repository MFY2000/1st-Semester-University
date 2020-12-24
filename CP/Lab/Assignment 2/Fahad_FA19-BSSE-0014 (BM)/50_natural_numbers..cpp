#include <stdio.h>
// #include <math.h>

int add (int , int);


int main (void) {

	//Task 3
printf("\t\t\t\t Task 3 \n\n");

int n1 = 0 , n2 ,result;

for( n1; n1 < 50 ; ++n1 ){
	
	n2 = add(n1,n2);
	
	result =+ n2; 
	
}

printf("The result of first 50 natural number is: %d ",result);


return 0;

}



int add (int n1 , int n2){
	int res = n1 + n2;
	return res;
}


