#include <iostream>
#include<queue>
using namespace std;

int main() {
    queue<string>q;
    q.push("love");
    q.push("Babbar");
    q.push("Yt");
    q.push("Channel");

    cout << "Size of  : " << q.size()<< endl;
    cout << "first element" << q.front() << endl;
    cout << "back element" << q.back()<<endl;
    q.pop();
    cout << "First " << q.front();
    return 0;
}