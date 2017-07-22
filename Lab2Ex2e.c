#include<stdio.h>
//Program will output a shape which looks like an oval. This is because the "*" character has a space below it meaning it is taller than it is wide. The measurements should be correct
int radius;
int diameter;
int odd = 1;
int p; //counts '*'
int q; //counts ' '
int even = 2;
int i; //counts for even
int main()
{
	printf("Please enter the radius of the circle \n");
	scanf("%i", &radius);
	diameter = radius * 2;
	if (diameter % 2 == 0){
		while(even <= diameter){
			for(q = 0; q < ((diameter - even)/2); q++){
				printf(" ");
			}
			for(i = 0; i < even; i++){
				printf("*");
			}
			for(q = 0; q < ((diameter - even)/2); q++){
				printf(" ");
			}
			even = even + 2;
			printf("\n");
			//printf("%i", diameter);
		}
		even = even - 4;
		while(even >= 2){
			for(q = 0; q < ((diameter - even)/2); q++){
				printf(" ");
			}
			for(i = 0; i < even; i++){
				printf("*");
			}
			for(q = 0; q < ((diameter - even)/2); q++){
				printf(" ");
			}
			even = even - 2;
			printf("\n");

		}
	}
	return 0;
}
