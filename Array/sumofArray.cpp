#include <iostream>
using namespace std;

int main() {
    int arr[10];
    cout<<"Enter the Element in the array"<<endl;
    int sum = 0;
    for(int i = 0; i<10; i++){
        cin>>arr[i];
    }
    cout << "The sum of Array is"<<endl;
    for(int i = 0; i<10; i++){
        sum +=arr[i];
    }
    cout << sum << endl;
    return 0;
}