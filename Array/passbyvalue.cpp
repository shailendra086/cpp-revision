#include <iostream>
using namespace std;

void change(int arr[]){
    arr[0] = 10;
}

int main() {
    int arr[] = {1,2,3,4,5};
    change(arr);
    cout << arr[0] << endl;

    return 0;
    //array are pass by reference 
}