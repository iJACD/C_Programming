


#include <stdio.h>
#define size 5

int main(){
	int A[size], high, low;
	A[size] = {3, 5, 9, 12, 1};//fill A with your choice of distinct numbers
	Hi_lo(A, size, &high, &low);
	printf("High = %d, low = %d\n", high, low);
}

void Hi_lo(int arr[], int size, int *hi, int *lo) { 
/*passing variable so when it is changed in the method it is changed in the main as well
finds highest and lowest among the numbers*/ 
	
	/*initialization*/
	*hi = arr[0];
	*lo = arr[0];
	
	for(int i = 0; i < size; i++){
		if(*hi>arr[i]) {
			*hi = arr[i];
		} else if (*lo<arr[i]) {
			*lo = arr[i];
		}
	}
}