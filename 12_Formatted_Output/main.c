#include <stdio.h>

int main(int argc, char const* argv[]) {
	// Formatted Output
    printf("\n");
	
	// We use printf() for formatted input.
	// The syntax is:
	// printf("format specfier1, 2, 3 etc...", expression1, expression2, expressionN);
	// Basically we give control string wheere we put format specifiers + string.

	int t1 = 22;
	printf("%d\n", t1);
	printf("%d\n", 2+3);
	printf("Hello\n");

	// Formatted input output means that these will be arranged in a specific order.

	// Escape Sequence Characters.
	// \n means new line.
	// \t means tab.
	// there are many more such escape sequence characters.

	// For floats
	// Let's say we have 
	float var = 35.3322;
	// If we say 
	printf("%10.2f\n", var); // It'll print only 2 percision after the value.
	// And 10 means the width, this is for justification
	printf("%.5f\n", var); // It'll print without any justification of text, 5 percisions of float.

	// If we use negative for justification the justification will change.

		
    return 0;
}
