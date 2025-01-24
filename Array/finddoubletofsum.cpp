#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,4,-3,-2,12,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    cout<<"Enter the find doublet"<< endl;
    cin>>x;
    for(int i=0; i<n; i++){
        
        for(int j = i+1 ;j<n; i++){
            if(arr[i]+ arr[j] ==x)
            cout << "indexes is : " << i << " " << j <<endl; 
            break;
        }
    }
    return 0;
}