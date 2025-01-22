#include <iostream>
using namespace std;

int main() {
    //Write a program in Cpp to check if a number is binary.
    int num;
    cout << "Enter the binary number to check" << endl;
    cin>>num;
    bool isbinary = false;
    while(num!=0){
        int digit = num%10;
        if(digit == 0 || digit == 1){
            isbinary = true;
        }
        else {
            isbinary = false ;
            break;
        }

        num = num/10;
    }
    if(isbinary){
        cout << "This is the binary"<<endl;

    }
    else cout << "This is the not binary" << endl;
    return 0;
}