#include <iostream>
using namespace std;
// to use strings, you may need an additional header in the source code <string> 
// visual studio code works without the additional header but added for notes purposes
# include <string>

int main() {
    // basic data types and size of information the variable will store
    cout << "bool: (boolean)true or false 1 byte"<< "\n";
    cout << "char: single character/letter/number or ASCII value 1 byte"<< "\n";
    cout << "int: whole number (without decimals) 2 or 4 bytes"<< "\n";
    cout << "float: fractional numbers (containing one or more decimals) sufficient for 6-7 decimal digits) 4 bytes"<< "\n";
    cout << "double: fractional numbers (containng one or more decimals) sufficient for storing 15 decimal digits 8 bytes"<< "\n";

    // the precision of a floating point value indicates how many digits a value can have after the decimal point. 
    // float has a precision of 6-7 digits
    float myFloatNum = 5.75;
    cout << myFloatNum << "\n";

    // double has a precision of about 15 digits so its safer for most calculations
    double myDoubleNum = 19.99999;
    cout << myDoubleNum << "\n";

    // floating point numbers can also be scientific numbers with an "e" to indiciate the power of 10
    float f1 = 35e3;
    double d1 = 12E4;
    cout << "Scientific numbers for float and double: "<< f1 << " and " << d1 << "\n";
    
    // boolean data type is declared with bool keyword and can only take true or false values
    // boolean values are mostly used for conditional testing
    // when the value is returned true = 1 false = 0
    bool isFun = true;
    bool isBoring = false;
    cout << "true: " << isFun <<" false: " << isBoring << "\n";

    // char data type is used to store a single character
    // the character must be surrounded by single quotes like 'A' or 'z'
    char myChar = 'B';
    cout << myChar << "\n";

    // alternatively, you can use ASCII values to display certain characters
    char a = 65, b = 66, c = 67;
    cout << a << " " << b << " " << c << "\n";

    // string data type is used to store a sequence of characters (text)
    // not a built-in type but behaves like it in its most basic usage. 
    // string values must be surrounded by double quotes
    string greeting = "hello!";
    cout << greeting << "\n";

    // the auto keyword automatically detects the type of a variable based on the 
    // value you assign to it. it helps write cleaner code and avoid repeating types, 
    // especially for long or complex types
    auto intVal  = 5; //int
    auto floatNum = 5.99; //float
    auto doubleNum = 9.98; //double
    auto myLetter = 'Z'; //char
    auto myBool = true; // bool
    auto myString = string("Hello"); // std:: string

    //! IMPORTANT: auto only works when you assign a value at the same time 
    // and once the type is chosen, it stays the same. 
    auto x = 5; // x is now an int
    x = 10;     // still an int
    //x = 9.99; this would throw an error - can't assign a double to an int
    

}