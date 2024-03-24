#include <stdio.h>

int main(int argc, char const* argv[]) {
    printf("Operators\n");

    // Increament and Decreament Operators (++, --)
    // Postfix and Prefix (--v, v--, ++v, v++)

    // Increment Operator
    // It means that the value will be increased by 1
    // If used in postfix, first the expression will be executed, then the value will update.
    // If used in prefix, first the value will be updatd, then the expression will run.
    int postfix_increment_a = 0;
    printf("Postfix Increment: %d\n", postfix_increment_a);
    int temp = postfix_increment_a++; // now temp have 0.
    printf("Temp: %d\n", temp);
    printf("Postfix Increment: %d\n", postfix_increment_a); // Now, it's 1.

    int prefix_increment_a = 0;
    printf("prefix Increment: %d\n", postfix_increment_a);
    int temp2 = ++prefix_increment_a; // now temp have 1.
    printf("Temp2: %d\n", temp2);
    printf("prefix Increment: %d\n", postfix_increment_a); // Now, it's 1.


    printf("*********\n");

    // Same with --

    int postfix_decrement_a = 1;
    printf("Postfix decrement: %d\n", postfix_decrement_a);
    int temp3 = postfix_decrement_a--; // now temp have 1.
    printf("Temp3: %d\n", temp3);
    printf("Postfix decrement: %d\n", postfix_decrement_a); // Now, it's 0.

    int prefix_decrement_a = 1;
    printf("prefix decrement: %d\n", postfix_decrement_a);
    int temp4 = --prefix_decrement_a; // now temp have 0.
    printf("Temp4: %d\n", temp4);
    printf("prefix decrement: %d\n", postfix_decrement_a); // Now, it's 0.

    // Precedence of both prefix/postfix increment and decrement operator is higher than assignment operator.
    // Associativity is left to right

    // We can use them with float, double as well.

    // ++-- will actaully change the value in memory.
    // Even in printf.
    int test = 1;
    printf("Test: %d\n", ++test);
    printf("Test: %d\n", test);
    printf("Test: %d\n", test);
    // Yes, even in printf, these values are changed.


    return 0;
}
