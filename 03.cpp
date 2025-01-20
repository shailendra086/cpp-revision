#include <iostream>
#include<math.h>
using namespace std;

//Write a program in C to check whether an integer is Armstrong number or not.
int main() {
    cout << "Enter the Number : "<< endl;
    int n ;
    cin >> n;
    int copyn = n;
    int isArm = 0;

    while(n !=0){
        int digit = n % 10;
        isArm = isArm + digit*digit * digit;
        n= n/10;
    }
    if(isArm == copyn){
        cout << copyn << " is armstrong Number" << endl;
    } 
    else{
        cout << copyn << " is not a armstrong number" << endl;
    } 
    return 0;
}