#include <stdio.h>

// Generally we write here capital letters.
#define c 335;
#define b 'd'
// We use Capitals just to distuigish the differece between normal variables and these constants.
// Semicolon is optional.
// Because #define is a preprocessor directive, not a statement or declaration as defined by the C grammer.
// Semicolon is totally optional.
// // We cannot use = here. Just valuename and then value.
// // There should not be any space beetween #define (# define), or any preprocessor directive.
// But I would preffer to not use semicolon here. and using capitals, and no space #thing.

int main(int argc, char const* argv[]) {
    printf("Constants in C\n");

    // Constants are fixed values.
    // They cannot be change throught the program, during execution of program.
    // The values are fixed.
    // Compiler will now the value of a constant during compile time.

    // Symbolic Constant
    // We declare and iniialize constants at one statement.
    // Using # define name value

    // We have 2 types of constants in C
    // 1. Numeric Constants
    //  1.1 Integer
    //  1.2 Floating Real Constants
    // 2. Character Constants
    //  2.1 Single Character Constant
    //  2.2 String Constant

    // Integer Constants
    // These are having decimal values.
    // 1, 2, 3, 4, 5 = valid decimal constants
    // 05, 02, = are not valid octal constants
    // 05 = Octal constants because it's value starts with 0.

    // Integer Constants types
    // We have 3 types of Integer Constants
    // 1. Decimal
    //  // Decimal means, we can use from 0-9. Base is 10.
    // 2. Octal
    //  // Octal Constant means, from 0-7. Base is 8.
    // 3. HexaDecimal
    //  We can use 0-50, base is 60.

    // Constants are also called Literals.
    
    // By default we represent integer constants in decimal.


    // HexaDecimal
    // We use 0x, 0X, at the beginning of a value.
    // In Hexa decimal, we use numbers from 0-9 and a-f characters.
    // 0-50 is range but later we use a-f characters
    // 0-9 after that we use a-f. a = 10, b = 11, etc..
    //


    // We cannot use any , between numbers.
    // 123 = valid
    // 1,23 = invalid
    // By default + is the sign, but we can use -.


    // Real Constants
    // These are also known as floating point constants.
    // These are having fractional part.
    // For example: 12.52, 11.2, etc...
    // We can use -+.
    // There cannot be 2 or more decimal points.
    // We can also write in exponential stuff.
    // Exponent is always constant.

    // Character Constants
    // We write character using '' this.
    // There should only be single character.
    // For example: '1', 'b', 'c', '\n' -> also valid.
    // '\n', '\0', etc.. these are backslash character constants, with different meanings.
    // ',', '#' also valid.
    // These are stored in the form of ASCII code.
    // Remember, '1' is not equal to 1. Because of the data type.
    // Every ASCII character has an integer value.
    // We can perform arithmetic operations

    // String Constants
    // String constants are sequence of characters.
    // These are in "".
    // For Example:
    //  "hello", "hi", "323", "323#@", etc...
    //  "a" -> String constant
    //  'a' -> Single Character Constant.
    //  These are not equal.
    //  Because of ASCII value.

    // When compiler see a string constant, it'll store the address of the first character, and append a null character '\0' at the end.
    // Just to mark, the end.
    // Length of the string would be lenght+null.
    // If "hello" -> 6 = length.

    // Declare constants
    // We use const keyword.
    const int a = 55;
    // a = 55; // error

    // Or we can use #define name value
    // At the top of the main function.

    return 0;
}
