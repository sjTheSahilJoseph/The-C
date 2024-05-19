#include <stdio.h>
#include <conio.h>

int main(int argc, char const* argv[]) {

	// Unformatted Input

	// Formatted Input and Ouptut means we can do formatting,
	// Like arrange, specify width, specify with format specifier, etc...

	// Unformatted works only on strings and characters.

	// We have 5 unformatted functions primarily in c.
	// 1. getch()
	// 2. getchar()
	// 3. getche()
	// 4. gets()

	// 1. getchar()
	// getchar() will take only one character.
	// Syntax
	// char ch = getchar();
// 	printf("%c\n", ch);

	// 2. getch()
	// getch() is defined in conio.h
	// getch() will take only one character but it'll go to next line imediately without enter.
// 	char ch2 = getch();
// 	printf("%c\n", ch2);

	// 3. getche()
	// getche = get character, e means echo
	// getche will print at least the character and don't wait to press enter. just jump to next.
// 	char ch3 = getche();
// 	printf("%c\n", ch3);

	// 4. gets()
	// This will take more than one character, basically string.
	char ch4[10];
 	gets(ch4);
 	printf("%s\n", ch4);

	// Make sure to clear previous buffer value, otherwise it'll run when we press enter previously.

	

	

	return 0;
}
