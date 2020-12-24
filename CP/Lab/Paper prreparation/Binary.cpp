#include <stdio.h>

void Convert(int);

int main(){
	
	int Num;
	printf("Enter the Decimal Number to Convert into Binary: ");
	scanf("%d",&Num);
	
	Convert(Num);
}



void Convert(int x){
	int num = x,i=0,temp=0;	
	int arr[10]={0};
	
	
	for(i;num>0;i++){
		
	if(num%2==0){	
		num /= 2; // num = num / 2
		arr[i] = 0;

	}
	else{
		arr[i] = 1;	
		num = (num - 1)/2;
		temp++;
	}
	}
	
	
	
	
	
	printf("\nBinary: ");
	for(i=i-1;i>=0;i--){
		printf("%d",arr[i]);
	}
		printf("\nHow many 1st are there: %d",temp);
	
	
	
	
	
	
	
		
}

