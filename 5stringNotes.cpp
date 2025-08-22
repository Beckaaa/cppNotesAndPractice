#include <iostream>
// when standard namespace not used, omit using namespace std;
using namespace std;
// may need to use # include <string> for the string library if it doesn't function


int main() {
    // use string data type to declare string variables
    // strings should be surrounded by double quotes
    string firstName = "John";
    string lastName = "Doe";

    // use + to concatenate strings and add them together
    string fullName1 = firstName + " " + lastName;
    cout << fullName1 << endl;
    // alternatively, use append() function to concatenate strings
    string fullName2 = firstName.append(" " + lastName);
    cout << fullName2 << endl;

    // to get the length of a string use the length() function
    string txt = "abcdefghij"; //length of 10
    cout << "The length of the txt string is: " << txt.length() << endl;

    // some c++ programs use size() function to get the length of a string
    // can use length or size interchangably-- stay consistent for code clarity
    cout << txt.size() << endl;

    // you can access characters in a string using its index number in square brackets []
    string myString = "Hello";
    cout << myString[0] << endl; // output is H

    // to print the last character of a string you can use string.length()-1 
    cout << myString[myString.length()-1] << endl; // outputs o

    // to change a specific character in a string, use the index number
    // and single quotes for the char
    myString[0] = 'J';
    cout << myString << endl; // outputs Jello

    // using #include <string> you can use the at() function to access characters
    cout << myString.at(1) << endl; // outputs e

    // use \ escape character to print backslash (\\) single quotes (\')and double quotes (\")
    string escapeCharInString = "backslash: \\ single quote: \' double quotes: \" new line: \n tab: \t escape characters";
    cout << escapeCharInString << endl;

    // used cin to store string entered by user
    // considers whitespace a terminating character so it only stores single word

    // string firstName1;
    // cout << "Type your first name: " << endl;
    // cin >> firstName1;
    // cout << "Your name is: " << firstName1 << endl;

    // use getline() to read a line of text, takes cin as first parameter
    // and string variable as second parameter 
    //ex. getline(cin, stringName); 

    //string yourFullName;
    //cout << "Type your full name: " << endl;
    //getline(cin, yourFullName);
    //cout << "Your full name is: " << yourFullName << endl;

    // some programs might not use the standard namespace library
    // when omitted, you can use std keyword and the :: operator for string and cout objects
    std::string greeting = "hello";
    std::cout << greeting << std::endl;

    // c++ supports c-style strings that are arrays of characters to make a "string"
    // a reason some users continue to use c-style strings is they have access to functions from the C standard library
    char greeting2[] = "hello2";
    cout << greeting2 << endl;
    return 0;
}
