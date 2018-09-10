#include<stdio.h>

void printarray(int *arrptr, int size){
  int i;
  for(i=0;i<size;i++){
    printf("%d\t", arrptr[i]);
  }
  printf("\n");
}


int main(){

  int a[5] = {1, 1, 1, 1, 1};
  int *p;
    
    /* 1. Indicate the output and explain (this one is done for you) */
    p = a;
    printarray(a, 5);
    printf("p = %p\t a = %p\n", p, a);
    /* Output: 1 1 1 1 1 */
    /* Explanation: It is same as the initial array, as 
    p is pointing to the first location of it. printing 
    of two addresses are same. */
    
   /* 2. Indicate the output and explain */
    *p = 3;
    printarray(a, 5);
    printf("p = %p\t a = %p\n", p, a);
    /* Output: 3 1 1 1 1 */
    /* Explain: The value at the address of the 
    first position [0] has been updated to 3. Printing of
    the two addresses are the same*/
    
    
    /* 3. Indicate the output and explain */
    *p++ = 5;
    printarray(a, 5);
    printf("p = %p\t a = %p\n", p, a);
    /* Output: 5 1 1 1 1*/
    /* Explain: The value at the first position has
    been updated to 5 and the pointer is then moved 
    forward one position [1], the address for a remains 
    the same as the first position of the array while the 
    address for p is the address for the second position in 
    the array since the pointer incremented by 1. */

    /* 4. Indicate the output and explain */
    *++p = 6;
    printarray(a, 5);
    printf("p = %p\t a = %p\n", p, a);
    /* Output: 5 1 6 1 1*/
    /* Explain: The pointer has been moved one more position
    before the assignment of the value 6. It is now at position
    [2] in the arra. The corresponding address for p that is being 
    displayed is the address for the 3 poistion [2] in the array.*/

    
   /* 5. Indicate the output and explain */
    a[3] = (*p)++;
    printarray(a, 5);
    printf("p = %p\t a = %p\n", p, a);
    /* Output: 5 1 7 6 1*/
    /* Explain: Value at position [3] in the array is assigned 
    the value of the pointer at position [2] since it is there 
    and then the value of the pointer is incremented by 1. The 
    displayed address for p is the address for the 3 position [2]*/

   /* 6. Indicate the output and explain */
    p = &a[4];
    *p = *(p - 2);
    printarray(a, 5);
    printf("p = %p\t a = %p\n", p, a);
    /* Output 5 1 7 6 7 */
    /* Explain: the address the pointer is storing is now equal 
    to the address of the 5th position of the array [4]. Next the value
    of the 5th position [4] is being updated to the value of the 3rd 
    position [2] of the array, which is 7. The displayed address is still
    the address of the 5th position [4] because the pointer was never changed
    after updating the value, only an offset was used.*/

    
    return 0;
}
