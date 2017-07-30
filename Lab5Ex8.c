#include<stdio.h>
#include<string.h>

char* scanline(char *dest, int dest_len);

char name[80];
char lastName[15];
char firstName[10];
char middleName[2];
int filler;


int i = 0;
int p = 0;

int main()
{
	printf("Please enter a name with the last name first (length 15), with a comman and a space after it, then the first name (length 10) with a full stop after it and the middle initial (length 1) with a full stop after it. The total amount of characters must not go above 80. ");
	scanline(name, 80);
	while(name[i] != ','){
		strcpy(lastName[p], name[i]);
		i++;
		p++;
	}
	i = i + 2;
	while(name[i] != '.'){
		p = 0;
		strcpy(firstName[p], name[i]);
		i++;
		p++;
	}
	i = i + 2;
	while(name[i] != '.'){
		p = 0;
		strcpy(middleName[p], name[i]);
		i++;
		p++;
	}
	for(i = 0; i < strlen(lastName); i++){
		printf("%i", lastName[i]);
	}
	if(strlen(lastName) != 15){
		filler = 15 - strlen(lastName);
		for(i = 0; i <= filler; i++){
			printf(' ');
		}
	}
	printf("     ");
	for(i = 0; i < strlen(firstName); i++){
		printf("%i", firstName[i]);
	if(strlen(firstName) != 10);
		filler = 10 - strlen(firstName);
		for(i = 0; i <= filler; i++){
			printf(' ');
		}
	}
	printf("     ");
	printf("%c \n", middleName[0]);
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
