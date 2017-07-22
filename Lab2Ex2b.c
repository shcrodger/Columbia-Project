#include<stdio.h>


int main()
{
	int length;
	int rowCounter = 0;
	int colCounter = 0;
	int spaceCounter;
	int i;
	int j;
	int p;
	printf("Please enter the length of the cross");
	scanf("%i", &length);
	for(rowCounter = 0; rowCounter <= (length/2); rowCounter++){
		for(i = 0; i < rowCounter; i++){
			printf(" ");
		}
		printf("*");
		for(j = 0; j <= (length - 2 - (i * 2)); j++){
			printf(" ");
		}
		printf("*");

		printf("\n");
		}
	rowCounter = rowCounter - 1;
	for(rowCounter >= (length/2); rowCounter = rowCounter - 1;){
		for(i = 0; i < rowCounter; i++){
			printf(" ");
		}
		printf("*");
		for(j = 0; j <= (length - 2 - (i * 2)); j++){
			printf(" ");
		}
		printf("*");

		printf("\n");
		}
	printf("*");
	for(p = 0; p <= (length - 2); p++){
		printf(" ");
	}
	printf("* \n");
	
return 0;
}

