#include<stdio.h>

int *pointerNum1;
int *pointerNum2;
int userNum1;
int userNum2;
int *smallestPointer;
int smallestVar;
int main()
{
	printf("Please enter your first number \n");
	scanf("%i", &userNum1);
	printf("Please enter your second number \n");
	scanf("%i", &userNum2);
	int *pointerNum1 = &userNum1;
	int *pointerNum2 = &userNum2;
	int *smallestPointer = &smallestVar;
	if(userNum1 > userNum2){
		smallestVar = userNum2;
	}
	else{
		smallestVar = userNum1;
	}
	printf("smallestVar = %i\n", *smallestPointer);
		
return 0;
}

