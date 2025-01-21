#include <iostream>
using namespace std;

int main() {
    //C Program to find Smallest number among three.
    int a,b,c;
    cout << "Enter the number a , b , c" << endl;
    cin>>a ;
    cin>>b;
    cin>>c;

    if(a<b && a < c){
        cout << "a is smallest"<< endl;
    }
    else if (b<a && b < c){
        cout << "b is smallest" << endl;
    }
    else if (c<a && c < b){
        cout << "c is smallest" << endl;
    }
    else cout <<"all number is equal" << endl;
    return 0;
}