#include<stdio.h>

int main()
{
	int num1, num2, num3, ender;
	ender = 0;
	printf("please enter your first number");
	scanf("%d", &num1);
	printf("please enter your second number");
	scanf("%d", &num2);
	printf("please enter your third number");
	scanf("%d", &num3);
	if(num3 == num1){
		if(num3 == num2){
			printf("they are all equal");
			ender = ender + 1;
		}
	}
	//printf("%d", ender);
	if(num3 <= num1){
		if(num3 >= num2){
			if(ender != 1){
				printf("Number 3 is in between numbers 1 and 2");
				ender = ender + 1;
			}
		}
	}
	//printf("%d", ender);
	if(num3 >= num1){
		if(num3 <= num2){
			if(ender != 1);
				printf("Number 3 is between numbers 1 and 2");
				ender = ender + 1;
			}
		}
	
	//printf("%d", ender);
	 if(ender == 0){
		printf("Number 3 is not between numbers 1 and 2");
	}
return 0;
}
