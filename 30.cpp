#include <iostream>
using namespace std;
//C Program to Convert Decimal Number into Binary.
int main() {
    int decimal;
    cout << "Enter the decimal Number" << endl;
    cin>>decimal;

    int binary[32];
    int i = 0;
    while(decimal !=0){
        binary[i] = decimal%2;
        decimal /=2;
        i++;
    }

    for(int j = i-1; j>=0; j--){
        cout << binary[j]<< " ";
            }

    return 0;
}