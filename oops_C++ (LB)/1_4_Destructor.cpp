#include <iostream>
using namespace std;
#include "Hero.cpp"

// class Hero{
//     // properties
//     int health;
// };

void func8()
{
    Hero a;
    Hero *b = new Hero();

    // simple constructor called.
    // simple constructor called.
    // Destructor called

    delete b; // ! dynamically allocated object
    // simple constructor called.
    // simple constructor called.
    // Destructor called
    // Destructor called
}

int main()
{
    //! destructor
    func8();
    return 0;
}