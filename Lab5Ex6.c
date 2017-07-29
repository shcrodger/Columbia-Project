#include<stdio.h>
#include<string.h>

char* scanline(char *dest, int dest_len);

char temp1[51];
char temp2[51];
int i;
int lowCounter = 0;
int highCounter;
int howLong;
char ignore;
int p;

int main()
{
	printf("How many elements do you want in the array?");
	scanf("%i", &howLong);
	do
		ignore = getchar();
		while(ignore != '\n');

	char userList[howLong][10000];
	printf(" \nPlease enter the elements for your list. Please keep each individual element under 50 characters and the total characters for the whole list under 10000. Press 'enter' to confirm each element \n");
	for(i = 0; i < howLong; i++){
		scanline(userList[i], 50);
	}
	
	highCounter = howLong - 1;
	
	while(lowCounter < highCounter){
		strcpy(temp1, userList[lowCounter]);
		strcpy(temp2, userList[highCounter]);
		strcpy(userList[lowCounter], temp2);
		strcpy(userList[highCounter], temp1);
		lowCounter++;
		highCounter--;
	}
	for(i = 0; i <= howLong; i++){
		for(p = 0; p < strlen(userList[i]); p++){
			printf("%c", userList[i][p]);
		}
	}
	printf("\n");
	
	
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
