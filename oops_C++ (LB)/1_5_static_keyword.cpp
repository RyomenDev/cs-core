#include <iostream>
using namespace std;
#include "Hero.cpp"

// class Hero{
//     // properties
//     int health;
// };

void func9()
{
    cout << Hero::timeToComplete << endl; //5

    Hero A;
    cout << A.timeToComplete << endl;//5  // not good practice

    Hero B;
    B.timeToComplete=10;
    cout<<A.timeToComplete<<endl; //10
}

int Hero::timeToComplete = 5;

int main()
{
    // ! static keyword
    func9();
    return 0;
}