//! C++ is case sensitive

#include <iostream>
//this is a header file library that lets us work with input and output objects
//header files add functionality to c++ programs#include <iostream>
using namespace std;
//this means we can use names for objects and variables from the standard library

//int main() is a function that executes code in braces
int main() {
    //object used with the insertion operator (<<) to output/print text. 
    //case sensitive note: cout and Cout have different meanings
    //every statement ends in a semicolon
    // does not insert a new line at end of the output
    cout << "Hello World! ";

    // the using namespace std line can be omitted and replaced with keyword std followed by the "::" operator for some objects
    std::cout << "Hello World!2 \n";
    //"return 0;" ends the main 
    
    //you dont need quotes to print numbers quotes needed for text though
    cout << 3 <<"\n";
    // can also do math equations
    cout << 2*5 <<"\n";

    // new line character \n 
    // you can put a new line in the quotes
    cout << "Hello world! \n";

    // you can do another operator << and put the new line after the text like this
    cout << "Hello world!2" <<"\n";

    // 2 \n after each other to create a blank line between 
    cout <<"Hello" <<"\n\n";
    cout <<"world \n";

    // another way to do a new line is to use the endl (lower case L) manipulator
    cout << "hello world" << endl;
    cout << "line2" << endl;

    // \n is most used for new line being an escape sequence
    // other valid escape sequences are \\ for backslash \" for double quote \t creates tab
    cout << "\t Tabbed statement \n";
    cout << "\\ backslash first \n";
    cout << "\"double quotes\"" << "\n";

    // c++ comments can be inline with a statement using "//" 
    // multi line statement starts with /* */

    /*
    example
    of 
    multiline
    comment
    */
    


    return 0;
    
}

