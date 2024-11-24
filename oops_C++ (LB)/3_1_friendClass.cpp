#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl "\n"

class Node
{
    int data;
    Node *next;

public:
    Node()
    {
        data = 10;
        next = nullptr;
    }
    friend class LinkedList1;
};

class LinkedList1
{
public:
    void Demo(Node &node)
    {
        cout << node.data << endl;
    }
};

// ! inheritance
// class LinkedList2:public Node{
//     public:
//     void Demo(Node & node){
//         cout << node.data << endl; // error: 'data' is a private member of 'Node'
//     }
// };

int32_t main()
{
    Node node1;
    LinkedList1 ll1;
    ll1.Demo(node1); // 10

    return 0;
}