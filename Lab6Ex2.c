#include<stdio.h>

void smallest(int list[], int current);

int main()
{
	int i;
	int userInput[8];
	for(i = 0; i < 8; i++){
		printf("Please enter a number \n")
		scanf("%i", &userInput[i]);
	}
	smallest(userInput, userInput[0]);
return 0;
}

void smallest(int list[], int current){
	int i;
	int small;
	for(i = 0; i < 8; i++){
		if(list[i] < current){
			list[i] = small;
			smallest(list, small);
		}
	}
	printf(" \n %i", current);
}
