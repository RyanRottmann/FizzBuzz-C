#include <stdio.h>

int checkError(int);
void printMizzou(int);

int main (void){// Main
	int value;//creation of number 2 for print mizzzou function
    printf("\nThis program will count from 1 to the number entered\nIf value is divisible by 3 program will print MIZ instead of number\nIf value is divisible by 5 program will print ZOU instead of number\nIf value is divisible by 3 and 5 program will print MIZZOU instead of number\n\nEnter a number to count to: ");
	scanf("%d", &value);

	while (checkError(value)==0){//error check for number 2
		printf("Error! Enter a positive number only: "); 
		scanf("%d", &value);
	}// end of error check

	printf("\nCalling the MIZZOU function, the output is\n\n");
	printMizzou(value);
    printf("\n");
    return 0;
}// End of main

int checkError(int x){//check to make sure number is positive
	if (x<=0){
		return 0;
	}
	return 1;
}//end of error check

void printMizzou(int x){//print mizzou function 
	int i;
	for(i=1; i<=x; i++){
		
		if (i%3==0 && i%5==0){//prints if divisible by 3 & 5
			printf("MIZZOU ");
		}
		else if (i%3==0){//prints if divisible by 3
			printf("MIZ ");
		}
		else if (i%5==0){//prints if divisble by 5
			printf("ZOU ");
		}
		
		else{ //prints number sequence
			printf("%d ", i);
		}
	}	
	printf("\n");
}//end of print mizzou