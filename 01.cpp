#include <iostream>
using namespace std;


//Write a program to reverse an integer in C.
int main() {
    //first taking the input
    cout << "Enter your Number : " << endl;

    int n ; 
    cin >> n ;
    cout << "Your enterend number is : "<< n << endl;
    int reverse = 0;
    while (n !=0 ){
        int digit = n % 10 ;
        reverse = reverse *  10 + digit ;
        n = n /10;

    }
    cout << "The reverse Number is : " << reverse << endl;
    return 0;
}