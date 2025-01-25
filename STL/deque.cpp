#include <iostream>
#include<deque>
using namespace std;

int main() {
    deque<int>d;
    d.push_back(1);
    d.push_front(2);

    for(int i:d){
        cout << i << " ";
    }
   // d.pop_front();
    cout << endl;
    for (int i : d){
        cout << i << " ";
    }

    cout << "Print First Index element : " << d.at(0) << endl;

    cout << "back " << d.back() << endl;

    cout << "Erase element" << endl;
    d.erase(d.begin(),d.begin()+1);
    cout << "After Erase"<< endl;
    for (int i : d){
        cout << i << " ";
    }
    return 0;
}