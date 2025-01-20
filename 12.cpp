#include <iostream>
using namespace std;

int main() {
    //Write a program in C to find greatest among three integers.

    int a , b , c;
    cout << "Enter the value of a , b , c" << endl;
    cin >> a ;
    cin>> b;
    cin>>c;

    if(a > b && a > c){
        cout << a << "is greater than b and c"<< endl;
    }
    else if (b > a && b > c){
        cout << b << " is greater than a and c"<< endl;
    }
    else if (c > a && c > b){
        cout << c << " is greater than a and b" << endl;
    }
    else cout << "all number are equal" << endl;
    return 0;
}