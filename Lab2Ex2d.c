#include<stdio.h>

int main()
{
	int counter = 1;
	int column = 1;
	int rowCounter = 1;
	int length;
	int i;
	int j;
	int countDown;
	printf("How long do you want the sides of the triangle to be ");
	scanf("%i", &length);
	countDown = length;
	for(i = 1; i <= length; i++){
		for(j = 1; j <= countDown; j++){
			printf("*");
			
		}
		printf("\n");
		countDown = countDown - 1;
		}
	
return 0;
}
