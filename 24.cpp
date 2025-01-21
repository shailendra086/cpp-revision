#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout << "Enter the number a and b for addition" << endl;
    cin>>a;
    cin>>b;

    while(b!=0){

        int carry = (a&b)<<1;
        a = a^b;
        b = carry;

    }
    cout << "Adition of two number is : " << a << endl;
    return 0;
}