#include <iostream>
#include<map>
using namespace std;

int main() {
    //here store the key and value in the map
    map<int,string>m;
    m[1] = "youtube";
    m[2] = "channel";
    m[3] = "kumar";
    m.insert({5,"hero"});
    

    cout << "before erase " << endl;
    for(auto i : m){
        cout << i.first <<" " << i.second<< endl;
    }

    m.erase(3);
    cout << "after erase" << endl;

    for(auto i : m){
        cout << i.first <<" " << i.second<< endl;
    }
    cout <<"finding 3 : " << m.count(3) << endl;

    auto it = m.find(5);
    for(auto i = it ; i!=m.end(); i++){
        cout << (*i).first<< endl;
    }
    return 0;
}