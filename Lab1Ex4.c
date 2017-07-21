#include<stdio.h>
#include<math.h>
int main()
{
	int choice = 0;
	int length = 0;
	int result = 0;

	printf("Please enter whether you would like to work out the volume of a cube (1) or a sphere (2)");
	scanf("%i", &choice);
	if (choice == 1){
		printf("Please enter what the side length is");
		scanf("%i", &length);
		result = length*length*length;
		printf("The answer is: %i", result);
	}
	if (choice == 2){
		printf("Please enter the radius of the sphere");
		scanf("%i", &length);
		result = (1.3333333333333333 * (22/7));
		result = result * (length*length*length);
		printf("The answer is: %i", result);
	}
		
return 0;
}
