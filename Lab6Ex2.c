#include<stdio.h>
#include<limits.h>

int smallest(int list[], int current, int index);

int main()
{
	int i;
	int userInput[8];
	for(i = 0; i < 8; i++){
		printf("Please enter a number \n");
		scanf("%i", &userInput[i]);
	}
	smallest(userInput, INT_MAX, 7);
return 0;
}

int smallest(int list[], int current, int index){
	if(index < 0){
		printf("\n %i", current);
		return current;
	}
	if(current > list[index]){
			current = list[index];
	}
	index = index - 1;	
	smallest(list, current, index);	
	
}
