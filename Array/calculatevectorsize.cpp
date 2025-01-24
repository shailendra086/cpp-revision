#include <iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the array size"<<endl;
    cin>>n;
    vector<int>arr(n,8);
   
    for(int i = 0; i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "The size of the array is :"<< endl;
    cout << arr.size()<< endl;

    return 0;
}