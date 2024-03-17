# include <stdio.h>

int main(int argc, char const* argv[]) {
    printf("Data Types\n");

    /*
       In order to store some value in RAM, Memory.
       We have to take some space for that.
       For this, we have to specifiy in the RAM that how much space?
       A data type is basically type of the value which we want to store in RAM.
       If it's int, we have to specify and then it'll take 4 bytes.
       If it's char, we have to tell that it's a char. Then it'll take 1 byte.

       There are 3 types of data types.
        1. Primary data types.
        2. Derived data types.
        3. User defined data types.

        1. Primary Data Types.
        // These are basic or fundamental data types.
            int
            float
            char
            void
            double

        // C has no booleans, we use 0 for false, and 1 for true.

        2. Derived Data Types.
        // These are derived from primary data types.
            Arrays
            Structures
            Unions
            Pointers

        3. User Defined Data Types.
            Typedef
            Enumurated Data Types

            // Typedef is basically we can name other data types.

    */

    typedef int my_INT;
    my_INT a = 5; // valid
    
    /*
       Int
        Int is also categorized in 2 types.
        1. Short int
        2. Long int
        short and long are size modifiers.
        And also we have 2 sign modifiers.
        Signed
        Unsigned

        int stands for integer.
        int a = 5;
        
        What's the range of integer?
        That's depends on the computer we're using.
        Like if it's 16 bit, 32 bit or 64 bit, etc...

        On a 16 bit machine, the range of integer is -32768 - 32767.
        And for unsigned 0 - 65535.
        This is for signed integer.
        By default int is signed integer.

        Signed means we can put +-.
        Unsigned means only +.

        On a 32 bit machine,
        the range would be -2147483648 - 2147483647.

        Generally integer will take 4 bytes. but it'll depend on the machine.

        To know the size of a variable, we can use "sizeof" function.
        It's a predefined function.

    */

    printf("%lu\n", sizeof(int));
    // For my computer, it's saying 4.


    /*
        If I have to store just 1.
        Then I don't need much space.
        So we can use short and long int as per the requirements.
    */
    short int aa = 3; // valid
    long int aaa = 323232; // valid
    short asss = 3; // valid
    long bsss = 322342; // valid
            // same.

    unsigned int bb = 3;
    unsigned short int b = 32;
    // unsigned short short bbb = 32; // invalid
    signed int csd = 223;
    signed long int dsafds = 32432;

    // The format specifier for int is "%d".
    // signed short int %hi
    // unsigned short int %hu

    // Working same.
    printf("%d\n", b);
    printf("%hi\n", b);
    printf("%hu\n", b);

    /*
       Character
       Character means single character 'c'.

    */
    char char_1 = 'a';
    printf("%lu\n", sizeof(char));
    // 1

    // Characters are also signed and unsigned.
    // Both will take 1 byte.
    // By default, it's signed.
    // The range of singed character is -128 - 127.
    // For unsigned 0 - 255.

    // Format specifier is "%c".
    
    // ASCII stuff.
    printf("%c\n", 100);
    // It'll print the character at this ASCII.
    // 'd'.

    // Float
    // Float is fractional values.
    // Flaots are 4 bytes.
    printf("%lu\n", sizeof(float));

    // Float range is -3.4e38 to +3.4e38
    float float_1 = 5.2;
    float float_2 = 10.0; // this is not equal to 10.
                          // This is 10.0.
    // Format specifier "%f".
    printf("%f\n", float_2);
    // 10.000000
    // Float will take 6 digit precision.

    // Float has some classes.
    // 1. Long Double
    // 2. Double

    // Double
    // Double will take 8 bytes.
    printf("%lu\n", sizeof(double));

    // Long double
    // Long double will take 16 bytes.
    printf("%lu\n", sizeof(long double));

    // float range < double < Long double.

    // Format specifier.
    // We use %lf -> double
    // %Lf -> long double
    
    // In double, we have 14 digit precision.

    // Void
    // Void means empty, nothing.
    // We can't declare a variable of void.
    // We use void in functions primarily.

    return 0;
}
