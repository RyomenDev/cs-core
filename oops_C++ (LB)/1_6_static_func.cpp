#include <iostream>
using namespace std;
#include "Hero.cpp"

// class Hero{
//     // properties
//     int health;
// };

void func10()
{
    cout<<Hero::staticFunc()<<endl;
}

int Hero::timeToComplete = 5;

int main()
{
    // ! static function
    func10();
    return 0;
}