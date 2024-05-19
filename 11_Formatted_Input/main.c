#include <stdio.h>

int main(int argc, char const* arv[]) {

    // Formatted Input
	// We use scanf function to take input at runtime form the user.
	// The syntax is scanf("<control string>", arg1, arg2, argN);
	// Basically at "control string" or "conversion string" we provide the format,
	// Like if it's int then %d, if it's float then %f, etc...
	// We do this to tell that argN is of what data type.
	// And we pass the address of that variable which we want to take input.
	// The order is important of conversion string, and args.

	/* For example: */
	//int a;
	// We use "address of" operator to give the address of that variable where we want to get data.
	//scanf("%d", &a);

	/* Example of multiple variables. */
	//int b, c, aa, d;
	//scanf("%d %d %d %d", &b, &c, &aa, &d);

	/* We can add other data data types as well. */
	//int ab;
	//float ba;
	//scanf("%d %f", &ab, &ba);
	// Confirm the value.
	//printf("%d %f", ab, ba);

	/* Interesting fact: */
	// The scanf() will return the number of arguments the user has given.

	// We can also specify the width of the input.
	// int var;
	// like: scanf("%4d", &var); // If we write 12345 then it'll only store 1234 5 will be stored
	// in another %d if present.

	
	
    
    return 0;
}
