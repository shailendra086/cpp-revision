#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,4,-3,2,12,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int brr[n];
   for(int i = 0; i<n; i++){
        brr[i] = arr[n-1-i];

   }
   cout << "after copy the element in reverse order"<< endl;
   for(int i = 0; i<n; i++){
        cout << brr[i] << " ";

   }

   
    return 0;
}