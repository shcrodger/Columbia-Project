#include<stdio.h>
//height 5, width 4
int main()
{
	int counter = 1;
	int row = 1;
	int rowCounter = 1;
	int width;
	int column;
	int i;
	printf("for the frame, how wide would you like it to be?");
	scanf("%i", &column);
	printf("how many tall do you want it to be");
	scanf("%i", &row);

	while (counter <= row){
		if (counter == 1){
			for (i = 1; i <= column; i++){
				printf("*");
			}
			printf("\n");
			counter++;
		}
		while (counter < row){
			printf("*");
			for (i = 2; i != column; i++){
				printf(" ");
				
			}
			printf("*\n");
			
			counter++;
			
			
		}

			for (i = 1; i <= column; i++){
				printf("*");
			}
			printf("\n");
			counter++;
		
	}

return 0;
}
