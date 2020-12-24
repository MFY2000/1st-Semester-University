#include <iostream>
#include <math.h>


int main (void) {
	
	//Task 6
	printf("\t\t\t\t Task 6 \n\n");
	
	char word;
	
	printf("Enter any character: ");
	scanf("%c" ,&word);
	
	if((word >= 'a' && word <= 'z') || (word >= 'A' && word <= 'Z')){
	
		printf("'%c' is alphabet.", word);
    
	}
    
    
	else if(word >= '0' && word <= '9'){

        printf("'%c' is digit.", word);

    }
    else{
	
		printf("'%c' is special character.", word);

	}

	

return 0;

}


