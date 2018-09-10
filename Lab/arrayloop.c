/*A pointer can refer to an array and can be used to process the array. 
Download the code and modify it to control the loop and printing using a 
pointer that refers to the array. This is not a graded work and will be 
checked in class on Monday, Sep. 10.*/
#include<stdio.h>

int main(){
   int arr[5] = {56, 78, 98, 23, 47};
   int *p;
   int sum = 0, i;
   
   for(p=arr; p < &arr[5]; p++) /*the (" "; p < &arr; " ") can come out */
   		sum+=*p;
      /*sum += arr[i];*/
      
   printf("Sum of the numbers: %d\n", sum);
   
   return 0;
}
