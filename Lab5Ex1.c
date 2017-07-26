#include<stdio.h>
#include<string.h>

char deBlank(char input[]);
char* scanline(char *dest, int dest_len);
char userInput[100];
char tempArray[100];
//char *userInput = &userInput;
int i;
int counter = 0;
int p;
int length;
char temp;

int main()
{
	printf("Please enter a sentence with a maximum length of 100 characters \n");	
	scanline(userInput, 100);
	length = strlen(userInput);
	deBlank(userInput);
	
return 0;
}

char deBlank(char input[]){
	for(i = 0; i < length; i++){
		if(input[i] == ' '){
			counter++;
			for(p = i + 1; p < length; p++){
				temp = input[p];
				input[p - 1] = temp;
			}
		}
	}
	for(i = strlen(input) - counter; i < strlen(input); i++){
		input[i] = ' ';
	}
	for(i = 0; i < strlen(input); i++){
		printf("%c", input[i]);
	}
	printf("\n");
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

  /* Discards any characters that remain on input line */
  while (ch != '\n' && ch != EOF)
    ch = getchar();
  return dest;
}		

