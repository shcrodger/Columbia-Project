#include<stdio.h>
char* scanline(char *dest, int dest_len);
typedef struct catalog_entry_t{
	char name[100];
	char title[100];
	char pub[100];
	int year;
} Book;

Book book;

int main (){
	printf("Please enter the name of the author \n");
	scanline(book.name, 100);
	printf("Please enter the title of the book \n");
	scanline(book.title, 100);
	printf("Please enter the publisher \n");
	scanline(book.pub, 100);
	printf("Please enter the year when the book was published \n");
	scanf(" %i", &book.year);
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
