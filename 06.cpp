#include <iostream>
using namespace std;

int main() {
    //C Program to calculate factorial using iterative method.
    int n ; 
    cout << "Enter the number : " << endl;
    cin >> n;
    //calculating factorial 
    int fact = 1;

    while(n!=1){
        fact *=n;
        n--;
    }
    cout <<"Factorial is :" << fact << endl;
    return 0;
}