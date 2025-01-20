#include <iostream>
using namespace std;
//Write a program in C to swap two numbers without using third variable.
int main() {
    int a = 5; 
    int b = 10;

    //swaping the value without variable 
    b = a+b; // b = 15
    a = b -a;  // 15-5 = 10
    b = b - a;    // 15-10 = 5

    cout << " a is : "<< a << endl;
    cout << " b is : " << b << endl;
    return 0;
}