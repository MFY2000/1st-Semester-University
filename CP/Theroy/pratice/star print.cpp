#include<stdio.h>

void task1();
void task2(int);


int main(){
	
	task1();
	int num;
	printf("Enter the number you wants to print: ");
	scanf("%d",&num);
	
	
	task2(num);
	
}


void task1(){
	
	for(int i=1;i<=5;i++ ){
		for(int j=1;j<=i;j++){
			printf(" *");
		}
		printf("%d\n",i);
	}
	
}


void task2(int x){
	
	for(int i=1 ; i <= x ; i++){
		int h = x - i;
		for(int k = 0; k <= h;k++){
		printf(" ");
		}
		for(int j=1;j<=i;j++){
			printf(" *");
		}
		
		
			printf("\n");
		}
 
	
	for(int i=x+1 ; i>=0 ; i--){

		int t = 0;
		t = x - i;

		for(int k = 0; k <= t;k++){
		printf(" ");
		}
	
		for(int j=1 ; j <= i ; j++){
			printf(" *");
		}
		
		
			printf("\n");
		}
		
}

