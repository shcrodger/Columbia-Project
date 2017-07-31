#include<stdio.h>

int count(int ints[], int num, int length, int high);

int countHelper(int ints[], int num, int high, int index);

int main()
{
	int howLong;
	int i;
	int search;
	
	printf("Please enter how long you want the array to be \n");
	scanf("%i", &howLong);
		int userInput[howLong];
	for (i = 0; i < howLong; i++){
		printf("Please enter  number into the list\n");
		scanf("%i", &userInput[i]);
	}
	printf("Please enter the number you want to search for\n");
	scanf("%i", &search);
	count(userInput, search, 0, 0);
return 0;
}

int count(int ints[], int num, int high, int index){
	if(index < sizeof(ints)){ 
		countHelper(ints, num, high, index);
	}
	else{
		printf("The number occurs %i times \n", high);
		return 0;
	}
}

int countHelper(int ints[], int num, int high, int index){
	if(ints[index] == num){
		index++;
		high++;
		count(ints, num, high, index);
	}
	else{
		index++;
		count(ints, num, high, index);
	}
	return 0;
}
