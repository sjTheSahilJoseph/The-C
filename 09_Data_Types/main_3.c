# include <stdio.h>

int main(int argc, char const* argv[]) {
    printf("Data Types 3\n");

    // Character Data Type


    // For Character, the format specifier is %c.

    /*
       We represent character data type with char keyword.
       We have 2 type of characters, signed and unsigned.
       For Signed character, the format specifier is %c.
       The range of sigend is -128 - 127.
       The range of Unsigned is 0 - 255.
       Character will take 1 byte of memory.
       Means 8 bits.

       Mininum is 00000000.
       Maximum is 11111111.

       0 = Minumum.
       xxxxxxxx = 1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 = 255.

       Total we can store is 256.

       This is for unsigned, because we have only positive values.


       Now for signed, half values will be of - and half for +.

       If we devide 256/2 = 128.
       So from -128 to +127. 0 Included as positive.

       Same we can store 256 values in signed.

    */

    // For storing characters, every character, special character, etc...
    // We use character system.
    // There are many character systems. But we use ASCII here normally.
    // Which is Americal Standard Code for Information Interchange.
    
    // It is used to represent the characters into numbers.
    // We have codes for every alphabet.
    // For example, for a, the ASCII is 97.
    // b = 98.
    // A = 65.
    
    // That's why when we print character using %d, we get ascii code of that character.
    // And also if we print 97 as %c, we'll get character.

    printf("%d\n", 'a');
    printf("%c\n", 97);

    // '0', '@', etc.. as character has also its own ASCII values.


    // Characters will first converted into ASCII, then the ASCII will be converted into 0,1, and then store in memory.

    // By default char is signed.

    char b = 33; // Now it'll have the corosponding value of signed char 33 ASCII.
    printf("%c\n", b); // !


    // Circle rule Signed char
    char bb = 130;
    // Now, it'll not give error, but go after -128 and land on -126 because it's counting from 0.
    // Now, bb = -126. Which is valid.
    printf("%c\n", bb); // Now it'll print any garbage symbol. Maped to -126. In Signed Char circle.

    // Circle rule Unsigned char
    unsigned char bbb = -130;
    // Now, it'll not give error, but go after 255 and land on -130->126 because it's counting from 0.
    // Now, bb = 126. Which is valid.
    printf("%c\n", bbb); // Now it'll print any garbage symbol. Maped to 126. In Signed Char circle.
                         // // Printing ~
    printf("%d\n", bbb); // 126
    // %d is for singed integer.
    // // It'll go to the circle. check for if there is 126, if yes, then print 126.
    // // but if we refer unsigned circle. Same stuff,
    printf("%u\n", bbb); // 126
    // Both will print 126.

    // Experiment
    unsigned char ddd = -129;
    printf("%c\n", ddd); // Blank
    printf("%d\n", ddd); // 127
    printf("%u\n", ddd); // 127






    return 0;
}
