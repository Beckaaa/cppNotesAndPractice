#include <iostream>
#include <cmath>
using namespace std;

int main(){
    // max(x,y) and min(x,y) can be used to find max and min values
    cout <<"max val: "<< max(5,10) << endl;
    cout <<"min val: "<< min(5,10) << endl;

    // cmath also supports other functions like rounding, square root, natural logarithms
    cout <<"sqrt of 64: "<< sqrt(64) << endl;
    // rounds to the nearest integer
    cout <<"round 2.6: "<< round(2.6) << endl;
    cout <<"log: "<< log(8) << endl;
    return 0;
}