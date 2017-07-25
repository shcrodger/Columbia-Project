#include<stdio.h>

int list[10];
int userInput;
int i;
int total = 0;
int main()
{
for(i = 0; i < 10; i++){
	printf("please enter a number \n");
	scanf("%i", &userInput);
	list[i] = userInput;
}
for(i = 0; i < 10; i++){
	total = total + list[i];
}
total = total / 10;
printf("%i \n", total);
		
return 0;
}

