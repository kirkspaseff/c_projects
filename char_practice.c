#include <stdio.h>

void main() {

	int c;
	
	printf("First, let me print the EOF character: %c\n", EOF);

	while ((c = getchar()) != EOF) {
		putchar(c);
	};
}


