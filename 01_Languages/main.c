# include <stdio.h>

int main(int argc, char const* argv[]) {
    printf("Languages\n");

    // Languages
    // There are primarily 2 types of programming languages.
    //  1. Low Level
    //  2. Highl Level

    // 1. Low Level Languages
    // There are 2 types of Low Level Language.
    //  1. Machine Language
    //  2. Assembly Language

    // 1.1 Machine Language
    // It is machine oriented.
    // We can write machine language.
    // Machine language is very close to the hardware.
    // That's why it's called low level.
    // Machine language is basically coding in binary.
    // When we code in machine language, it is dependant to the machine architecture.
    // Basically CPU to CPU.
    // The benefit is that it is fast. Ultra fast.
    // But the drawback is that it is not readable for humans.

    // 1.2 Assembly Language
    // In this, we can use other things than 0,1 (binary).
    // Symbols, Numbers, Characters, etc... These are called Mnemonics.
    // Now the thing is that it is human readable.
    // We can learn to code. And create our program, it'll convert into machine code.
    // The CPU will run that, and all good.
    // But still, it is a very low level language.
    // Basically, Hardware -> Machine Language -> Assembly Language.
    // But more power.
    
    // Assembler
    // When we code in assembly, we have to convert our program into machine language.
    // This is done by a assembler.

    // The points of Assembly
    // Assembly code is dependant on Machine to Machine architecture.
    // Which means it is not a very portable.

    // 2. High Level Languages
    // These are portable.
    // High Languages are for example [C, C++, Java, Python, etc...].
    // But these might vary from Operating system to Operating System.
    // Like a program written in C for Windows, may not work for Linux.
    // We have to make some changes. According to the logic and architecture.
    
    // High Level Name
    // Why this is called high level language?
    // Because it is close to humans, we can read, write.
    // Basically, Hardware -> Machine Language -> Assembly Language -> High Level Language

    // High Level
    // Instead of dealing with deep low level things such as Registers, Binary, etc...
    // We have to deal with variables, functions, loops, etc...
    // We can write mathematial expressions, notations, etc...
    // But the thing is, it has to be conveted into machine language to run.
    // We can do that using a compiler and interpreter.

    // Compiler
    // Compiler converts all the code into the machine code.

    // Interpreter
    // It'll not convert all the code inot machine code at once.
    // It'll run line by line.
    return 0;
}
