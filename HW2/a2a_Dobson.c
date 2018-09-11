/*HW2 Problem a
JohnAnthony Dobson
CS 3335
Fall 2018
9/10/18*/

#include <stdio.h>
/*Write a C-program to print a table showing how many times a digit appears in a number. 
The number will be entered by the user. For example, if the user enters 378677189, then 
the output should be as follows:

Digit: 0123456789 
Frequency: 0 1 0 1 0 0 1 3 2 1

Remember to allow the users to enter their own choice of input number. [Hint: arrays could be useful]*/

int checkFrequency(int *arr, int n) {

   switch(n) {
      case 0 :
        arr[0]+= 1;
        break;
      case 1 :
        arr[1]+= 1;
      	break;
      case 2 :
        arr[2]+= 1;
        break;
      case 3 :
        arr[3]+= 1;
        break;
      case 4 :
        arr[4]+= 1;
        break;
      case 5 :
        arr[5]+= 1;         
        break;
      case 6 :
        arr[6]+= 1;
      	break;
      case 7 :
        arr[7]+= 1;        
        break;
      case 8 :
        arr[8]+= 1;
        break;
      case 9 :
        arr[9]+= 1;
        break; 
   }   
 
   return 0;
}

int main() {
	int arrANS[10] = {0,0,0,0,0,0,0,0,0,0};
	int length, num, ans, i, j = 0;
	
	printf("\nPlease enter a digit preceded by it's length (e.g. '7 5252525') : ");
	scanf("%d", &length);
    scanf("%d", &num);

    int arrIN[length];

    while(num != 0){
		ans = num%10;
		num = num/10;
		arrIN[j] = ans;

		j++;
	}
	
	printf("Digit:\t\t");	
	for(i = 0; i<10; i++) {
		printf("%d\t", i);
	}

	for(i = 0; i<sizeof(arrIN)/sizeof(arrIN[0]); i++){
		checkFrequency(arrANS, arrIN[i]);
	}
	printf("\nFrequency:\t");
	for(i = 0; i<10; i++){
		printf("%d\t", arrANS[i]);
	}
	printf("\n");
}
 
