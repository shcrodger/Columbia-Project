#include<stdio.h>


char maths[10000000];
int choice;
int counter = 0;
int i;
int result = 1;

int main()
{
	while(1){
		printf("Enter a number between 1 and 9 or -1 to quit. Entering a number greater than 9 or less that 1 will restart the while loop.\n");
		scanf("%i", &choice);
		if(choice == -1){
			printf("quiting \n");
			break;
		}
		if(choice > 9){
			continue;
		}
		if(choice != -1){
			if(choice < 1){
				continue;
			}
		}
		for(i = choice; i > 0; i--){
			result = result * i;
		}
		maths[counter] = '*';
		counter++;
		maths[counter] = choice + 48;
		counter++;
		maths[counter] = '!';
		counter++;
		maths[counter] = ' ';
		counter++;
		maths[counter] = '=';
		counter++;
		for(i = choice; i > 1; i--){
			maths[counter] = ' ';
			counter++;
			maths[counter] = i + 48;
			counter++;
			maths[counter] = ' ';
			counter++;
			maths[counter] = 'x';
			counter++;
		}
		maths[counter] = ' ';
		counter++;
		maths[counter] = '1';
		counter++;
		maths[counter] = ' ';
		counter++;
		maths[counter] = '=';
		counter++;
		maths[counter] = ' ';
		counter++;
		maths[counter] = result + 48;
		counter++;
		maths[counter] = '*';
		for(i = counter; i >= 0; i--){
			printf("*");
		}
		printf("\n");
		for(i = 0; i <= counter; i++){
			printf("%c", maths[i]);
		}
		printf("\n");
		for(i = counter; i >= 0; i--){
			printf("*");
		}
		printf("\n");
		
	}	
return 0;
}

