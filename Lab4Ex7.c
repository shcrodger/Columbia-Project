#include<stdio.h>
#include<math.h>
int list1[21];
int list2[21];
int list3[20];
int list4[20];
int i;
int temp;
int main()
{
	for(i = 0; i < 20; i++){
		printf("Please enter a positive number into the first list. Enter 0 if you do not want to enter any more \n");
		scanf(" %i", &temp);
		if(temp == 0)
			break;
		else
			list1[i] = temp;
	}
	list1[20] = -1; 
	for(i = 0; i < 20; i++){
		printf("Please enter a positive number into the second list. Enter 0 if you do not want to enter any more \n");
		scanf(" %i", &temp);
		if(temp == 0)
			break;
		else
			list2[i] = temp;
	}
	list2[20] = -1;
	for(i = 0; i < 20; i++){
		list3[i] = list1[i] * list2[i];
	}
	for(i = 0; i < 20; i++){
		list4[i] = sqrt(list3[i]);
	}
	for(i = 0; i < 20; i++){
		printf("%i %i %i %i \n", list1[i], list2[i], list3[i], list4[i]);
	}
return 0;
}

