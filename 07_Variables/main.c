#include <stdio.h>

int main(int argc, char const* argv[]) {
    printf("Variables\n");

    // Why we need a variable?
    // When we write a problem which will print just "Hello\n", we don't need a
    // variable. But if we want to do some computation task, like find largest
    // integer among 3 numbers. We have to store these numbers in memory. So we
    // have to use variable to store them into memory by a name. So later, we
    // call them by their names.

    // Variable
    // A variable is a container which stores a value of its data type.
    // It's just a named memory location.

    // When computer stores the variable, we have to use by their address in the
    // RAM. For that, We name the specific address where we have the value. So
    // we use the name of our variable and It'll know that we're talking about
    // that value.

    // In variable, we store constant.
    // The value of the variable can change throughout the program.
    // int a = 5;
    // // a = 5.
    // a = 55;
    // // Now a = 55.
    
    // But if we make a constant, we cannot change the value later.

    // How to store a variable?
    // We do declaration and initialization.
    
    // Declare a variable
    // Syntax is:
    // data_type name_of_variable;
    int var;
    char var2;
    float var3;
    // The size of the variable will depend on the data type.
    
    // Initializaion
    // Now we can initialize the value in variable.
    // // But make sure the variable should be declared first.
    var = 53;
    // Now 53 is assigned into that location.


    // We can also do declaration and initialization in single statement.
    int single_statement_variable = 53;
    // later on, we can change it.
    // // We're updating the value.
    single_statement_variable = 322;

    // We cannot declare a variable twice, {name}.
    // int single_statement_variable = 53; -> Error.

    int a = 'd'; // now it is storing ascii value of 'd'; not 'd'.
    char d = 'd'; // now it's storing 'd' as value.

    // Can can make many variable in a single statement of a data type.
    int i1 = 5, i2 = 32, i3 = 33; // valid


    // Type of the variable cannot be void.
    // void a; // error


    // There are some rules to declare a variable.
    // 1. Variables are case sensitive.
     int s = 5;
     int S = 22;
    //  // These are different.
    // 2. Variable name can start with character or _.
    int v1, _, _1; // -> valid
    // int 1c, #d,!3; // Invalid
    // 3. We can use _ between. Because should not be a space in name.
    int s1_ss;
    // int s1 ss; // invalid
    // 4. Keywords can not be used as variable name.
    // int char = 3;// error
    int char_33 = 332; // valid. Because now it's not char data type, but char_33. A separate word.
    



    return 0;
}
