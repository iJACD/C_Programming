#include <stdio.h>

int main() { 
	int a, b;
	scanf("%d %d", &a, &b);
	void myFunction(a,b);
	printf("a is =%d, b is =%d\n", a,b);
	return 0;
} 

void myFunction(int a, int b) {
	a = a+1;
	b = b-1;
}

//input 7,8
//output 