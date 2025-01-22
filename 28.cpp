#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    int a, b;
    cout << "Enter the value of a and b" << endl;
    cin >> a >> b;

   
    if(b>a){
        int temp = b;
        b = a;
        a = temp;

    }
    int ans;
    for(int i = 1; i<b; i++){
        if(a%i == 0 && b%i == 0){
            ans = i;
        }
    }
    cout << "Hcf is : " << ans << endl;

    return 0;
}
