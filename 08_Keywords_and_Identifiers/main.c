#include <stdio.h>

int main(int argc, char const* argv[]) {
    printf("Keywords and Identifiers\n");

    // In C, we have 32 keywords.
    // Keywords are some reserved words or predefined words.
    // Those words are called keywords.

    // Program is a collection of instructions.
    // We use keywords to form an instruction.

    // For example:
    // int is a keyword.
    // for, while, break, goto, if, for, etc...
    
    // Keywords cannot be used as Identifiers.
    // All the keywords in C are in lowercase.
    int INT = 5; // -> valid
                 // // Because they are tatally different.


    // Identifiers.
    // Identifier are for example, the name of the variable, function, array, structure, etc...
    // Identifiers are used to identify something.
    // There are some rules for declaring and initializing identifiers.
    // We can use letters, numbers, and underscore. No any other stuff.
    int bb___3 = 332; // valid

    // For keywords, we can use length up to 31 characters by ANSI.
    
    // But for identifiers, we can use more than 31.
    // But these are case sensative.
    int A = 3;
    int a = 2;
    // They are different.

    return 0;
}
