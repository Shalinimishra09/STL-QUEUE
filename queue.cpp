// #include<iostream>

// #include<queue>
// using namespace std;
// int main(){
//     queue<int>q;
//     q.push(7);
//     q.push(9);
//     q.push(2);
//     q.push(5);
//     cout<<q.front()<<endl;
//     cout<<q.back()<<endl;
//     q.pop();
//     cout<<q.front()<<endl;
//      cout<<q.empty()<<endl;
//     return 0;

// }


/*priority_queue*/
#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int, vector<int> ,greater<int>>pq;
    pq.push(3);
    pq.push(4);
    pq.push(8);
    pq.push(9);
    pq.push(10);
    cout<<"top "<<pq.top()<<endl;
    pq.pop();
    cout<< "top "<<pq.top()<<endl;
    return 0;
}