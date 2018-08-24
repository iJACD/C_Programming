#include <stdio.h>

void myFunction(int *x, int* y) { //very import to add "int*" or "int *" when passing addresses
	*x = *x+2;
	*y = *y-3;
}

int main() { 
	int a, b;
	int *x, *y;

	printf("Enter two ints: ");
	scanf("%d %d", &a, &b);

	x = &a;
	y = &b;

	
	myFunction(x, y);
	
	printf("a is =%d, b is =%d\n", *x,*y);
	printf("a is =%d, b is =%d\n", a,b);

	//testing what is printed 
	/*int x = 4; 

	int *y = &x;

	printf("no pointer %d \n", x);

	printf("pointer %d \n", *y);

	printf("address %p\n", &x);*/





	return 0;
} 



//input 7,8
//output 