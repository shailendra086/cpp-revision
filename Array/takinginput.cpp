#include <iostream>
using namespace std;

int main() {
    //taking the input size of array
    cout << "Enter the size of Array" << endl;
    int n;
    cin>>n;
    int arr[100];
    cout<< "Enter the Element in the array"<< endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout << "Entered Array is" << endl;

    for(int i = 0 ; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}