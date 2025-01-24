#include <iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main() {
   
    vector<int> arr(10);
   
    for(int i = 0; i<arr.size();i++){
        cin >> arr[i];
    }


    for(int i = 0; i<arr.size();i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    sort(arr.begin(),arr.end());
    cout << "After sort the array"<< endl;
    for(int i =0; i<arr.size();i++){
        cout << arr[i]<< " ";
    }

    return 0;
}