#include<stdio.h>
#include<string.h>

typedef struct wordList1{
	char language[20];
	int counter;
	char words[5][20];
} UserInput1, UserInput2;
UserInput1 userInput1;
UserInput2 userInput2;

int i = 0;

char * scanline(char *dest, int dest_len);

void load_word_list(char InputFile1[20], char inputFile2[20]);

void contains();

void add_word();

void equal_lists();

void display_word_list();

int main (){
	int choice;
	load_word_list(userInput1.language, userInput2.language);
	while(1){
		printf("What would you like to do: add words (1), see if a word is in a list (2), check if the lists are equal (3) or print the lists (4). Enter -1 to exit");
		scanf(" %i", &choice);
		if(choice == 1){
			add_word();
		}
		else if(choice == 2){
			contains();
		}
		else if(choice == 3){
			equal_lists(userInput1.words, userInput2.words);
		}
		else if(choice == 4){
			display_word_list();
		}
		else if(choice == -1){
			return 0;
		}
		else{
			printf("Invalid input");
		}
	}
return 0;
}

void load_word_list(char inputFile1[20], char inputFile2[20]){
	printf("Please enter the name of the first language");
	scanline(inputFile1, 20);
	printf("Please enter the name of the second language");
	scanline(inputFile2, 20);
}

void contains(){
	char ignore;
	char temp[20];
	printf("Please enter a word");
	do
		ignore = getchar();
	while(ignore != '\n');
	scanline(temp, 20);
	for(i = 0; i < 5; i++){
		if(strcmp(temp, userInput1.words[i]) == 0){
			printf("True");
			return 0;
		
		}
	}
	printf("false");
}

void add_word(){
	i = 0;
	char wo = '0';
	char ignore;
	do{
		if(i == 0){
			printf("please enter a word \n");
			do
				ignore = getchar();
			while(ignore != '\n');
			scanline(userInput1.words[0], 20);
			i++;
			userInput1.counter++;
			}
		else if(i == 5){
			printf("List full, word not added. \n");
			i = 6;
		}
		else{

			printf("y to answer another word n to not \n");
			scanf("%c", &wo);
		if(wo == 'y'){
			printf("please enter another word: \n");
			scanline(userInput1.words[i], 20);
		}else{
			i = 6;	
		}
		}
	 }while(i<=5);
	
	i=0;
	do{
		if(i == 0){
			printf("please enter a word for the second array. This is only used in 'equal_lists()'\n");
			do
				ignore = getchar();
			while(ignore != '\n');
			scanline(userInput2.words[0], 20);
			i++;
			userInput2.counter++;
			}
		else if(i ==5){
			printf("List full, word not added.\n");
			i = 6;
		}
		else{
			 wo = '0';
			printf("y to answer another word n to not\n");
			scanf("%c", &wo);
		if(wo == 'y'){
			printf("please enter another word:\n");
			scanline(userInput2.words[i], 20); i++;
		}else{
			i = 6;	
		}
		}
	 }while(i<=5);
	}

void equal_lists(){
	int check = 0;
	if(strcmp(userInput1.language, userInput2.language) == 0){
		if(userInput1.counter == userInput2.counter){
			for(i = 0; i < 5; i++){
					if(strcmp(userInput1.words, userInput2.words) == 0){
						printf("true \n");
						return 0;
					
				}
			}
		}
	}
	printf("false \n");
}

void display_word_list(){
	printf("%s \n", userInput1.language);
	printf("%i \n", userInput1.counter);
	for(i = 0; i < userInput1.counter; i++){
		printf("%s ", userInput1.words[i]);
	}
	printf("\n\n");
	printf("%s \n", userInput2.language);
	printf("%i \n", userInput2.counter);
	for(i = 0; i < userInput2.counter; i++){
		printf("%s ", userInput2.words[i]);
	}
	printf("\n\n");
}
char * //This code is 'scanline.c' from the course page website
scanline(char *dest, /* output - destination string */
         int dest_len) /* input - space available in dest */
{
int ch, p;

  /* Gets next line one character at a time. */
  p = 0;
  for (ch = getchar();
       ch != '\n' && ch != EOF && p < dest_len - 1;
       ch = getchar())
    dest[p++] = ch;
  dest[p] = '\0';
  }
  
  
