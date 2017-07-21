#include<stdio.h>

int main()
{
	int ender = 0;
	int age = 0;
	printf("Please enter how many years of schooling you have had");
	scanf("%i", &age);
	if (age == 0){
		if (ender == 0){
			printf("no education");
			ender = 1;
		}
	}
	if (age <= 5){
		if (ender == 0){
			printf("elementary shcool");
			ender = 1;
		}
	}
	if (age <= 8){
		if (ender == 0){
			printf("middle school");
			ender = 1;
		}
	}
	if (age <= 12){
		if (ender == 0){
			printf("high school");
			ender = 1;
		}
	}
	if (age > 12){
		if (ender == 0){
			printf("college");
			ender = 1;
		}
	}
	if (ender == 0){
		printf("The number you have entered is not valid");
	}
	

return 0;
}
