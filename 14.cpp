#include <iostream>
using namespace std;

int main() {
    //finding the perfect number
    cout << "Enter the value of n" << endl;
    int n;
    cin>> n;
    int sum = 0;
    for (int i = 1; i<n; i++){
        if(n % i == 0){
            sum +=i;
            
        }
    }
    if(sum == n){
        cout << n << " is perfect number" << endl;
    }
    else cout << n << " is not perfect number" << endl;
    return 0;
}