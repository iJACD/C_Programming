#include <stdio.h>

/*Pointer, string, array, scanf*/

int main(){ 
	char item[5];
	puts("Enter item: ");
	/*scanf("%s", item);*/
	fgets(item, sizeof(item), stdin); /*used for string input*/
	printf("Item is: %s", item); 
	/* with scanf() if you type 5 or less shouldnt be a problem, 
	if you type 'BigbackpackwithHarnessStrap', you may have issue, depends on the compiler
	could be truncated or it could give you segmentation fault error, scanf does not put limit on input
	and try to write it back to char[5] "buffer" */


}