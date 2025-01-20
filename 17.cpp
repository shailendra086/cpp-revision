#include <iostream>
using namespace std;

int main() {
  //  C Program to calculate the power without using POW function.
    int n; 
    cout << "Enter the base number" << endl;
    cin>>n;
    cout << "Enter the value of power " << endl;
    int a;
    cin>>a;
    int ans = 1;

    for (int i = 1 ; i<=a; i++){
        ans = ans*n;
    }
    cout << "Power is : " << ans << endl;
    return 0;
}