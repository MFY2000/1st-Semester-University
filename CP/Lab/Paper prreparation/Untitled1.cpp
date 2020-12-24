#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>

struct Questtion_Bank{
	int  Id;
	char Name[30];
	char Gender[7];
	int  Age;
}QB;

int f1(){
	exit(0);
	
}

int main(){
	printf("\t\t===========================================================================");
	printf("\n\t\t\t\t\t WELCOME TO THE KBC.\n");
	printf("\t\t\t\t\t""KON BANEGA CROREPATI"".\n");
	printf("\t\t===========================================================================");
	
	FILE *fptr;      
	fptr=fopen("Data.txt","w");
	fprintf(fptr,"| ID\t| NAME\t| GENDER\t| AGE\t|");
	
	printf("\nEnter ID: ");scanf("%d",&QB.Id);
	fflush stdin;
	printf("\nEnter Name:");gets(QB.Name);
	printf("\nEnter Gender:");gets(QB.Gender);
	printf("\nEnter Age:");scanf("%d",&QB.Age);
	
	printf("\nID:%d\t",QB.Id); 
	printf("\nNAME:%s\t",QB.Name);
	printf("\nGENDER:%s\t",QB.Gender);
	printf("\nAGE:%d",QB.Age);
	
	fprintf(fptr,"\nID;%d\t",QB.Id); 
	fprintf(fptr,"NAME:%s\t",QB.Name);
	fprintf(fptr,"GENDER%s\t",QB.Gender);
	fprintf(fptr,"AGE:%d",QB.Age);

	printf("\t\t======================================================================");
	printf("\n\t\t\t\t\tLETS PLAY THE GAME.\n");
	printf("\t\t======================================================================");
	
	int i;
	char n;
	n=0;
	int c=0;  //count
	int s=0;  //score
	int qs=125000;
	for(i=1;i<=10;i++){
	switch(i){
	
	case 1:
		printf("\n");
	printf(" \n1. Urdu was declared national language of Pakistan in:");
	printf("\n a. April 1950\n b. April 1955\n c. April 1954\n d. April 1952" );
	printf("\nEnter your ANswer"); 
	scanf(" %c",&n);
	printf("%c",n);
	n = toupper(n);//use it in all code before if condition
	
	if(n == 'C'){
		c++;
		qs=qs+qs;
		s+=qs;
		printf("\n");
		printf("\t\t\t\t==========YOU HAVE ENTERED CORRECT ANSWER.============ \n");
		printf("\t\t\t\t\t  CONGRATULATION YOU WON $%d.\n",s);
		printf("\t\t\t========== HERE YOUR NEXT QUESTION ON YOUR COMPUTER SCREEN.==========");
		printf("COUNTER:%d\n",c);
		//fprintf(fptr,"%d",c);
		 
	}
	
	else{
	printf("\n");
	printf("\t\tYOUR ANSWER IS WRONG");
	fprintf(fptr,"\n AND YOU HAVE WON $%d",s);
	f1();
	}
	
	break;
	case 2:
		printf("\n");
		printf("\n2.Who advocated the adoption of ' PURA' model to eradicate rural poverrty:");
		printf("\n a.Dr. A.P.J. Abdul Kalam\n b.Sri Abhijit Sen.\n c.Moulana Abdul Kalam Azad\n d.Prof. A.M. Patha");
		printf("\nEnter your Answer:"); scanf(" %c",&n);
	if(n=='a'){
		c++;
		qs=qs+qs;
		s+=qs;
		printf("\n");
		printf("\t\t\t\t==========YOU HAVE ENTERED CORRECT ANSWER.============ \n");
		printf("\t\t\t\t\t  CONGRATULATION YOU WON $%d.\n",s);
		printf("\t\t\t========== HERE YOUR NEXT QUESTION ON YOUR COMPUTER SCREEN.==========");
		printf("%d\n",c);
		fprintf(fptr,"%d",c);
		
	}
	else{
		printf("\n");
		printf("\n\n\t\tYOUR ANSWER ISWrong");
			fprintf(fptr,"\n AND YOU HAVE WON $%d",s);
		f1();
	}
	break;
		case 3:
		
		printf("\n");
		printf("\n3.Michael Jackson was a distinguished personality in which of the following fields:");
		printf("\n a.Journalism\n b.Acting\n c.Pop Music\n d.Sports");
		printf("\nEnter your Answer:"); scanf(" %c",&n);
		
		if(n=='c'){
		c+=c;
		qs=qs+qs;
		s+=qs;
		printf("\n");
		printf("\t\t\t\t==========YOU HAVE ENTERED CORRECT ANSWER.============ \n");
		printf("\t\t\t\t\t  CONGRATULATION YOU WON $%d.\n",s);
		printf("\t\t\t========== HERE YOUR NEXT QUESTION ON YOUR COMPUTER SCREEN.==========");
		printf("%d\n",c);
		fprintf(fptr,"%d",c);
		 
	}
	else{
		printf("\n");
		printf("\n\t\tYOUR ANSWER ISWrong");
	    fprintf(fptr,"\n AND YOU HAVE WON $%d",s);
		f1();
	}
	break;
	case 4:
	   	
		printf("\n");
		printf("\n4.Mohammed Azharuddin, former Indian Cricket Team Captain, represents ...........Constituency of Uttar Pradesh in the Lok Sabha,:");
		printf("\n a.Mirzapur\n b.Moradabad\n c.Meerut\n d.Mathura");
		
		printf("\nEnter your Answer:"); scanf(" %c",&n);
		
		if(n=='b'){
	    c+=c;
		qs=qs+qs;
		s+=qs;	
		printf("\n");
		printf("\t\t\t\t==========YOU HAVE ENTERED CORRECT ANSWER.============ \n");
		printf("\t\t\t\t\t  CONGRATULATION YOU WON $%d.\n",s);
		printf("\t\t\t========== HERE YOUR NEXT QUESTION ON YOUR COMPUTER SCREEN.==========");
		printf("%d\n",c);
		fprintf(fptr,"%d",c);
		 
	}
	else{
		printf("\n");
		printf("\n\t\tYOUR ANSWER ISWrong");
		fprintf(fptr,"\n AND YOU HAVE WON $%d",s);
		f1();
	}
	break;
	case 5:
		printf("\n");
		printf("\n5.Who is now the World’s Second Richest Person ?:");
		printf("\n a.Amancio Ortega\n b.Warren Buffett\n c.Jeff Bezos\n d.Bill Gates");
		printf("\nEnter your Answer:"); scanf(" %c",&n);
		
		if(n=='c'){
		c+=c;
		qs=qs+qs;
		s+=qs;
		printf("\n");
		printf("\t\t\t\t==========YOU HAVE ENTERED CORRECT ANSWER.============ \n");
		printf("\t\t\t\t\t  CONGRATULATION YOU WON $%d.\n",s);
		printf("\t\t\t========== HERE YOUR NEXT QUESTION ON YOUR COMPUTER SCREEN.==========");
		printf("%d\n",c);
		fprintf(fptr,"%d",c);
		 
	}
	else{
		printf("\n");
		printf("\n\t\tYOUR ANSWER ISWrong");
		fprintf(fptr,"\n AND YOU HAVE WON $%d",s);
		f1();
	}
	break;
	case 6:
		printf("\n");
		printf("\n6.Ctrl, Shift and Alt are called .......... keys.:");
		printf("\n a.modifier\n b.function\n c.alphanumeric\n d.adjustment");
		printf("\nEnter your Answer:"); scanf(" %c",&n);
		
		if(n=='a'){
			c+=c;
		qs=qs+qs;
		s+=qs;
			printf("\n");
		printf("\t\t\t\t==========YOU HAVE ENTERED CORRECT ANSWER.============ \n");
		printf("\t\t\t\t\t  CONGRATULATION YOU WON $%d.\n",s);
		printf("\t\t\t========== HERE YOUR NEXT QUESTION ON YOUR COMPUTER SCREEN.==========");
		printf("%d\n",c);
		fprintf(fptr,"%d",c);
		 
	}
	else{
		printf("\n");
		printf("\n\t\tYOUR ANSWER ISWrong");
		fprintf(fptr,"\n AND YOU HAVE WON $%d",s);	
		f1();
	}
	break;
	case 7:
		
		printf("\n");
		printf("\n7.A computer cannot ""boot"" if it does not have the _____:");
		printf("\n a.Compiler\n b.Loader\n c.Operating system\n d.Assembler");
		printf("\nEnter your Answer:"); scanf(" %c",&n);
		
		if(n=='c'){
		c+=c;
		qs=qs+qs;
		s+=qs;
			printf("\n");
		printf("\t\t\t\t==========YOU HAVE ENTERED CORRECT ANSWER.============ \n");
		printf("\t\t\t\t\t  CONGRATULATION YOU WON $%d.\n",s);
		printf("\t\t\t========== HERE YOUR NEXT QUESTION ON YOUR COMPUTER SCREEN.==========");
		printf("%d\n",c);
		fprintf(fptr,"%d",c);
		 
	}
	else{
		printf("\n");
		printf("\n\t\tYOUR ANSWER ISWrong");
		fprintf(fptr,"\n AND YOU HAVE WON $%d",s);	
		f1();
	}
	break;
	case 8:
	
		printf("\n");
		printf("\n8.Which of the following is a popular programming language for developing multimedia webpages.:");
		printf("\n a. COBOL\n b.Java\n c.BASIC\n d.Assembler");
		printf("\nEnter your Answer:"); scanf(" %c",&n);
		
		if(n=='b'){
		c+=c;
		qs=qs+qs;
		s+=qs;
		printf("\n");
		printf("\t\t\t\t==========YOU HAVE ENTERED CORRECT ANSWER.============ \n");
		printf("\t\t\t\t\t  CONGRATULATION YOU WON $%d.\n",s);
		printf("\t\t\t========== HERE YOUR NEXT QUESTION ON YOUR COMPUTER SCREEN.==========");
		printf("%d\n",c);
		fprintf(fptr,"%d",c);
		 
	}
	else{
		printf("\n");
		printf("\n\t\tYOUR ANSWER ISWrong");
		fprintf(fptr,"\n AND YOU HAVE WON $%d",s);	
		f1();
	}
	break;
	case 9:
		qs=qs+qs;
		s+=qs;
		printf("\n");
		printf("\n9.A _______ is a software program used to view Web pages.:");
		printf("\n a.site\n b.host\n c.link\n d.browser");
		printf("\nEnter your Answer:"); scanf(" %c",&n);
		
		if(n=='d'){
			printf("\n");
		printf("\t\t\t\t==========YOU HAVE ENTERED CORRECT ANSWER.============ \n");
		printf("\t\t\t\t\t  CONGRATULATION YOU WON $%d.\n",s);
		printf("\t\t\t========== HERE YOUR NEXT QUESTION ON YOUR COMPUTER SCREEN.==========");
		printf("%d\n",c);
		fprintf(fptr,"%d",c);
		 
	}
	else{
		printf("\n");
		printf("\n\t\tYOUR ANSWER ISWrong");
		fprintf(fptr,"\n AND YOU HAVE WON $%d",s);	
		f1();
	}
	break;
	case 10:
		qs=qs+qs;
		s+=qs;
		printf("\n");
		printf("\n10.The box that contains the central electronic components of the computer is the ..............:");
		printf("\n a.Motherboard\n b.System Unit\n c.Peripheral\n d.RAM");
		printf("\nEnter your Answer:"); scanf(" %c",&n);
		
		if(n=='b'){
			printf("\n");
		printf("\t\t\t\t==========YOU HAVE ENTERED CORRECT ANSWER.============ \n");
		printf("\t\t\t\t\t  CONGRATULATION YOU WON $%d.\n",s);
		printf("\t\t\t\T==========THE END.==========");
		printf("%d\n",c);
		fprintf(fptr,"%d",c);
		
		fprintf(fptr,"\n AND YOU HAVE WON $%d",s);
	}
	else{
		printf("\n");
		printf("\n\t\tYOUR ANSWER IS Wrong");
		f1();
	}
	break;
	default:
		printf("\n");
		printf("Wrong");

	
	
        }
    }
}
