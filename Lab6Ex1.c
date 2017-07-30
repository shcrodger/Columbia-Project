#include<stdio.h>

void reverseDisplay(int value[], int size);


int main()
{
	int i;
	int howLong;
	printf("How many elements do you want in the array?");
	scanf("%i", &howLong);
	int userInput[howLong];
	for(i = 0; i < howLong; i++){
		printf("Please enter a number");
		scanf("%i", &userInput[i]);
	}
	reverseDisplay(userInput, howLong);
return 0;
}

void reverseDisplay(int value[], int size){
	int i;
	for(i = size - 1; i >= 0; i--){
		printf("%i", value[i]);
	}
} 
//I was unsure of how to do this program with recursion so I did it without. I will try to find a way to do it with recursion
