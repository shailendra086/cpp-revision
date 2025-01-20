#include <iostream>
using namespace std;

int main() {
    //finding the average of number
    int a,b,c ; 
    cout << "Enter the three number to find average" << endl;
    cin>> a;
    cin>>b;
    cin>>c;
    float sum = a + b + c;
    float avg = sum / 3.0;
    cout << "The average is : " << avg << endl;
    return 0;
}