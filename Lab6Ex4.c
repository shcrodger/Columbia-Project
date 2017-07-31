#include<stdio.h>

int function(int x);

int main (){
	int userInput;
	
	printf("Please enter x> ");
	scanf("%i", &userInput);
	function(userInput);
return 0;
}

int function(int x){
	int result;
	if(x <= 0){
		printf("0 \n");
		return 0;
	}
	else{
		result = x + 2;
		printf("%i \n", result);
		x--;
		function(x);
	}
}
