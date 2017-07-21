#include<stdio.h>

int main()
{
	int month;
	int year;
	printf("Please enter which month's number you would like (e.g January = 1)");
	scanf("%i", &month);
	printf("Please enter the year");
	scanf("%i", &year);
	if (month == 1){
		printf("This month has 31 days");
	}
	if (month == 2){
		if (year%4 == 0){
			printf("This month has 29 days as it is a leap year");
		}
		else{
			printf("This month has 28 days");
		}
	}
	if (month == 3){
		printf("This month has 31 days");
	}
	if (month == 4){
		printf("This month has 30 days");
	}
	if (month == 5){
		printf("This month has 31 days");
	}
	if (month == 6){
		printf("This month has 30 days");
	}
	if (month == 7){
		printf("This month has 31 days");
	}
	if (month == 8){
		printf("This month has 31 days");
	}
	if (month == 9){
		printf("This month has 30 days");
	}
	if (month == 10){
		printf("This month has 31 days");
	}
	if (month == 11){
		printf("This month has 30 days");
	}
	if (month == 12){
		printf("This month has 31 days");
	}
return 0;
}
