#include <iostream>
#include<list>
using namespace std;

int main() {
    list<int>l;
    l.push_back(1);
    l.push_front(2);

    for(int i : l){
        cout << i << " ";
    }

    cout << "Size of list : " << l.size();

    list<int>n(5,100);
    cout << endl;

    for(int i : n){
        cout << i << " ";
    }
    return 0;
}