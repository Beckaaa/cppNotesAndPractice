#include <iostream>
using namespace std;

int main() {
    // if statement to execute code block if specified condition is true
    // else statement to execute code block if the same condition is false
    // else if to specify a new condition to test if the first condition is false
    // switch to specify many alternative blocks of code to be executed

    //syntax
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

    // if else example: 
    int time = 20;
     if (time < 18) {
        cout << "Good day." << endl;
     }
     else {
        cout << "Good evening." << endl;
     }


    return 0;
}