#include <iostream>
#include<vector>

using namespace std;
//use stl of vector
//vector is dynamic 
int main() {

    vector<int>v;
    vector <int> a(5,1);


    // copy
    vector<int> last(a);
    int size = v.size();
    cout << size ;
    cout << endl;
    v.push_back(1);
    cout << "Size is : " << v.size();
    cout << "Capicity is : " << v.capacity() << endl;
    v.push_back(2);
    v.push_back(3);

     cout << "Capicity is : " << v.capacity() << endl;

     cout << "front Element "<<v.front() << endl;

     cout << "back : " << v.back()<< endl;
    

    for(int i:v){
        cout << i << " ";
    }
    v.pop_back();

    cout << "After Pop all the element is : " << endl;

    for(int i : last){
        cout << i << " ";
    }
    return 0;
}