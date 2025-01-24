#include <iostream>
using namespace std;

int main() {
    int arr[5]= {1,2,3,4,5};
    cout <<"Printing the all Element of the Array"<< endl;
    int size = sizeof(arr)/sizeof(int);
    for(int i = 0; i<size; i++){

        cout << arr[i] << " " ;
    }  
    return 0;
}