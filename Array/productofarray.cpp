#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int size;
    cout << "Enter the size of array"<<endl;
    cin>>size;
    cout<<"Enter the Element in the array"<<endl;
    for(int i = 0; i<size;i++){
        cin>>arr[i];

    }
    int product = 1;
    cout <<"Product of array is : "<<endl;
    for(int i = 0; i<size; i++){
        product *=arr[i];
    }
    cout << product <<endl;
    return 0;
}