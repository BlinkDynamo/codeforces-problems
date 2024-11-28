/* pangram.c solution */

#include <stdio.h>
#include <string.h>

#define BUFSIZE 100
#define ALPHABET_SIZE 26

int main(int argc, char *argv[]) {
	
	int n;
	char word[BUFSIZE];
	char unique_letters[BUFSIZE];
	
	
	scanf("%d\n", &n);	/* n input */
	
	scanf("%s\n", &word);
	
	for (int i=0; i<n; i++) {
		
		
	
	
	
	if (sizeof(unique_letters) == ALPHABET_SIZE) {
		
		print("YES");
	}
	
	else {
		print("NO");
	}
	
	printf("%d\n", n);
	
	printf("%s\n", word);
	
	return 0;
}