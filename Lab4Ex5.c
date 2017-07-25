#include<stdio.h>
#include<math.h>
int list1[2];
int list2[2];
int step1; //(list1[0] - list2[0])^2
int step2; //(list1[1] - list2[1])^2
double step3; //step1 + step2
double result; //Square root of step3
int main()
{
	printf("Please enter the first number for array 1 \n");
	scanf("%i", &list1[0]);
	printf("Please enter the second number for array 1 \n");
	scanf("%i", &list1[1]);
	printf("Please enter the first number for array 2 \n");
	scanf("%i", &list2[0]);
	printf("Please enter the second number for array 2 \n");
	scanf("%i", &list2[1]);
	step1 = (list1[0] - list2[0])*(list1[0] - list2[0]);
	step2 = (list1[1] - list2[1])*(list1[1] - list2[1]);
	step3 = step1 + step2;
	result =  sqrt(step3);
	printf("%lf \n", result);
return 0;
}

