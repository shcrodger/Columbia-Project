#include<stdio.h>

int main()
{
	char letter;
	int numLetter;
	printf("please enter the letter");
	scanf("%c", &letter);
	numLetter = (int) letter;
	if(numLetter <= 132){
		printf("The letter is uppercase");
	}
	else{
		printf("The letter is lowercase");
	}
return 0;
}
