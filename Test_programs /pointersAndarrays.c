#include <stdio.h> 

int main() {

	int arr[3] = {1,2,3};
	int *pt; 
	pt = arr; //wont give compilation error, address of the array is always the address of the first location of the array

	printf("%d",pt[1]);
	printf("%p %p %p",pt, arr, &arr[0]); //will be the exact same

}