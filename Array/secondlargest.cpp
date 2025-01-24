#include <iostream>
#include<limits.h>
using namespace std;

int main() {
    int arr[] = {4,5,2,12,7,8,9,10,203};

    int n = sizeof(arr)/sizeof(arr[0]);
    //find second max
    int  mx =INT_MIN;
    int  smx =INT_MIN;
    for(int i = 0; i<n; i++){
        if(mx<arr[i]) mx = arr[i];
    }
    for(int i = 0; i<n; i++){
        if(smx<arr[i] && arr[i] != mx) smx = arr[i];
    }

    cout << "Second largest Element " << smx << endl;
    
    return 0;
}