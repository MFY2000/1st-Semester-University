#include <stdio.h>
#include <math.h>



int ToValueInt(void);
char ToValueChar(void);
float degart(float);
float caluMath(float, float);
float c(float);


int task1(void);
int task1OR(void);
int task2();
int task3(void);
int task4();
int task6();
int task7();
int task8();
int task9();
int task10();
int task11();
int task12();
int task13();


int main (){
	
	task1();
	task1OR();
	task2();
	task3();
	task4();
	task6();
	task7();
	task8();
	task9();
	task10();
	task11();
	task12();
	task13();

}

int ToValueInt(){
	int a;
	printf("\nEnter here: ");
	scanf("%d",&a);
	return a;
}

char ToValueChar(){
	char a;
	printf("\nEnter Here: ");
	scanf(" %c",&a);
	return a;
}


int task1(void){
	printf("\t\t\tEnter Any two Number\n");
	
	int a = ToValueInt(),b = ToValueInt(),res;

	res = a % b;
		
	if(res == 0)
		printf("a is divisible by b");
	else{
		printf("Otherwise a is not divisible by b ");
	}
}

int task1OR(void){
	printf("\n\t\t\tEnter a character\n");
	char a = ToValueChar();
	
	if( a >= 48 && a <= 57 )
		printf("It's a number \n\nthe function will return 1");
	
	else if(a =='a' || a =='e' || a =='i' || a =='o' || a =='u' || a =='A' || a =='E' || a =='I' || a =='O' || a =='U')
        printf("It's a vowel \n\nthe function will return 2");
	
	else
        printf("It's the consent \n\nthe function will return 3");
}

int task2(){	
	int a = ToValueInt();
	
	if( a % 2 == 0 ){
		printf("\n\nThe number is even");
		if(a >= 0)
			printf(" positive");
		else
			printf(" negative");
	}

	else{
		printf("\n\nThe number is Odd ");
		if(a >= 0)
			printf("positive");
		else
			printf("negative");
}


}

int task3(){
	printf("\n\t\t\tEnter the Items amount you buy\n");
	
	int a = ToValueInt(), b = ToValueInt(), c = ToValueInt(), d = ToValueInt(), e = ToValueInt(), calc;
	float dis; 	

	calc = a + b + c + d + e;
	
	if(calc >= 5000){
		dis = calc-(calc * 0.1);
		
		printf("Your Amount is: %d \n wow you will get a discount of 10 percent after that: %.1f" ,calc ,dis);
	}
	else
		printf("Your Amount is: %d",calc); 	
		}

int task4(){
	printf("\n\t\t\tEnter the salary of an employee\n");
	
	int GrossSalary , RentalAllowance , DiningAllowance , Salary = ToValueInt();
	
	if(Salary <= 15000){
		RentalAllowance =(Salary * 0.3);
		DiningAllowance =(Salary * 0.15);
	
		GrossSalary = Salary + RentalAllowance + DiningAllowance;	
		
		printf("The BasicSalary %d RentalAllowance %d DiningAllowance %d \nTotal Gross Salary is: %d ",Salary, RentalAllowance , DiningAllowance,GrossSalary);
	}
	else{
		RentalAllowance = 6000;
		DiningAllowance = (Salary * 0.2);
	
		GrossSalary = Salary + RentalAllowance + DiningAllowance;	
		
		printf("The BasicSalary %d RentalAllowance %d DiningAllowance %d \nTotal Gross Salary is: %d ",Salary, RentalAllowance , DiningAllowance,GrossSalary);
	
	}	
	}
	
int task6(){
	printf("\n\t\t\tEnter Profit or loss here\n");	

	int profit = ToValueInt() , loss = ToValueInt() , res ;
	
	res = profit - loss;
	
	if(res > 0)
		printf("You are in Profit of amount: %d",res);
	else if(res < 0)
		printf("You are in loss of amount: %d",res);
	else
		printf("Equal both no loss or profit");
		
}

int task7(){
	printf("\n\t\t\tEnter the Age of all three\n");
	
	int a = ToValueInt() , b = ToValueInt() , c = ToValueInt(); 	
	
	if(a > b && a > c)
		printf("Aladitta is youngest");
	else if(a > b && b > c)
		printf("Basheer is youngest");
	else if(a < c && b < c )
		printf("Junaid is youngest");
	else
		printf("All are of same age");
}

int task8(){
	printf("\n\t\tEnter the software developers working with about him/her\n");

	printf("If the software developer is married then enter M Otherwise N\n");
	
	char marital = ToValueChar(), gender ;
	int age;
	
	printf("Enter Gender M or F");
	gender = ToValueChar();
	
	printf("Enter Age here");
	age = ToValueInt();
	
	if(marital == 'N'){
		if(gender == 'F'){
			if(age > 22){
				printf("The software developer is not to be insured");
			}				
			
			else{
				printf("The software developer is to be insured");
			}
		}
	
		else{ //Male
			if(age > 28)	{
				printf("The software developer is not to be insured");
			}
							
			else{
				printf("The software developer is to be insured");
			}
		}
}
	
	else{
			printf("The software developer is to be insured");
		}
}

int task9(){
	printf("\n\t\t\tEnter height width depth of the box\n");
	
	int volume , height = ToValueInt() , width = ToValueInt() , depth = ToValueInt();
		
	volume = height * width * depth;
	
		if(volume <= 10) 
			printf("The size is Extra Small the value is %dcm3",volume);
			
		else if(volume <= 25) 
			printf("The size is Small the value is %dcm3",volume);
			
		else if(volume <= 75) 
			printf("The size is Medium the value is %dcm3",volume);
					
		else if(volume <= 100) 
			printf("The size is Large the value is %dcm3",volume);
			
		else if(volume <= 250) 
			printf("The size is Extra Large the value is %dcm3",volume);
			
		else
			printf("The size is Extra-Extra Large the value is %dcm3",volume);		
}

int task10(){
	printf("\t\tEnter which Department you want to take admission \n\t\t\t\tC \n\t\t\t\tS \n\t\t\t\tB\n\t\t\tYour background E or M  \n\t\t\tYour Percentage ");
	
	char feilds = ToValueChar(), background = ToValueChar();
	int percent = ToValueInt();
	
	if(feilds != 'B' || feilds != 'C' ){
		if(percent >= 55){
			if(background == 'E'||background == 'M'){	
			printf("You are eligable For Department of Software Engineering admission");
			}
		}
	}
	else if(feilds == 'C' ){
		if(percent >= 50){
			if(background == 'E'){	
			printf("You are eligable For Department of Computer Science admission");
			}
		}
	}
	else{
		if(percent >= 45){
			printf("You are eligable For Business Management admission");
		}	
	}
	
	
}

int task11(){
//	IsEligible	
	printf("\n\t\t\tEnter Nationality P or K Your Age and Your Education\n");
	
	char nationality = ToValueChar() ;
	int age = ToValueInt(), edu = ToValueInt();
	
	if(edu >= 12){
		if(age <= 22 && age >= 18 ){
			if(nationality == 'K' || nationality == 'P'){
				printf("Your are Eligible");	
			}
			else{
				printf("Your are not Eligible because of your nationality");
			}	
		}
		else{
			printf("Your are not Eligible because of your age");
		}	
	}
	else{
		printf("Your are not Eligible because of your eduction");
	}
	
	
	
}

int task12(){
	printf("\n\t\tInput the values for X and Y coordinate : ");
	
	int n1 = ToValueInt() ,n2 = ToValueInt();
	if( n1 > 0 && n2 > 0)
	  printf("The Cordinate point (%d,%d) lies in the First quandrant.\n",n1,n2);
	else if( n1 < 0 && n2 > 0)
	  printf("The Cordinate point (%d,%d) lies in the Sennd quandrant.\n",n1,n2);
	else if( n1 < 0 && n2 < 0)
	  printf("The Cordinate point (%d, %d) lies in the Third quandrant.\n",n1,n2);
	else if( n1 > 0 && n2 < 0)
	  printf("The Cordinate point (%d,%d) lies in the Fourth quandrant.\n",n1,n2);
	else if( n1 == 0 && n2 == 0)
		printf("The Cordinate point (%d,%d) lies at the origin.\n",n1,n2);
	else
		printf("Enter the Correct Cordinate point");
}

int task13(){
	
	float Real_long = 24.868622 , Real_lati = 66.761121;
	float a_long = 25.026488, a_lati = 66.524507;
	float b_long = 23.982498, b_lati = 66.881661;
	float c_long = 23.958768, c_lati = 67.306088;
	
	
	int redius = 6371;
	
	float long_real = degart(Real_long),
	long_1 = degart(a_long),
	long_2 = degart(b_long),
	long_3 = degart(c_long),
	
	litu_real = degart(Real_lati),
	litu_1 = degart(a_lati),
	litu_2 = degart(b_lati), 
	litu_3 = degart(c_lati);
	

	long_1 = a_long - Real_long ,
	long_2 = b_long - Real_long ,
	long_3 = c_long - Real_long ,
	litu_1 = a_lati - Real_lati ,
	litu_2 = b_lati - Real_lati , 
	litu_3 = c_lati - Real_lati ;
	
	
	float distance1 = caluMath(long_1,litu_1),
	distance2 = caluMath(long_2,litu_2),
	distance3 = caluMath(long_3,litu_3);

	float ans1 = c(distance1),ans2 = c(distance2),ans3 = c(distance3);

	ans1 = (ans1 * redius ) ,ans2 = (ans2 * redius ) ,ans3 = (ans3 * redius ) ;

	if( 100 <= ans1 ){
		printf("Not in Range\n");
	}
	else{
	    printf("Yes it detect in 100 km Rang\n");
	}
		
		
	if( 100 <= ans2){
		printf("Not in Range\n");
	}
	else{
	    printf("Yes it detect in 100 km Range\n");
	}
   	
	if( 100 <= ans3){
		printf("Not in Range\n");
	}
	else{
	    printf("Yes it detect in 100 km Range\n");
	}
		
}



float degart(float num){
	float pi = 3.14159265358979323846;

	int res1 = num * ( pi / 180 );
	
	return res1;
		
}

float caluMath(float num1 , float num2){
	
	float res =( sin(num1/2) * sin(num2/2) )+( cos(degart(num1)) * cos(degart(num2)) )*(sin(num1/2) , sin(num2/2));
	
	return res;	
}

float c(float num){
		
	float g = asin(sqrt(num));

	return g; 
}




