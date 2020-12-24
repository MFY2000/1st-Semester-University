#include<stdio.h>


int main() 
{
	int val=1;
	
	do{ 
		val++; 
		++val;
		
		printf("%d\n",val); 
	
	}while(val++<25); 
	

	
	return 0;
}
