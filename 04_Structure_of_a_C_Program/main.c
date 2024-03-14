# include <stdio.h>

int main(int argc, char const* argv[]) {
    printf("Structure of a C Program\n");

    /*
        C Program Structure
        1. Documentation Section
            Comments -> Author or the program, date, brief description, etc...
        2. Link Section
            Header files, 
                // # include <file.h> | "custom_file.h";
                // // The linker will link all the header files, into your program.
        3. Definition Section
            // This section defines all the symbolic constants.
            // // For example, If we have to use value of PI 10 times,
            // we can define PI as #define PI 3.14;
            // And then use PI.
        4. Global Declaration Section
            // For global stuff.
            // For example, global variable.
            // We can use and modify it anywhere in our program.
            // And also, all the user defined functions will be in this section.
        5. Main section
            // Main function is the starting point of a C program.
            // In a program there should be only one main function.
            // Always the control will go to the main function, when we execute the program.
            int main() {
             // it has 2 parts.
             // 1. declaration part
             //     // here we declare variables.
             //     int a = 5;
             //     int b = 5;
             // 2. execution part
             //     // logic part
             // printf("%d", a);
        6. Sub program section
            In this section, we include all the user defined functions.
            We can define our functions here.
            But use function prototyping.

                return 0; // This is important, main will return 0 to the os;
            }
    */


    return 0;
}
