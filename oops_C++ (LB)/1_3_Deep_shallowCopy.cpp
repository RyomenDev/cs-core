#include <iostream>
using namespace std;
#include "Hero.cpp"

// class Hero{
//     // properties
//     int health;
// };

void func6()
{
    Hero hero1;
    hero1.setLevel('h');
    hero1.health = 5;
    // hero1.setName('abcd'); wrong
    char name[6] = "abcde"; // null char at end
    hero1.setName(name);

    hero1.print(); // 5 h abcde

    // & Deep copy: user copy constructor
    // & Shallow Copy: remove user copy constructor
    Hero hero2(hero1);
    hero2.print(); // 5 h abcde

    // change in Main object
    hero1.health = 8;
    hero1.name[0] = 'e';

    cout << endl;
    hero1.print(); // 8 h ebcde
    hero2.print(); // 5 h ebcde
}

void func7()
{
    Hero hro1(5, 'h');
    char name[6] = "abcde"; // null char at end
    hro1.setName(name);

    Hero hro2;
    hro2 = hro1;
    hro2.print(); // 5 h abcde

    hro1.name[0] = 'c';
    hro1.setLevel('g');
    hro1.health = 9;

    cout << endl;
    hro1.print(); // 9 g cbcde
    hro2.print(); // 5 h cbcde
}

int main()
{
    // ! Deep & Shallow copy
    // func6();

    // ! copy assignment operator
    // func7();

    return 0;
}