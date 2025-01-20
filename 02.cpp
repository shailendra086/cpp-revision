#include <iostream>
using namespace std;

//Write a program in C to check given number is prime or not.
int main() {
    cout << "Enter the Number : "<< endl;
    int n ;
    cin >> n;
    //for checking prime it can divisible by itself or 1
    int cnt = 0;
    for (int i = 2 ; i < n; i++){
        if(n%i == 0){
            cnt++;
            break;
            
        }
        
        
    }
    if(cnt == 0) cout << n << " is prime" << endl;
    else cout << n << " is not prime" << endl;
    
    return 0;
}