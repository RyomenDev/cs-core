#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl "\n"

// function friend of node but member function of other class
/*
declare A
define B and declare it function f1
define A
define function f1
*/
class Node;
class LinkedList1
{
public:
    void Demo1(Node &node);
    // {
    //     cout << node.data << endl;
    // }
};

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
    friend void Demo(Node &node, int w);
    // function friend of node but member function of other class
    friend void LinkedList1::Demo1(Node &node);
};

void LinkedList1::Demo1(Node &node)
{
    cout << node.data << endl;
}

// global function
void Demo(Node &node, int w)
{
    node.data = w;
    cout << node.data << endl;
}

int32_t main()
{
    Node node1;
    Demo(node1, 9); // 9
    LinkedList1 ll1;
    ll1.Demo1(node1);

    return 0;
}