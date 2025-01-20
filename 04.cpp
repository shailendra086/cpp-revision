#include <iostream>
using namespace std;
//Write a program in C to swap two numbers using third variable.
int main() {
    int a = 10; 
    int b = 20;
    int  c ;
    //swaping the value 

     c = a;
    a = b;
    b = c;

    // after swaping we are print
    cout << "value of a is : " << a << endl;
    cout << "value of b is : " << b << endl;
    return 0;
}