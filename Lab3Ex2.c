#include<stdio.h>
int sumDigits(int num);
int userNum;
int tempNum; //holds num after mod
int tempNum2; //holds total without previous tempNum
int total = 0;
int remainderNum = 0;
int i = 1;
int choice;
int final = 0;
int tempTotal;
int main()
{
	printf("Would you like to find the sum of the digits of a number ('1'), find a specific digit in a number ('2') or find out how many digits are in a number ('3') 		\n");
	scanf("%i", &choice);
	if(choice == 1){
		printf("What number would you like to use? \n");
		scanf(" %i", &userNum);
		sumDigits(userNum);
		
	}
return 0;
}

int sumDigits(int num){
	remainderNum = userNum;
	while(i = 1){
		
			tempNum = remainderNum % 10;
			remainderNum = remainderNum - tempNum;
			remainderNum = remainderNum / 10;
			final = final + tempNum;
			
			if(remainderNum < 10){
				final = final + remainderNum;
				printf("%i \n", final);
				break;
			}
			
		
	}
}

		
