#include<stdio.h>

int guessedNum = 0;
int errors = 0;
int miniErrors = 0;
int i;
char input;

char word[5] = {'g','r','a','p','e'};

char guessed[5] = {'_','_','_','_','_'};

int main()
{
while(1){
	miniErrors = 0;
	for(i = 0; i < 5; i++){
		printf("%c", guessed[i]);
	}
	printf("\n");
	printf("please enter a guess \n");
	scanf(" %c", &input);
	for(i = 0; i < 5; i++){
		if(input == word[i]){
			guessed[i] = input;
			guessedNum++;
		}
		else{
			miniErrors++;
		}
	}
	if(miniErrors == 5){
		errors++;
	}
	if(guessedNum == 5){
		printf("CONGRATULATION YOU WIN!  \n");
		break;
	}
	if(errors == 7){
		printf("You didn't guess in time. You lose. \n");
		break;
	}
}
			
return 0; 
}

