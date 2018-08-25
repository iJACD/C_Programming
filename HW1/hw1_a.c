//HW1 Problem a
//JohnAnthony Dobson
//CS 3335
//8/24/18

/* Write a C-program to solve any problem that involves
	i) data types char, int, and float
	ii) scanf() to handle user input
	iii) simple array (of any data type above)
	iv) for loop to handle repetition (3-5 iterations)
	v) if-then-else to make decision
	vi) printf() to produce formatted output */

//This program takes input of a word and length of that number 
//and stores it in a char array. That word is passed to a function
//that determines if the word is a palindrome and if not how much 
//percent of the word is. (needed to find a reason to use a float value).

#include <stdio.h>

#define FALSE 0

int isPalindrome(char *word, int *size){ 
	int i;
	int s = *size - 1;
	int ans = FALSE;
	float p = 0.0;

	for(i = 0; i < s; i++) { 
		if(word[i] == word[s-i]){
 			printf("%c vs %c:",word[i], word[s-i] );
 			ans++;
 			p = (((float)ans+1.0)/(s+1));//adds each successful comparison and divide it by the length of the word to find percentage of Palindrome. 
 			printf("\t%3.0f%% Palindrome\n", p*100);
		} else {
			printf("%c vs %c:  Failed\n",word[i], word[s-i] );
			return FALSE;
		}
	}

	return ans;
}

int main() {

	int length;
	int *size = &length;

	printf("\nPlease enter a word preceded by it's length (e.g. '7 racecar') : ");
	scanf("%d", &length);
	char word[length];
	scanf("%s", word);

	printf("\nLength: %d Word: '%s'\n", length, word);
	printf("Number of elements: %lu\n\n", sizeof(word)); //initially used %d but compiler advised %lu b/c the argument had type 'unsigned long'
	//for(int i)
	if (isPalindrome(word, size) != FALSE) {
		printf("\n%s is a Palindrome!\n\n", word);
	} else {
		printf("\n%s is not a Palindrome.\n\n", word);
	}
	
	return 0;

}
	