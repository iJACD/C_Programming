#include <stdio.h>
/*write a program that accepts an integer of 6 digits or less and return it in reverse order*/
int main() {

	int numRev[6];
	int i = 0;
	int ans, num;

	printf("Please enter an integer no larger than 6 digits: ");
	scanf("%d", &num);

	while(num != 0){
		ans = num%10;
		num = num/10;
		numRev[i] = ans;

		i++;
	}

	for(int j = 0; j<sizeof(numRev)/sizeof(numRev[0]); j++){
		printf("%d", numRev[j]);
	}
	printf("\n");

}