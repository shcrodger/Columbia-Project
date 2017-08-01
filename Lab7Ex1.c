#include<stdio.h>

void scan_long_lat();
void long_lat_equal();
void print_long_lat();

typedef struct longiS{
	int degLo;
	int minLo;
	char dirLo;
} Longi;

typedef struct latiS{
	int degLa;
	int minLa;
	char dirLa;
} Lati;

Lati lati;
Longi longi;


int main (){
	int check = 0;
	int choice;
	while(1){
		printf("Would you like to input long/lat values (1), check if they are equal (2, print them (3) or -1 to quit\n");
		scanf(" %i", &choice);
		if(choice == 1){
			scan_long_lat();
			check++;
		}
		if(choice == 2){
			if(check != 0){
				long_lat_equal();
			}
			else{
				printf("no values have been scanned in \n");
			}
		}
		if(choice == 3){
			if(check != 0){
				print_long_lat();
			}
			else{
				printf("no values have been scanned in \n");
			}
		}
		if(choice == -1){
			return 0;
		}
	}
}

void scan_long_lat(){
	printf("Please enter the degrees for the longitude \n");
	scanf(" %i", &longi.degLo);
	printf("Please enter the minutes for the longitude \n");
	scanf(" %i", &longi.minLo);
	printf("Please enter the direction for the longitude (N/E/S/W) \n");
	scanf(" %c", &longi.dirLo);
	printf("Please enter the degrees for the latitude \n");
	scanf(" %i", &lati.degLa);
	printf("Please enter the minutes for the latitude \n");
	scanf(" %i", &lati.minLa);
	printf("Please enter the direction for the latitude (N/E/S/W) \n");
	scanf(" %c", &lati.dirLa);
}

void long_lat_equal(){
	if(longi.degLo == lati.degLa){
		if(longi.minLo == lati.minLa){
			if(longi.dirLo == lati.dirLa){
				printf("they are equal \n");
				return 0;
			}
		}
	}
	printf("They are not equal \n");
}

void print_long_lat(){
	printf("the longitudes's degrees is %i \n", longi.degLo);
	printf("the longitudes's minute is %i \n", longi.minLo);
	printf("The longitude's direction is %c \n", longi.dirLo);
	printf("the latitude's degrees is %i \n", lati.degLa);
	printf("the latitude's minute is %i \n", lati.minLa);
	printf("The latitude's direction is %c \n", lati.dirLa);
}
	
