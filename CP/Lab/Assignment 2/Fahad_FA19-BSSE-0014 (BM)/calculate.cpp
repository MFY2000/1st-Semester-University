#include <stdio.h>

int add (int , int);
int subtract (int , int);
int multiply (int , int);
int divide (int , int);

int main (void) {



//	Task 1
	printf("\t\t\t\t Task 1 \n\n");
	
	int num1 , num2 , result = 0;
	char operation; // may be + - * / 
	
	printf("Enter First Number: ");
	scanf("%d" ,&num1);
	
	printf("Enter Second Number: ");
	scanf("%d" ,&num2);
	
	printf("Enter Opertaure You may Prefome: ");
	scanf(" %c" ,&operation);
	
	if(operation == '+'){
		result = add(num1,num2);
	}
	
	else if(operation == '-'){
		result = subtract(num1,num2);
	}
	
	else if(operation == '*'){
		result = multiply(num1,num2);
	}
	
	else if(operation == '/'){
		result = divide(num1,num2);
	}
	
	else{
		printf("Enter a real operation such as + , - , * , / \n");
	}
	
	printf("\nThe result of %d  %c  %d then it will be %d \n\n",num1 ,operation ,num2,result);
	 
}




int add (int n1 , int n2){
	int res = n1 + n2;
	return res;
}
int subtract (int n1 , int n2){
	int res = n1 - n2;
	return res;
}
int multiply (int n1 , int n2){
	int res = n1 * n2;
	return res;
}
int divide (int n1 , int n2){
	int res = n1 / n2;
	return res;
}





