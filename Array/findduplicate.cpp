#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,4,-3,2,12,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool flag = false;
    for(int i=0; i<n; i++){
        
        for(int j = i+1 ;j<n; i++){
            if(arr[i] == arr[j] ){
                flag  = true;
                break;
            }
           
        }
    }
    if(flag){
        cout << "contain duplicate"<<endl;
    }
    else cout << "not duplicate" << endl;
    return 0;
}