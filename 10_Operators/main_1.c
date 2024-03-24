#include <stdio.h>

int main(int argc, char const* argv[]) {
    printf("Operators\n");

    // What are operators?
    // Operator is basically a symbol, with a meaning of an operation.
    // It tells the compiler to perform some operation on the data.
    // For example:
    // This is + operator (plus).
    // When we put this between 2 operands.
    // It tells that add these 2.
    // 2 + 2 = 4
    int a = 5;
    int b = 5;
    int c = a + b; // a,b = operands, + = operator

    // What are operands?
    // Operand is the data, were we perform the operation.
    // 2 + 2 // 2,2 are operands // + is operator

    // Expression
    // Expression is formed using operator and operands.
    // Expression is a sequence of operator and operand.
    // Which gives a single value after processing.
    // a = 5 + 5; // This whole line is called expression.
    
    // Types of operators based on Operands.
    // There are 3 kinds of operators based on operands.
    // 1. Unary
    // 2. Binary
    // 3. Ternary

    // Unary
    // Unary means only one operand is there.
    // - (Unary minus)
    //  // It'll change the value, if we use with positive, it'll change into negative.
    int dd = 5;
    int da = 10;
    int cc = a + (-da);
    printf("%d\n", cc); // -5
                        //
    // ++, -- (Increament, Decreament)
    //  // We can use it to decreament or increament by one of it's value.
    int ii = 3;
    ii++; // now it becomes 4;
    printf("%d\n", ii);
    ii--; // now it becomes 3;
          // These are equalivant to ii = ii -/+ 1;
    printf("%d\n", ii);
    // If we use --value, then it'll first decreament the value then print.
    // same with ++value.
    ++ii;
    printf("%d\n", ii);
    --ii;
    printf("%d\n", ii);
    // --value / ++value = prefix syntax
    // value-- / value++ = postfix syntax
    
    // In postfix, the value will be updated after the execution of that line.
    // In prefix, the value will be updated before the execution of that line.
    int as = ++ii; // Now "as" = ii = ii + 1;
    printf("%d\n", ii);
    printf("%d\n", as);
    int ass = ii++; // Now "ass" = ii's old value.
                    // But after this line being executed, the i++ is increamented.
    printf("%d\n", ii);
    printf("%d\n", ass);


    // ! (Logical not)
    // It works on the true, false,
    // If the value is true, it'll tell false.
    // If the value is false, It'll tell it's true.
    int t = 2>1; // This is true;
    int ccc = !t; // This will work as false.
    if (ccc) { // We can also use !ccc to use it opposite.
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    // & (Address of)
    // It'll retrieve the address of operand from the memory.
    int ad = 3;
    // printf("%u\n", &ad); // That's why we use address of operator in scanf, so the scanf take the input and store it to the address of that variable.

    // sizeof
    // It'll give the size of the operand.
    printf("%ld\n", sizeof(int));

    // Binary
    // Binary means 2 operands.
    // These are the types of Binary Operators.
        // Arithmetic (+, -, /, *, %)
        // Relational (<,>, <=, >=)
        // Logical (&&, ||)
        // Bitwise (&, |, <<, >>, ^, ~)
        // Equality Operator (==, !=)
        // Comma Operator (,)
        // Assignment Operator (=)

    // Ternary
    // Ternary means 3 operands.
    // These are the ternary operators.
        // ? :
        // Expression1 ? expression2 : expression3
        // If Exp1 is true, then it'll rrun exp2, otherwise, it'll run exp3.
        // First expression should be a condition here.
    int bbb = 10, bbc = 15;
    int x = (bbb>bbc) ? bbb : bbc;
    printf("%d\n", x);
    x = (bbb<bbc) ? bbb : bbc;
    printf("%d\n", x);

    // Expression
    // Expression is sequence of operators and operands.

    // We can also use ternary operator as if-else



    return 0;
}
