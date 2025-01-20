#include <iostream>
using namespace std;

int main() {
    //Write a program in C to print the Fibonacci series using iteration.
    int n ; 
    cout << "Enter the how many you want to fibonacci series" << endl;
    cin>> n;
    int a = 0;
    int b = 1;
    cout << a << " " << b <<" " ;

    for (int i = 2 ; i<n ; i++){
        int nextterm = a + b ; 
        cout << nextterm << " ";
        a = b;
        b = nextterm;
    }
    return 0;
}