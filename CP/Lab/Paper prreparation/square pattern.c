#include <stdio.h>

void Square(int,int);
void Triangle(int,int);



int main(){
	int row,column;
	
	printf("Enter the Number of Row: ");
	scanf("%d",&row);
	
	printf("Enter the Number of Column: ");
	scanf("%d" ,&column);
	
	Square(row,column);
	printf("\n");
	Triangle(row,column);
	
	
	return 0;	
	
}


void Square(x,y){
	int i,j;
	
	for(i=1; i<=x; i++){
		for(j=1;j<=y;j++){
			if(i==1||i==x||j==1||j==y){
				printf("*");
			}
			else{
				printf(" ");	
			}
		}
		printf("\n");	
	}	
} 

void Triangle(x,y){
	int i,j,k;
	
	for(i=0; i<=x; i++){
		for(k=0;k<=x-i;k++){
			printf("*");
		}
		for(j=1;j<=i;j++){	
				printf("  ");	
		}
		for(k=0;k <= x-i;k++){
			printf("*");
		}
		printf("\n");	
	}	
 
	for(i=x; i>=0; i--){
		for(k=0;k<=x-i;k++){
			printf("*");
		}
		for(j=1;j<=i;j++){	
				printf("  ");	
		}
		for(k=0;k <= x-i;k++){
			printf("*");
		}
		printf("\n");	
	}	
} 




