/*HW2 Problem b
JohnAnthony Dobson
CS 3335
Fall 2018
9/10/18*/

/*Write a C-program with two functions – conversion of an integer to its binary form, 
and conversion of a binary sequence (sequence of 0’s and 1’s) to its corresponding integer 
form. The user should be allowed to choose one of the functionalities, followed by the 
corresponding input. The program will display the corresponding output.

[Hint: write two functions and invoke them appropriately in main(); Also, you may find 
the information useful that character ‘0’ has ASCII value 48. Again, array(s) can be useful.]*/
#include <stdio.h>
#include <math.h>

int decimal_binary(int n)  {
    int rem, i=1, binary=0;
    while (n!=0) {
        rem=n%2;
        n/=2;
        binary+=rem*i;
        i*=10;
    }
    return binary;
}

int binary_decimal(int n) {
    int decimal=0, i=0, rem;
    while (n!=0) {
	    rem = n%10;
	    n/=10;
	    decimal += rem*pow(2,i);
	    ++i;
    }
    return decimal;
}

int main() {
   int n;
   char c;

   printf("Enter 'd' to convert binary to decimal.\n");
   printf("Enter 'b' to convert decimal to binary. \n");
   scanf("%c",&c);

   if (c =='d' || c == 'D') {
       printf("Enter a binary number: ");
       scanf("%d", &n);
       printf("%d in binary is %d in decimal", n, binary_decimal(n));
   }
   if (c =='b' || c == 'B') {
       printf("Enter a decimal number: ");
       scanf("%d", &n);
       printf("%d in decimal is %d in binary", n, decimal_binary(n));
   }

   printf("\n");
   return 0;
}
