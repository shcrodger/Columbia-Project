#include<stdio.h>

struct Position{
	int rowHolder;
	char colHolder;
	int rowCounter;
	int colCounter;
	int position1;
}position1;

int main (){
	printf("Please enter the row (1-8) \n");
	scanf(" %i", &position1.rowHolder);
	position1.rowCounter = position1.rowHolder;
	printf("Please enter the column (a-h) \n");
	scanf(" %c", &position1.colHolder);
	position1.colCounter = (int)position1.colHolder;
	while(position1.rowCounter < 9 && position1.colCounter < 105){
		printf("%i", position1.rowCounter);
		printf("%c \n", position1.colCounter);
		position1.rowCounter++;
		position1.colCounter++;
	}
	position1.rowCounter = position1.rowHolder;
	position1.colCounter = (int)position1.colHolder;
	while(position1.rowCounter > 0 && position1.colCounter > 96){
		printf("%i", position1.rowCounter);
		printf("%c \n", position1.colCounter);
		position1.rowCounter--;
		position1.colCounter--;
	}
return 0;
}


