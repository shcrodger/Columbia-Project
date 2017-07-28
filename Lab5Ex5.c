//This program was written as a team with Matthew.
#include<stdio.h>
#include<string.h>

char names[7][1000] = {"Ryan Elizabeth 62", "McIntyre Osborne 84", "DuMond Kristin 18", "Larson Lois 42", "Thorpe Trinity 15", "Ruiz Pedro 35", "~"};

int i;
int p = 0;
int q = 0;
int test = 0;
int temp1; //First thing being compared
int temp2; //Second thing being compared
char temp3[100]; //First thing being moved
char temp4[100]; //Second thing being moved
int temp5;

int main()
{
	for(i = 0; i < 1000; i++){
		temp1 = names[q][p];
		temp2 = names[q + 1][p];
		if(temp1 > temp2){
			strcpy(temp4, names[q]);
			strcpy(temp3, names[q + 1]);
			strcpy(names[q], temp3);
			strcpy(names[q + 1], temp4);
		}
		if(temp1 == temp2){
			temp1 = names[q][p + 1];
			temp2 = names[q + 1][p + 1];
			if(temp1 > temp2){
				strcpy(temp4, names[q]);
				strcpy(temp3, names[q + 1]);
				strcpy(names[q], temp3);
				strcpy(names[q + 1], temp4);
			}
		}
		q = q + 1;
		if(q > 5){
			q = 0;
		
		}
	}
	p = 0;
	for(i = 0; i < 6; i++){
		for(p = 0; p < strlen(names[i]); p++){
			printf("%c", names[i][p]);
		}
		printf("\n");
	}
	printf("\n");
	
return 0;
}

