#include <iostream>
using namespace std;

int main() {
    //C Program to calculate length of an array.
    int arr[] = {1,2,3,4,5,7,8,9,5,7,4};
    int size = sizeof(arr)/ sizeof(int);
    cout << "the array size is : " << size << endl;

    return 0;
}