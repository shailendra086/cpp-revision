#include <iostream>
using namespace std;

int main() {
     int a, b;
    cout << "Enter the value of a and b" << endl;
    cin >> a >> b;

    int res = min(a,b);
    while(res>1){
        if(a%res == 0 && b %res == 0) break;
        res--;
    }
    cout << "The gcd is : " << res << endl;
    return 0;
}