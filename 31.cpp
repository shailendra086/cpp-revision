#include <iostream>
using namespace std;

int main() {
    //C Program to convert Decimal number to Octal number.
    int decimal;
    cout << "Enter the decimal number:" << endl;
    cin>>decimal;
    int octal[32];
    int i = 0;

    while(decimal!=0){
        octal[i] = decimal %8;
        decimal /= 8;
        i++;
    }

    //printing in the reverse order
    for(int j = i-1; j>=0; j--){
        cout << octal[j] << " ";
    }
    return 0;
}