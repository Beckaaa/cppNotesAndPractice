#include <iostream>
using namespace std;

int main(){

    //cin used to get user data
    //it reads data from the keyboard with the extraction operator (>>)
    int x;
    cout << "Type a number: ";
    cin >> x;
    cout << "Your number is: " << x << endl;

    // simple two input calculator
    int y, z;
    int sum;
    cout << "Type a number: ";
    cin >> y;
    cout << "Type another number: ";
    cin >> z;
    sum = y + z;
    cout << "The sum is: " << sum;

}