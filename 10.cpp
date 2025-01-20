#include <iostream>
using namespace std;

int main() {
    //Write a program in C to check whether a number is palindrome or not using iteration.
    cout << "Enter the value of n" << endl;
    int n;
    cin>> n;
    int z = n;
    int palindrome = 0;
    while(n!=0){
        int reminder = n %10;
        palindrome = palindrome*10 + reminder;
        n /=10;
    }

    if(z == palindrome) cout << "This is the Palindrome " << endl;
    else cout << "Not palindrome" << endl;
    return 0;
}