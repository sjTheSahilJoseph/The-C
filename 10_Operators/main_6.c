#include <stdio.h>

int main(int argc, char const* argv[]) {

    // Bitwise Operators.

    printf("Bitwise Operator");

    // Bitwise Operators, these are the operators which will help us to
    // perform operations on bit level.
    // Bit is basically the smalles storage unit in computer memory.
    // 8 bits = 1 byte
    // 1024 bytes = 1 mb
    // 1024 megabytes = 1 gb
    // ...

    // We can perform bitwise operations for integer and characters,
    // But not for other like floating numbers, etc...

    // Bitwise Operators:
    // & -> Bitwise And
    // | -> Bitwise Or
    // ^ -> Bitwise Zor
    // ~ -> Bitwise Not
    // >> -> Right shift
    // << -> Left shift

    // & These are binary operators, they required 2 operands.
    // Except Bitwise Not ~, this requires only one operator.

    // For example:
    int a = 5;
    int b = 10;

    // Now we have to solve:
    int c = a & b;
    
    // First these number would be converted into binary,
    // Then it'll check if both are 1, then 1, otherwise 0 in binary calculation.

    // But in | operator, it'll be one if any of these binary cnverted number is one.

    // But after these calculations, the numbers will convert to actual numbers again.
    // Then the output will show.

    // ^ Xor operator,
    // It'll check if both numbers are same (at binary level).
    // The output will be 0, if not then 1.

    printf("\n%d\n", (a | b));
    printf("\n%d\n", (a & b));
    printf("\n%d\n", (a ^ b));
    printf("\n%d\n", (a + b));
    printf("\n%d\n", (a << b));
    printf("\n%d\n", (a >> b));

    // Remember the precedence of each operator.
    // And associativity.

    
    // << -> Left Shift Operator
    // This is used to shift the number to the left side.
    // Basically in memory level (bit level), it'll shift the numbers by the number of time.
    // And shifted places will have 0 if no binary is present.

    // >> -> Right Shift Operator
    // Same as Left shift, but the direction is opposite.

    // ~ Bitwise Not Operator
    // It'll do the same thing as !.
    // But at bitwise level.
    // If binary is 1 it'll change to 0.
    // If 0 then it'll change to 1.
    // Shortcut answer is:
    int z = ~a;
    // Now z = -(a + 1);


    
    return 0;
}