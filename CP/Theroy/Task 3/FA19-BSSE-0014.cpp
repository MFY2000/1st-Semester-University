#include <stdio.h>



int main(){

//	Task 1
	
	float C;
	
	printf("Enter the temperture in Celsius : ");
	scanf("%f" , &C);
	
	C =  ( ( C * ( 9/5 ) ) + 32 ) ;
	
	printf("\nTemperture in Fahreheit : %0.1f \n", C);
	
	
//	Task 2	
	
	
	int dist;
	
	printf("/nEnter the Distance in Miles : ");
	scanf("%d" , dist)
	
	dist = dist * 1.60934
	
	printf("/nDistance in kilomiles : %d \n", dist);
	
	
//	Task 3	
	
	
	int num1 , num2 , num3 = 0;
	printf("\nEnter the first number : ");
	scanf("%d" , &num1 );
	
	printf("\nEnter the Second number : ");
	scanf("%d" , &num2 );
	
	printf("\nEnter the third number : ");
	scanf("%d" , &num3 );
	
	int res = num1 + num2 + num3;
	
	printf("\nAfter Adding the number : %d \n", res);
	
	
	
//	Task 4	
	
	int num1 , num2 , num3 = 0;
	printf("\nEnter the first number : ");
	scanf("%d" , &num1 );
	
	printf("\nEnter the Second number : ");
	scanf("%d" , &num2 );
	
	printf("\nEnter the third number : ");
	scanf("%d" , &num3 );
	
	int res = num1 * num2 * num3;
	
	printf("\nAfter Multiply the number : %d \n", res);

	
//	Task 5
	
	int num = 0;
	
	printf("\nEnter the number for taking square : ");
	scanf("%d" , &num );
	
	printf("The square of %d is : %d",num,(num*num));
	
//	Task 6
	
	int num = 0;
	
	printf("\nEnter the number for taking square : ");
	scanf("%d" , &num );
	
	printf("The square of %d is : %d",num,(num*num*num));

			
//	Task 7
	
	int side  = 0;
	
	printf("\nEnter the Lenght of Side : ");
	scanf("%d" , &side );
	                   
	printf("The area of square is : %d",(side*side));

	
//	Task 8	
	
	
	int radius = 0;
	
	printf("\nEnter the Radius of the Circle : ");
	scanf("%d" , &radius );
	
	float pi = 3.142;
	float area = pi * radius * radius;                     
	float cir = pi * 2 * radius;                     
	                
					   
	printf("The area of Circle is : %0.2f \nCircumference of Circle : %0.2f",area , cir);
		
//	Task 9

	int num1 , num2 , num3 = 0;
	printf("\nEnter the first number : ");
	scanf("%d" , &num1 );
	
	printf("\nEnter the Second number : ");
	scanf("%d" , &num2 );
	
	printf("\nEnter the third number : ");
	scanf("%d" , &num3 );
	
	float res = (num1 + num2 + num3) / 3;
	
	printf("\nAverage of three number : %0.2f \n", res);

//	Task 10	
	
	int num1 ;
	float rate = 8.11;
	float rate2 = 10.20; 
	
	printf("\nEnter the Unit Used : ");
	scanf("%d" , &num1 );
	
	float result = (200 * rate) + ( rate2 * (num1-200) );
	
	
	
	printf("\nThe bill of Electricity of 200 unit = %0.1f ,\nThe unit greater then 200 = %0.1f ,\nTotal = %0.1f", (200 * rate) , ( rate2 * (num1-200) ) , result);


//	Task 11

	int gpa1,gpa2,gpa3,gpa4,cgpa , totalmarks,sum;
	float avg,div,per;
	
	printf("\nEnter your marks of first Subject out of 100=");
	scanf("%d",&gpa1);
	
	printf("\nEnter your marks of 2nd Subject out of 100=");
	scanf("%d",&gpa2);
	
	printf("\nEnter your marks of 3rd Subject out of 100=");
	scanf("%d",&gpa3);
	
	printf("\nEnter your marks of 4rth Subject out of 100=");
	scanf("%d",&gpa4);
	
	sum= gpa1 + gpa2 + gpa3 + gpa4;
	
	printf("\nObtained marks=%d",sum);
	
	avg = sum/4;
	printf("\nAverage=%0.2f",avg);
	
	per=(sum*100)/400;
	
	printf("\nPercentage=%0.2f",per);
	
	
	if(per>=90 && per<=100)
	
	{
	printf("\nGPA=4.0");
	printf("\nA+");
	}
	else if(per>=85 && per<=89)
	{
	printf("\nGPA=3.7");
	printf("\nA");
	}
	else if(per>=80 && per<=84)
	{
	printf("\nGPA=3.3");
	printf("\nB+");
	}
	else if(per>=75 && per<=79)
	{
	printf("\nGPA=3");
	printf("\nB");
	}
	else if(per>=70 && per<=74)
	{
	printf("\nGPA=2.7");
	printf("\nB-");
	}
	else if(per>=65 && per<=69)
	{
	printf("\nGPA=2.3");
	printf("\nC+");
	}
	else if(per>=60 && per<=64)
	{
	printf("\nGPA=2.0");
	printf("\nC-");
	}
	else if(per>=55 && per<=59)
  {
      printf("\nGPA=1.7");
      printf("\nD+");
  }
  else if(per>=50 && per<=54)
  {
      printf("\nGPA=1.3");
      printf("\nD-");
  }
  else if(per>=0 && per<50)
  {
      printf("\nGPA=0.0");
      printf("\nF");
  }
  
  
//	Task 12

	int gpa1 , gpa2 , gpa3 , gpa4 , gpa5 , cgpa ,total , creadit = 3;
	
	printf("\nEnter your marks of first GPA ");
	scanf("%d",&gpa1);
	
	printf("\nEnter your marks of 2nd GPA");
	scanf("%d",&gpa2);
	
	printf("\nEnter your marks of 3rd GPA");
	scanf("%d",&gpa3);
	
	printf("\nEnter your marks of 4rth GPA");
	scanf("%d",&gpa4);
	
	printf("\nEnter your marks of rth GPA");
	scanf("%d",&gpa4);
	
	total = gpa1 + gpa2 + gpa3 + gpa4 + gpa5;
	
	cgpa = ( total * creadit ) / (creadit * 5);
	
	printf("Your CGPA of this semester is %d",cgpa)
	


	
	
}
