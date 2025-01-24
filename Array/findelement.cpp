#include <iostream>
using namespace std;

int main() {
    int arr[] = {4,5,2,12,7,8,9,10,23};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x ;
    cout << "Enter the target"<< endl;
    cin>>x;

    for(int i = 0; i<n; i++){
        if(arr[i] == x){
            cout << x << " is present";
        }
        
    }
    cout << "Not Present"<< endl;
    return 0;
}