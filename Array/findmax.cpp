#include <iostream>
using namespace std;

int main() {
    int arr[] = {4,5,2,12,7,8,9,10,203};
    int mx = arr[0];
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 1; i<n;i++){
        if(mx < arr[i]){
            mx = arr[i];
        }
    }
    cout << "Maximum number is : " << mx << endl;
    return 0;
}