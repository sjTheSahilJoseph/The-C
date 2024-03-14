# include <stdio.h>

int main(int argc, char const* argv[]) {
    printf("Execution Process of a C Program\n");

    /*

       1. We write C language code using code editor.
            With .c extension.
        2. Pre-Processor
            Now pre-processor directives will have to sort out.
                # lines starting with this "#" are pre-processor statements.
            Compiler don't understand these.
            Pre-Processor will have to do them.
            Pre-Processor will replace all the lines starting from # into straight C code that are included in header files.
            Now our source code is expanded.
            Now it is code.i
        3. Compiler
            Now compiler have code.i file, (expanded code) [no # anymore]
            If syntax error, compiler will give a list of all errors and return to you.
            If no error, then it'll convert code.i into assembly code.
            Extension is .asm
        4. Assembler
            Then the assembler will convert the .asm file into machine code or object code.
            Extension = code.obj or code.o
            But that object file is not ready to execute.
        5. Linker
            Now the object file will go to linker.
            Linker will combine all the object files and code and link with system libraries.
            Now linker will return executable file.
            Extension = code.out or in windows code.exe or whatever.
            Now the file is ready to execute.
            But before it's execution, the file, and other stuff will have to load in main memory.
            So the CPU can execute it from RAM.
        6. Loader
            Loader will load the binary, executable file into the main memory.
            And now the execution will be done.
            If there is any runtime error, logical error, or something else.
            We have to edit the source code to fix.
            If no errors, we'll get the output.


        How many files are generated during the whole process?
            1. code.c
            2. code.i
            3. code.obj (here is 0101010...etc..)
            4. code.asm
            5. code.exe
     
    */

    return 0;
}
