/* to declare a variable specify type and assign a value
 Syntax sample: type variableName = value;
 Variable Types:
    int- integers (whole numbers like 123 or -123)
    double- floating point numbers (with decimals such as 19.99 or -19.99)
    char- single characters such as 'a' or 'B'. char values are surrounded by single quotes
    string- stores text such as "Hello World". string values are surrounded by double quotes
    bool- boolean values (true or false)
*/
#include <iostream>
using namespace std;
int main() {
    // equal sign assigns value to variable
    int myNum = 15;
    cout << myNum << "\t";

    // can assign value of variable after its declared
    int myNum2;
    myNum2 = 10;
    cout << myNum2 << "\t";

    //can change variable value, note it will overwrite the previous value
    myNum = 20;
    cout << myNum <<"\n";

    // other data types sample
    int myNum3 = 5;               // Integer (whole number without decimals)
    double myFloatNum = 5.99;    // Floating point number (with decimals)
    char myLetter = 'D';         // Character
    string myText = "Hello";     // String (text)
    bool myBoolean = true;       // Boolean (true or false)

    // cout is used with << operator to display variables
    // to combine text and a variable separate them with the << operator
    cout << "True statement (returns 1 if true 0 if false): " << myBoolean << " double: " << myFloatNum << " char: " << myLetter << "\n";
    
    // add variables with + 
    int x = 5;
    int y = 6;
    int sum = x + y;
    cout << sum << "\n";
    
    // declare multiple variables of the same type by using a comma-separated list
    int x1 = 5, y1 = 6, z1 = 50;
    cout << x1 + y1 + z1 << "\n";

    //can assign the same value to multiple variables in one line using syntax structure x=y=z=value
    int x2, y2, z2;
    x2 = y2 =z2 = 50;
    cout << x2 << " "<< y2 << " "<< z2 << "\n";

    /* all variables must be identified with unique names known as identifiers.
    identifiers can be short like x or y or descriptive such as age, totalValue
    Its recommended to use descriptive names for code readability so it is 
    easy to understand and maintain.
    
    The general rule for naming variables are:
        Names can contain letters, digits, underscores
        Names must begin with a letter or underscore (_)
        Names are case-sensitive (myvar and myVar are different variables)
        Names cannot contain whitespaces or special characters like !,#,%, etc.
        reserved words (like C++ keywords, such as int) cannot be used as names
    */

    /* when you dont want others or yourself to change existing variable values,
    use the const keyword to declare the variable as constant 
    which means unchangable and read only
    you should always declare the variable as constant when you have values that
    are unlikely to change
    */
   const int myNum4 = 20;

   // when you declare a constant variable, it must be assigned with a value
   const int minutesPerHour = 60;
   
   // this would not work and thow an error: 
   //const int minutesPerHour;
   //minutesPerHour = 60;

    return 0;
}