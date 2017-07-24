#include<stdio.h>


int main()
{
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int *aptr = arr+3;
	printf("the last element is = %i\n", *(aptr+6));
return 0;
}

