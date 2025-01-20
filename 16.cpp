#include <iostream>
#include<math.h>
using namespace std;

int main() {
    // C program to calculate the power using the POW method.
    int n; 
    cout << "Enter the base number" << endl;
    cin>>n;
    cout << "Enter the value of power " << endl;
    int a;
    cin>>a;
    int ans = pow(n , a);
    cout << "Answer is : "<< ans << endl;
    return 0;
}