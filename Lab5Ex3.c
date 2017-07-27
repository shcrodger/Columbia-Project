#include<stdio.h>
#include<string.h>

char hydroxide(char input[]);
char* scanline(char *dest, int dest_len);

char userInput[100];
int i;

int main()
{
	printf("Please enter a chemical \n");
	scanline(userInput, 100);
	
	hydroxide(userInput);
	
return 0;
}

char hydroxide(char input[]){
	int trueVar;
	//printf("%i \n", strlen(userInput));
	//printf("%c \n", input[0]);
	if(input[strlen(input) - 2] == 'O'){
			if(input[strlen(input) - 1] == 'H'){
				printf("1");
				trueVar = 1;
			}
	}
	if(trueVar != 1){
		printf("0");
	}
}

char * //This code is 'scanline.c' from the course page website
scanline(char *dest, /* output - destination string */
         int dest_len) /* input - space available in dest */
{
  int i, ch;

  /* Gets next line one character at a time. */
  i = 0;
  for (ch = getchar();
       ch != '\n' && ch != EOF && i < dest_len - 1;
       ch = getchar())
    dest[i++] = ch;
  dest[i] = '\0';
 }
