#include <stdio.h>



int add (int ,int ,int ,int ,int);
float precentage (int ,int)
int check (int);



int main(){
// CGPA

	int gpa1 , gpa2 , gpa3 , gpa4 , cgpa , marks = 500, sum;
	float avg,div,per;
	
	printf("\nEnter your marks of first Subject out of 100=");
	scanf("%d",&gpa1);
	
	printf("\nEnter your marks of 2nd Subject out of 100=");
	scanf("%d",&gpa2);
	
	printf("\nEnter your marks of 3rd Subject out of 100=");
	scanf("%d",&gpa3);
	
	printf("\nEnter your marks of 4rth Subject out of 100=");
	scanf("%d",&gpa4);
	
	gpa1 = percentage(gpa1);
	gpa2 = percentage(gpa2);
	gpa3 = percentage(gpa3);
	gpa4 = percentage(gpa4);
	gpa5 = percentage(gpa5);
	
	
	sum = add(gpa1 + gpa2 + gpa3 + gpa4,gpa5);
	
	printf("\nObtained marks=%d out of total marks",sum);
	
	printf("\nPercentage=%0.2f",per);

	
	total = gpa1 + gpa2 + gpa3 + gpa4 + gpa5;
	
	cgpa = ( total * creadit ) / (creadit * 5);
	
	printf("Your CGPA of this semester is %d",cgpa)
	


	
	
}





int check (int per){
	
	int gpa = 0;
	
	if(per>=90 && per<=100){
	printf("\nGPA=4.0");
	printf("\nA+");
	}
	else if(per>=85 && per<=89){
	printf("\nGPA=3.7");
	printf("\nA");
	}
	else if(per>=80 && per<=84){
	printf("\nGPA=3.3");
	printf("\nB+");
	}
	else if(per>=75 && per<=79){
	printf("\nGPA=3");
	printf("\nB");
	}
	else if(per>=70 && per<=74){
	printf("\nGPA=2.7");
	printf("\nB-");
	}
	else if(per>=65 && per<=69){
	printf("\nGPA=2.3");
	printf("\nC+");
	}
	else if(per>=60 && per<=64){
	gpa = 2.0;
	printf("\nGPA=2.0");
	printf("\nC-");
	}
	else if(per>=55 && per<=59){
		gpa = 1.7;
      printf("\nGPA=1.7");
      printf("\nD+");
  }
    else if(per>=50 && per<=54){
    	gpa = 1.3;
      printf("\nGPA=1.3");
      printf("\nD-");
  }
    else{
      gpa = 0.0;
      printf("\nGPA=0.0");
      printf("\nF");
  }
  
  return gpa
	
}
