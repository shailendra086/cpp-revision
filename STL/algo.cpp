#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    vector<int>v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(7);
    v.push_back(9);
    v.push_back(4);
    v.push_back(6);
    
    cout <<"Finding 6 "<< binary_search(v.begin(),v.end(),6)<<endl;

    cout << "lower bound" <<lower_bound(v.begin(),v.end(),4)-v.begin() << endl;
    //finding the iterator

    string abcd = "abcd";
    reverse(abcd.begin(),abcd.end());
    cout << "string : " << abcd << endl;

    rotate(v.begin(),v.begin()+1,v.end());

    for(int i : v){
        cout << i << " ";
    }

    //sort

    cout<<endl;
    sort(v.begin(),v.end());
    for(int i:v){
        cout << i << " ";
    }
    return 0;
}