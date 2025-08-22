#include <iostream>
using namespace std;

int main() {
    // if statement to execute code block if specified condition is true
    // else statement to execute code block if the same condition is false
    // else if to specify a new condition to test if the first condition is false
    // switch to specify many alternative blocks of code to be executed

    //syntax for if/else 
    // if (condition) {
        //block to execute if condition is true
    //}
    // else {
        // block to execute if condition is false
    //}

    // if example:
    int x = 20, y = 18;
    // any comparison operators can be used as part of if condition < > == != >= <=
    if (x>y) {
        cout << "x is greater than y" << endl;
    }

    // if/else example: 
    int time = 20;
     if (time < 18) {
        cout << "Good day." << endl;
     }
     else {
        cout << "Good evening." << endl;
     }


    // if (condition1) {
    //   // block of code to be executed if condition1 is true
    // } else if (condition2) {
    //   // block of code to be executed if the condition1 is false and condition2 is true
    // } else {
    //   // block of code to be executed if the condition1 is false and condition2 is false
    // }
     int time2 = 22;
     if (time2 < 10) {
        cout << "Good morning." << endl;
     }
     // you can specify multiple else if statements when needed
     else if (time2< 20) {
        cout << "Good day." << endl;
     }
     else {
        cout << "Good evening." << endl;
     }

     // ternary operator-- short-hand if else. it consists of 3 operands
     // ternary operator usage syntax
     // variable = (condition) ? expressionTrue : expressionFalse;
     // can be understood as: if (time < 18) {cout good day} else {cout good evening}
     auto time3 = 15;
     string result = (time3 < 18) ? "Good day." : "Good Evening.";
     cout << result << endl;

     int num = 7;
     string evenOdd = (num % 2 == 0) ? "even" : "odd";
     cout << evenOdd << endl;


     // switch statement syntax:
     // switch (expression) {
        //case x: 
            //code block
            //break;
        //case y: 
            //code block
            //break;
        //default:
            // code block   
     //}
     int day;
     cout << "Pick a number for a day of the week between 1 and 7: " << endl;
     cin >> day;
     switch (day) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
        // the default keyword specifies what code to run if there is no case match    
        default: 
            cout << "Invalid number";
     }

     
     // how switch statements work: 
     // switch expression is evaluated once
     // the value of the expression is compared with the values of each case
     // if there is a match, the associated block of code is executed
     // the break and default keywords are optional

     // when a break keyword is reached, it breaks out of the switch block
     // this will stop the execution of more code and case testing inside the block
     // when a match is found, and the job is done it's time for a break- no need for more testing.
     // a break can save a lot of execution time because it ignores the execution of the rest of the code in the switch block

    return 0;
}