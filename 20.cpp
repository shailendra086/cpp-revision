#include <iostream>
using namespace std;

int main() {
    // C Program to check the given year is a leap year or not.
    int year ;
    cout << "Enter the Year" << endl;
    cin >> year;
    if(year % 400 == 0){
        cout << "This is the leap year" << endl;
    }
    else if (year % 100 == 0){
        cout << "Not leap year" << endl;
    }
    else if (year % 4 == 0){
        cout << "Leap year "<< endl;
    }
    else cout << "Not a leap year" << endl;
    return 0;
}