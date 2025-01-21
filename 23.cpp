#include <iostream>
using namespace std;

int main() {
    float p , r , t;
    cout << "Enter the principal amount " << endl;
    cin>>p;
    cout << "Enter the rate " << endl;
    cin>>r;
    cout << "Enter the time" <<endl;
    cin>>t;
    float si = (p*r*t)/100;
    cout << "Simple interest is : " << si << endl;
    return 0;
}