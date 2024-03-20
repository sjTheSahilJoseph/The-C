#include <stdio.h>

int main(int argc, char const* argv[]) {
    printf("Data Types\n");

    // In the context of 2 bytes integer
    // The range of signed and unsigned int.
    // -32768 - 32767 = signed int
    // 0 - 65535 = unsigned int
    // If it's 2 bytes, then the lowest it can be:
    // 00000000 00000000 -> 0
    // And highest it can be:
    // 11111111 11111111 -> 65535
    // If it is signed int.
    // Then we devide it by 2.
    // Half - and half +.
    // - side = 32768
    // + side = 32767
    // But why + side is 1 step lower?
    // Because we are also including 0 in positive integer.

    // Format Specifier circle.
    // For example:
    int a = 32767; // It'll store in signed int perfectly.
    int aa = 32768; // If this is the max range, then it'll be -32768.
    printf("%d\n", aa); // And if it's stored with - but we use %d so it'll print + stuff.
                        // But actually it's - value.
                        // It'll not give error, but the value is not what we want.
    printf("%u\n", aa); // It'll print unsigned format.

    // But if the range is big, like long int, etc...
    // That wont' be a problem.

    int dd = -10;
    printf("%d\n", dd); // it'll print + correct.
    printf("%u\n", dd);// it'll print reverse of the value to the circle.
                       // Means corrosponding to the circle, it'll go backwards to the max range.

    // But if we use + values, that wont be a problem.
    // If both have 0, both will print 0.

    return 0;
}
