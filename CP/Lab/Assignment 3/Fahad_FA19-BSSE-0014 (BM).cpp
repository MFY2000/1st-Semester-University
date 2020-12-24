#include <stdio.h>
#include <math.h>

int TakeValueInt();
void tasknumprint(int);
char ToValueChar();

int Task1();
int Task2();
int Task3();
int Task4();
int Task5();
int Task6();
int Task7();
int Task8();
int Task9();


int main(){
	
	
	Task1();
	Task2();
	Task3();
	Task4();
	Task5();
	Task6();
	Task7();
	Task8();
	Task9();

	
		
	return 0;
}

int TakeValueInt(){
	int Temp;
	printf("\nEnter Here: ");
	scanf("%d" ,&Temp);
	return Temp;
}

void tasknumprint(int num){

	printf("\n\t\t\t\t Task %d \n\n\n",num);
		
}

char ToValueChar(){
	char a;
	printf("\nEnter Here: ");
	scanf(" %c",&a);
	return a;
}



int Task1(){

	tasknumprint(1);

	printf("Enter Number to check it's even or odd: ");
	
	int Num = TakeValueInt();	
	
	if(Num%2==0){
		printf("\nThe Number is Even ");
	}
	else if(Num == 0){
		printf("\nThe Number is Zero ");
	}	
	else{
		printf("\nThe Number is Odd");
	}
	
	
}

int Task2(){

	tasknumprint(2);

	printf("Enter a year to check if it is a leap year: ");
	
	int year = TakeValueInt();

  if (year%400 == 0)
    printf("%d is a leap year.\n", year);
    
  else if (year%100 == 0) 
    printf("%d isn't a leap year.\n", year);
    
  else if (year%4 == 0) 
    printf("%d is a leap year.\n", year);
    
  else 
    printf("%d isn't a leap year.\n", year);  
   

}

int Task3(void){
	
	tasknumprint(3);
	
	printf("\n\t\t\tEnter a character\n");
	char a = ToValueChar();
	
	if( a >= 48 && a <= 57 )
		printf("It's a number \n\nthe function will return 1");
	
	else if(a =='a' || a =='e' || a =='i' || a =='o' || a =='u' || a =='A' || a =='E' || a =='I' || a =='O' || a =='U')
        printf("It's a vowel \n\nthe function will return 2");
	
	else
        printf("It's the consent \n\nthe function will return 3");
}

int Task4(void){
	
	tasknumprint(4);
	
    /* Input marks of five subjects from user */
    printf("Enter five subjects marks: ");
 	
 	  int phy = TakeValueInt(), chem = TakeValueInt(), bio = TakeValueInt(), math = TakeValueInt(), comp = TakeValueInt(); 
    float Percentage; 

 	Percentage = (phy + chem + bio + math + comp) / 5.0;
 	
	if(Percentage >= 90)
		printf("Grade A");
	

	else if(Percentage >= 80)
		printf("Grade B");

	else if(Percentage >= 70) 
		printf("Grade C");

	else if(Percentage >= 60) 
		printf("Grade D");

	else if(Percentage >= 40) 
		printf("Grade E");

	else
		printf("Grade F");
}

int Task5(void){
	
	tasknumprint(5);
	
	

    float amt, total_amt, sur_charge;

    printf("Enter total units consumed: ");
	
	int unit = TakeValueInt();



    if(unit <= 50){
        amt += unit * 0.50;
    }
  	if(unit <= 100){
        amt += 25 + ((unit-50) * 0.75);
    }
   	if(unit <= 250){
        amt += 100 + ((unit-150) * 1.20);
    }
    if(unit >= 250)
    {
        amt += 220 + ((unit-250) * 1.50);
    }

  
    sur_charge = amt * (20 / 100);
    total_amt  = amt + sur_charge;

    printf("The amount is : %0.2f and the sub charge is this= %.2f \n\n THerefore the total bill is this= Rs. %.2f " ,amt , sur_charge , total_amt);

	
}

int Task6 () {
	
	tasknumprint(6);

	
	printf("Enter temperature: ");
	
	int Temp = TakeValueInt();	
	
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

int Task7(void){
	
	tasknumprint(7);
	
	printf("Enter Three Sides of triangle: ");

	
	int n1 = TakeValueInt() , n2 = TakeValueInt()  , n3 = TakeValueInt() ;	

	
	if(n1==n2 && n2==n3){
	
	printf("Equilateral triangle.");
		
	}
	else if(n1==n2 || n1==n3 || n2==n3){
	
	printf("Isosceles triangle.");
	
	}
	else{
    	
    printf("Scalene triangle.");
    
	}
	

	
}

int Task8(void){
	
	tasknumprint(8);

	printf("Enter any character: ");
	
		char word = ToValueChar();
	
	
	if((word >= 'a' && word <= 'z') || (word >= 'A' && word <= 'Z')){
	
		printf("'%c' is alphabet.", word);
    
	}
    
    
	else if(word >= '0' && word <= '9'){

        printf("'%c' is digit.", word);

    }
    else{
	
		printf("'%c' is special character.", word);

	}

	

	
}

int Task9(void){
	
	tasknumprint(9);
	
	printf("Enter any number: ");
	
	int m = TakeValueInt() , n;
	
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
	
	

	
}

