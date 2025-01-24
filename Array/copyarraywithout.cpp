#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,4,-3,2,12,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    int j = n-1;
    while(i<j){
        swap(arr[i] , arr[j]);
        i++;
        j--;
    }
    cout << "After reversing the array"<< endl;
    for(int i = 0 ; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}