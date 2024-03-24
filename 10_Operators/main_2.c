#include <stdio.h>

int main(int argc, char const* argv[]) {
    printf("Operators\n");

    // Types of Operators based on Operations.
    // There are 7 types of operators based on Operations.
    // 1. Arithmetic
    // 2. Assignment
    // 3. Increament and Decreament (Postfix, Prefix)
    // 4. Logical
    // 5. Relational
    // 6. Bitwise
    // 7. Special

    // Arithmetic Operators
    // Arithmetic Operators means that C provides some basic arithmetic operators.
    // Like +-/*%.
    // These operators are used to perform numeric calculations.
    // + => Add (Addition)
    // - => Minus (Subtraction)
    // * => Multiply (Multiplication)
    // / => Divide (Devide by)
    // % => Modulus (Reminder of Divide)
    // The data type can be int, float, double, etc... which can perform arithmetic operations.
    int aro1 = 5;
    int aro2 = 2;
    printf("%d + %d = %d\n", aro1, aro2, (aro1 + aro2));
    printf("%d - %d = %d\n", aro1, aro2, (aro1 - aro2));
    printf("%d / %d = %d\n", aro1, aro2, (aro1 / aro2));
    printf("%d * %d = %d\n", aro1, aro2, (aro1 * aro2));
    // We have to put % additionally, in order to print % in printf.
    // Also, % operator can only be used in int, not with floating values.
    // And also, the result of % output is the sign of first operand.
    printf("%d %% %d = %d\n", aro1, aro2, (aro1 % aro2));
    // printf("%d %% %d = %d\n", aro1, aro2, (2.2 % 3.2)); // error
    
    // We can use float operator integer, but in order to see the result,
    // This will decide our format specifier.


    // Assignment Operator =
    // This is used to assign the value to some thing.
    int aso = 3; // now we assigned 3 into the aso.
                 // From right to left hand side.
    int aso1 = 5 * 5; // Now, first the result will be evaluated, then the value will be assigned.
    // Left hand side must be a variable.
    // a + b = 0; // Invalid

    // The associatevity of = is Right to Left.
    int aso2 = aso = aso1 = 3; // First aso1 will be 3, then aso = aso1, then aso2 = aso.

    // Now for example:
    int aso4 = aso2 + 1; // We can write a += 1; the meaning is same.
    aso4 = aso2 = 2; // or even a += 2;
    aso4 += 2; // valid
    printf("%d\n", aso4);
    aso4 *= 3; // valid
    printf("%d\n", aso4);
    aso4 -= 3; // valid
    printf("%d\n", aso4);
    aso4 /=3;  // valid
    printf("%d\n", aso4);
    aso4 %= 3; // valid
    printf("%d\n", aso4);
    // These are shorthand operators.
    
    // Syntax of variable initialization:
    // data_type variable_name operator expression
    int dtt = aso + aso - aso4;
    printf("%d\n", dtt);


    return 0;
}
