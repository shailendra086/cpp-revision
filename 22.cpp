#include <iostream>
using namespace std;

int main() {
    float f ;
    cout << "Enter the Fahrenheit  value" << endl;
    cin >> f;
    float c = (f-32)/1.8;
    cout << "Celcious is : " << c << endl;
    return 0;
}