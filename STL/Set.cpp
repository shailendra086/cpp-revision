#include <iostream>
#include<set>
using namespace std;

int main() {
    set<int>s;
    s.insert(5);
    s.insert(4);
    s.insert(0);
    s.insert(5);
    s.insert(6);
    s.insert(7);
    s.insert(9);

    for(auto i : s){
        cout << i << endl;
    }
    cout  << "Erasing" << endl;
    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    for(auto i:s){
        cout << i << endl;
    }

    cout << "Counting : " << s.count(0) << endl;

    
    return 0;
}