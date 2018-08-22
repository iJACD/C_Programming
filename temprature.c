#include <stdio.h>

#define high 90
#define low 40

void main(){

	int c;
	puts("Please enter temprature in Celcius: ");
	scanf("%d", &c);

	printf("Celcius is %d\n", c);
	
	float f = (c-32)*(.5555555);
	
	printf("Fahrenheit is %4.2f \n",f);

	if(f>high){
		printf("Temprature is above %d, its too hot!\n", high);
	} else if(f<low){
		printf("Temprature is below %d, its too cold!\n", low);
	} else {
		printf("Temprature is just right.\n");
	}
	//return 0;
}


