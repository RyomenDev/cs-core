#include <iostream>
using namespace std;
#include "Hero.cpp"

// class Hero{
//     // properties
//     int health;
// };


void func3()
{
    Hero h3; // A call is made (h3.Hero)
    Hero *h4 = new Hero();
}

void func4()
{
    Hero h5(8); // A call is made (h5.Hero(8))
    cout << h5.health << endl;

    Hero *h6 = new Hero(9);
    cout << h6->health << endl;

    Hero h7(8, '9'); // health, level
    cout << h7.health << " " << h7.getLevel() << endl;

    h7.print0();
}

void func5()
{
    Hero h8(11, 'h'); // health, level
    Hero h9(h8); // copy constructor
    h9.print0(); // 11 h

    /*
    / can create copy constructor but present by default

    Hero(Hero &temp){
        this->health=temp.health;
        this->level=temp.level;
    }

    */
}

int main()
{
  
    // ! Working with constructor with no Parameter
    // func3();

    // ! Constructor With Parameter
    // func4();

    // ! Copy Constructor
    // func5();

    return 0;
}