#include <iostream>
using namespace std;

int main() {
    int arr[] = {4,5,2,12,7,8,9,10,203};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Enter the element to count greater"<< endl;
    int count = 0;
    int x ;
    cin>>x;
    for(int i = 0; i<n; i++){
        if(arr[i]>x) count++;

    }
    cout << "Total Greater element is : " << count << endl;
    return 0;
}