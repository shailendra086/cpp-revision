#include <iostream>
using namespace std;

int main() {
    //Write a program in C make a calculator using switch case

    int a , b;
    cout << "Enter value of a" << endl;
    cin>>a;
    cout << "Enter value of b" << endl;
    cin>>b;
    int n;
    cout << "Enter 1 for addition"<<endl;
    cout << "Enter 2 for substraction"<<endl;
    cout << "Enter 3 for multiply"<<endl;
    cout << "Enter 4 for division"<<endl;
    cin>>n;
    switch(n){
        case 1: cout << "Addition is : " <<a + b << endl;
        break;
        case 2: cout << "Substraction is :" << a - b << endl;
        break;
        case 3 : cout << "Muliplication is " << a * b << endl;
        break;
        case 4 : cout << "Division is : " << a / b << endl;
        break;
        default : cout << "Wrong input entered" << endl;
    }

    return 0;
}