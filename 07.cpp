#include <iostream>
using namespace std;

int main() {
    //C Program to check a given number is even or odd.
    cout << "Enter the value of n" << endl;
    int n;
    cin>> n;
    
    if(n % 2 == 0){
        cout << "Even Number " << endl;
    }
    else cout << "Odd number" << endl;
    return 0;
}