#include <stdio.h>

#define G 678 

int main() {
	
	int x = 12345;
	float y = 123.4567;
	char z = 'W';
	char st[] = "Hello world!";

	printf("The final constant is %d\n", G);
	printf("Int is %3i, Float is %4.2f, and Char is %c\n", x,y,z);
	printf("String is %s\n", st);
	return 0;
}								