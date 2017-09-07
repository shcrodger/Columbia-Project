#include<stdio.h>
#include<string.h>

char* scanline(char *dest, int dest_len);

char userInput1[100];
char userInput2[100];
char bigWord[100];
char littleWord[100];
char results[100];

int i;
int p = 0;
int q;

int main()
{
	printf("Please enter the first word \n");
	scanline(userInput1, 100);
	printf("Please enter the second word \n");
	scanline(userInput2, 100);
	if(strlen(userInput1) < strlen(userInput2)){
		strcpy(bigWord, userInput2);
		strcpy(littleWord, userInput1);
	}
	else{
		strcpy(bigWord, userInput1);
		strcpy(littleWord, userInput2);
	}
	
	for(i = 0; i < strlen(bigWord); i++){
		if(bigWord[i] == littleWord[p]){
			results[p] = bigWord[i];
			p++;
			}} 
i = 0; 
q = strlen(results);
for(i = 0; i < q; i ++){
printf("%c", results[i]);
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
