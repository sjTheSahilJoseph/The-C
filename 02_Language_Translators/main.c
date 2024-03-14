# include <stdio.h>

int main(int argc, char const* argv[]) {
    printf("Language Translators\n");

    // We have to write our code in programming language.
    // Then the code will be converted into the machine code.
    // Then it'll run.

    // There are 3 translators to do that.
        // 1. Assembler
        // 2. Compiler
        // 3. Interpreter

    // Assembler
    // Assembler is a program which is used to convert/translate assembly code into machine code.
    // Assembler converts assembly lanuage code into machine code.

    // For converting other lanauges, high level languages into machine code.
    // Two programs are there.
    // 1. Compiler
    // 2. Interpreter

    // Compiler vs Interpreter
    // Both are used to convert high level code into machine code.
    // But compiler converts before the execution.
    // It converts all the code at once.
    // Interpreter converts while the program is executed.
    // Line by line.

    // Compiling
    // Compiling will work in 3 steps.
    // Compiling -> Linking -> Loading
    // Generates a binary, to run.
    // It is fast.
    // It'll give a list of all errors, but keeps trying.
    // Once compiled, no need of source code to run.

    // Interpreter
    // It'll take one line by line.
    // Interpreter will not do linking and loading.
    // No separate file (object code) will be created.
    // It is slower.
    // It'll give you error and stop there, no more going forward.
    // Source code is needed every time in order to run.

    
    return 0;
}
