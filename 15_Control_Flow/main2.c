
#include <stdio.h>

int main(int argc, char const* argv[]) {

	printf("Switch Case\n");

	// Switch case is another way of writing conditional statements.
	// Switch case works for values for a expression.
	
	/*
	  int a = 5;
	  int b = 22;

	  switch (a) {

	  case (1):
	  {
	  printf("1");
	  } break; // Break will stop to go to next statements, otherwise, it'll run all.
	  case (2):
	  {
	  printf("2");
	  } break;
	  case (5):
	  {
	  printf("5");
	  } break;

	  default:
	  {
	  /// If none is match, and also it's optional.
	  } break;
	  }

	  // only integer or character value is allowed in switch.

	  */

	/*
	float a = 5.5;
	switch (a) {
	case 5.5:
		{printf("5.5\n");} break;
	}

	// Error -> only integer values allowed, since characters are also ascii codes, so we can use them.

	*/

	/*
	char c = 's';

	switch (c) {
	case 's':
		{
			printf("s\n");
		} break;
	default:
		{
			printf("default\n");
		} break;
	}
	// valid

	*/

	// We can only check equality in switch case.
	// We can't use other stuff, like we do in if-else.

	// We can use one block for multiple cases.

	int a = 5;

	switch (a) {
	case 2:
	case 3:
	case 5:
	case 4:
		printf("Hello\n");
	}

	// valid

	// After defauld, we can use 'break', but no need to put, but you can.
	
	
	return 0;
}
