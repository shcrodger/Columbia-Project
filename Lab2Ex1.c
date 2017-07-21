
#include<stdio.h>

int main()
{
	int k;
	int f;
	int j = 1;
	int n;
	unsigned int total; 
	printf("enter a number: ");
	scanf("%i", &k);
	printf("enter a second number: ");
	scanf("%i", &n);
	for (f = 1; f <= k; f++){
		j *= f;
	}
	
	int i;
	int z= 1;
	
	
	for (i = 1; i <= n; i++){
		z *= i;
	}
	printf("%i \n", z);
	printf("%i \n", j);
	
	
	total = z - j;
	printf("%u", total);
return 0;
}

