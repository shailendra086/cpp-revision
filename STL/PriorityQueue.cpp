#include <iostream>
#include<queue>
using namespace std;

int main() {
    //max heap
    priority_queue<int>maxi;
    //min heap
    priority_queue<int,vector<int>,greater<int>>mini;

    maxi.push(1);
    maxi.push(1);
    maxi.push(1);
    maxi.push(1);
    for(int i=0; i<maxi.size(); i++){
        cout << maxi.top()<< " ";
        maxi.pop();
    }
    
    cout << endl;

    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(5);

    int m = mini.size();
    for(int i = 0; i<m; i++){
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;
    return 0;
    cout << "Empty or not>>" << mini.empty() <<endl;
}