#include <stdio.h>

int main(int argc, char const* argv[]) {
	printf("Operators 3 \n");

	// Relational Operators
	// We use relational opertors to compare 2 values.
	// These are also known as comparision operators.
	
	// These are relational operators.
	// 1. < (Less than)
	// 2. > (Greater than)
	// 3. <= (Less than or equal to)
	// 4. >= (Greater than or equal to)
	// 5. == (Equality Operator)
	// 6. != (Not equal)
	
	// Relational Operators are used in conditions, decision making, etc...
	// They return 1 or 0 (true or false).
	
	int a1 = 3 < 6;
	printf("%d\n", a1);
	// 1 -> 1 means true.
	int a2 = 3 > 6;
	printf("%d\n", a2);
	// 0 -> 0 means false.

	// With floating point numbers as well.
	float f1 = 3.2 < 3.3;
	printf("%f\n", f1);
	// 1 -> 1 means true.
	float f2 = 3.5 > 3.6;
	printf("%f\n", f2);
	// 0 -> 0 means false.
	
	// The comparison expression can be complex or small.
	
	// The associativity of <> operators is left-to-right.
	// Arithmetic operators have the higher precedence compare to relational operators.
	// Same associativiey is left-to-right.
	// ==, != are after <, >, <=, >=

	return 0;
}
