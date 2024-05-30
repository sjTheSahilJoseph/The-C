
#include <stdio.h>

int main(int argc, char const* argv[]) {

	// Control Flow

	// Control flow tells the program to do things if certain condition is true.
	// Basically for desicion making, we use control flow.
	// We sue if, if-else, if-else if, if else ladder, switch-case statements for that.

	if (1) {
		// any value except 0 is considered as true.
	}
	else {
		// else will execute if if condition is false.
	}

	// We can add as many if else as we want.
	// Even we can nest them.

	// Else is optional.

	// We can use else if

	if (0) {

	} else if (0) {

	} else {

	}


	// Condition can be anything, any non-zero expression = true, 0 = false.

	// If we are writing one line, then we don't have write block {}, but if more than one line,
	// we have to write {}.

	// We can also use nested if-else

	if (1) {
		if (1) {
			printf("inside nested if\n");
		}
	}

	// We can use operators as well in condition.
	// !=, <=, ==, &&, ||, etc...

	// The main thing is final result.

	// We can use else-if ladder

	// creating a variable for non-zero value as true.
	int true = 1;

	if (true) {

	} else if (true) {

	} else if (false) {

	} else {
		// this will execute when no if or else if is true.
	}

	return 0;
}
