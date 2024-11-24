#include <iostream>
using namespace std;
#include "Hero.cpp"

// class Hero{
//     // properties
//     int health;
// };

void func1()
{
    // & static allocation
    Hero h1;
    // creation of object
    cout << sizeof(h1) << endl; // == size of object

    // cout<<h1.level<<endl;  // private
    cout << h1.health << endl;

    h1.health = 200; 
    cout << h1.health << endl;

    // == for level - private - using getter and setter function
    cout << h1.getLevel() << endl;

    h1.setLevel('7');
    cout << h1.getLevel() << endl;
}

void func2()
{
    // & dynamic allocation (alloacted in heap)
    Hero *h2 = new Hero; // new Hero();

    (*h2).health = 200;
    cout << (*h2).health << endl; // h2 is address

    (*h2).setLevel('7');
    cout << (*h2).getLevel() << endl;
    cout << h2->getLevel() << endl; // arrow operator
}

int main()
{
    // ! static object
    // func1();

    // ! Dynamic Object
    // func2();

    return 0;
}