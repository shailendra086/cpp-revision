#include <iostream>
using namespace std;

bool isPrime(int n){
    for (int i = 2 ; i<n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    //C Program to print Prime Number in a given range
    int l , h;
    cout << "Enter the Range to check prime number"<< endl;
    cin>>l;
    cin>>h;

    for(int i = l; i<=h ;i++){
        if(isPrime(i)){
            cout << i << " ";
           

        }
       
        
    }   
    return 0;
}