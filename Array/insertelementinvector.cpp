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
    int x;
    cout << "Enter the element you want to insert"<< endl;
    cin>>x;
    arr.push_back(x);
    cout << "After inserting the element"<<endl;
     for(int i = 0; i<=n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}