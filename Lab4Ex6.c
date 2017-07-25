#include<stdio.h>
int howLong;
int i; 
int p;
char temp;

int main()
{
	printf("How long do you want your array to be? \n");
	scanf("%i", &howLong);
	char list[howLong];
	for(i = 0; i < howLong; i++){
		printf("please enter a number \n");
		scanf(" %c", &temp);
		list[i] = temp;
	}
	for(i = 0; i < howLong; i++){
		for(p = i; p < howLong; p++){
			temp = list[p];
			if(list[p + 1] == temp){
				list[p + 1] = 'X';
			}
		}
	}
	printf("The list without duplicates is printed below. Duplicates have been replaced by 'X' \n"); 
	for(i = 0; i < howLong; i++){
		printf(" %c \n", list[i]);
	}
	printf("\n");	
			
return 0;
}
   
