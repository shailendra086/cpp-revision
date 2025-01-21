#include <iostream>
using namespace std;

int main() {
    int a , b;
    cout << "Enter the number a and b" << endl;
    cin>> a ;
    cin>>b;

    int greater = max(a,b); //10 , 5  == 10
    int smallest = min(a,b); // 5
    int lcmis ;
    for(int i = greater ; ; i = i + greater ){
        if(i % smallest == 0){
            lcmis = i;
            break ;
        }
    }
    cout << "Ans is : " << lcmis << endl;
    return 0;
}