#include<stdio.h>

int count(int ints[], int num);

int countHelper(int ints[], int num, int high);

int main()
{
	int howLong;
	int i;
	int search;
	
	printf("Please enter how long you want the array to be \n")
	scanf("%i", &howLong);
		int userInput[howLong];
	for (i = 0; i < howLong; i++){
		printf("Please enter  number into the list\n");
		scanf("%i", &userInput[i]):
	}
	printf("Please enter the number you want to search for\n");
	scanf("%i", &search);
	count(userInput, search);
return 0;
}

int count(int ints[], int num){
	int total = 0;
	int i;
	for(i = 0; i < sizeof(ints);
