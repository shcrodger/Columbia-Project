#include<stdio.h>
#include<string.h>

char* scanline(char *dest, int dest_len);

int editor;
int i;

char userInput[100];

int main()
{
	printf("Please enter a noun under 100 characters \n");
	scanline(userInput, 100);
	if(userInput[strlen(userInput) - 1] == 'y'){
		editor = strlen(userInput) - 1;
		userInput[editor] = 'i';
		editor++;
		userInput[editor] = 'e';
		editor++;
		userInput[editor] = 's';
		for(i = 0; i < strlen(userInput); i++){
			printf("%c", userInput[i]);
		}
		printf("\n");
	}
	else if(userInput[strlen(userInput) - 1] == 's'){
		editor = strlen(userInput);
		userInput[editor] = 'e';
		editor++;
		userInput[editor] = 's';
		for(i = 0; i < strlen(userInput); i++){
			printf("%c", userInput[i]);
		}
		printf("\n");
	}
	else if(userInput[strlen(userInput) - 2] == 'c'){
		if(userInput[strlen(userInput) - 1] == 'h'){
			editor = strlen(userInput);
			userInput[editor] = 'e';
			editor++;
			userInput[editor] = 's';
			for(i = 0; i < strlen(userInput); i++){
				printf("%c", userInput[i]);
			}
			printf("\n");
		}
	}
	else if(userInput[strlen(userInput) - 2] == 's'){
		if(userInput[strlen(userInput) - 1] == 'h'){
			editor = strlen(userInput);
			userInput[editor] = 'e';
			editor++;
			userInput[editor] = 's';
			for(i = 0; i < strlen(userInput); i++){
				printf("%c", userInput[i]);
			}
			printf("\n");
		}
	}
	else{
		editor = strlen(userInput);
		userInput[editor] = 's';
		for(i = 0; i < strlen(userInput); i++){
			printf("%c", userInput[i]);
		}
		printf("\n");
	}
return 0;
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
