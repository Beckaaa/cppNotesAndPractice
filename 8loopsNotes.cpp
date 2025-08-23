#include <iostream>
using namespace std;

int main(){
    // while loop- used to repeat a block of code while the condition is true
    // syntax
    // while (condition) {
        // code block to be executed
    //}
    int countdown = 3;
    while (countdown > 0) {
        cout << countdown << endl;
        countdown--;
    }
    cout << "Happy New Year!" << endl;

    // do/while loop- a variant of the while loop. 
    // This loop will execute the code block once, before checking if the condition is true
    // then it will repeat the loop as long as the condition is true
    // syntax
    // do {
        // code block to be executed
    //}
    // while (condition);
    // NOTE: the ; after the while condition is required
    // the loop will always be executed at least once even if the condition is false
    // because the code block is executed before the condition is tested

    // example where condition is true
    int i=0;
    do {
        cout << i << "\n";
        i++;
    }
    while (i < 5);

    // example where condition is false
    int j = 10;
    do {
        cout << "j is " << j << endl;
    }
    while (i < 5);

    // the do/while loop always executes at least once even if the condition is false
    // a regular while loop would skip the loop entirely if the condition is false from the start
    // do/while loops are useful when you want to ensure something happens at least once
    // like showing a message or asking for user input



    // for loop- use when you know exactly how many times you want to loop through 
    // a block of code. Syntax
    //for (statement 1; statement 2; statement 3) {
        // code block to be executed
    //}

    // statement 1: executed 1 time before the execution of the code block
    // statement 2: defines the condition for executing the code block
    // statement 3: executed every time after the code block has been executed

    // example: 
    for (int i= 0; i < 5; i++) {
        cout << i << endl;
    }

    // nested loop: loop inside of a loop
    // the inner loop will be executed one time for each iteration of the outer loop
    //example: 
    
    for (int i = 1; i <= 2; ++i) { 
        cout << "Outer: " << i << endl;// outer loop executes 2 times total
        for (int j = 1; j<= 3; ++j) { 
            cout << "Inner: " << j << endl; // inner loop executes 6 times (2 * 3) 
            //3 times is how many times the inner loop iterates each time the outer loop iterates (2 total) 
        }
    
    }

    // for-each loop (range-based for loop) used to loop through elements in an array or other data structures
    //syntax: 
    // for (type variableName : arrayName) {
        // code block to be executed
    //}

    // example outputs all elements in an array: 
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i : myNumbers) {
        cout << i << endl;
    }

    // example to loop through characters in a string
    string word = "Hello";
    for (char c : word) {
        cout << c << endl;
    }


    // break and continue statements: break jumps out of the loop, continue breaks one iteration
    // break can be used to jump out of a switch statement and also to jump out of a loop
    // example: jumps out of the loop when i is equal to 4
    for (int i=0; i< 10; i++) {
        if (i == 4) {
            break;
        }
        cout << i << endl;
    }

    // continue statement breaks one iteration if a specified condition occurs and continues with the next iteration
    // example
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            continue; // this continue makes the loop skip printing the value of 4 and continues through the rest of the values
        }
        cout << i << endl;
    }

    // can use break and continue in while loops as well
    int k = 0;
    while (k < 10) {
        cout << k << endl;
        k++;
        if (k == 4) {
           break; // exits loop
        }        
    }

    k = 0;
    while (k < 5) {
        if (k == 2) {
            k++;
           continue; // skips iteration after incrementing k 
        } 
        cout << k << endl;
        k++;       
    }

    return 0;
}