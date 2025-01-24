#include <iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the array size"<<endl;
    cin>>n;
    vector<int>arr(n,87);
    
    for(int i = 0; i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}