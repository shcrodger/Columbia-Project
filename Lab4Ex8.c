#include<stdio.h>
#include<math.h>

int scanVector();
int normalize_vector(int num1, int array1[]);
int print_Vector();

int n = 0;
double step1 = 0; //All N Vs squared added together
double step2 = 0; //Square root of step 1
double result = 0; //The p v divided by step 2
int i;
int p;
int temp;

int main()
{
	scanVector();
return 0;
}

int scanVector(){
	printf("Please enter 'n' \n");
	scanf("%i", &n);
	int vectors[n];
	for(i = 0; i < n; i++){
		printf("Please enter a vector");
		scanf("%i", &temp);
		vectors[i] = temp;
	}
	normalize_Vector(n, vectors);
}
	


int normalize_Vector(int num1, int array1[]){
	for(p = 0; p < n; p++){
		step1 = 0;
		step2 = 0;
		result = 0;
		for(i = 0; i <= n; i++){
			step1 = step1 + (array1[i] * array1[i]);
		}
		step2 = sqrt(step1);
		result = array1[p] / step2;
		print_Vector();
	}
}

int print_Vector(){
	printf("The %i X is %lf \n", p + 1, result);
}
