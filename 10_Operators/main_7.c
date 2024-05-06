#include <stdio.h>

int main(int argc, char const* argv[]) {

    printf("Operators 7\n");

    // Comma Operator (,).
    // We use comma to seperate things.
    // Like we can use , to declare more than 1 variable at a time.
    int a, b, c;
    // Now we created 3 variables of same data type.

    // But carefully, If we do:
    int* zz, zzz;
    // Now first zz is pointer, but other one isn't.
    // So be careful.

    // Comma is also a operator.
    /*a = 55;
    b = 32;
    c = a,b;
    printf("%d\n", c);*/
    // Comma is a binar operator.
    // It needs 2 operands.
    // // By the way, , is least precedence.
    // Now the thing is, when this program executed.
    // Because , has least precedence, first c would be a because of = assignment operator.
    // So we got c = a's value in print.

    // But what if we write these into a pranthesis.
    a = 55;
    b = 32;
    c = (a,b);
    printf("%d\n", c);
    // Now we got 32.
    // Because comma operator will evaluate second value.
    // For this whole expression in ().
    // Basically first operend's value will be rejected.
    // And it'll return the 2nd operand's value in return of this expression.

    // But, be careful.
    // When declaring the variable.
    // Don't do this:
    //    int s = 5,3;
    // Because now it'll give error.

    // But if we write inside the (). It'll evaluate.
    // Because of the operator precedence, the () will evaluate first.
    // And it'll work fine.

    // Remember, the expression will evaluate.
    // Just in case if we call function, it'll be called.

    // . and -> Operator
    // These are called member selection Operators.


    // sizeof operator
    // This is used to get the size of specific thing.

    // * -> This is called derefferencing operator.

    // & -> This is called address of operator.
    
    return 0;
}
