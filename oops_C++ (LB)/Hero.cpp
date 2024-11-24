#include <iostream>
#include <string.h>
using namespace std;

class Hero
{
    // properties
    // char name[100];
    // char *name; // good practice
    char level;

public:
    char *name;
    int health;
    static int timeToComplete; // static keyword

    // !creating constructor -  default automatically get removed
    Hero()
    {
        cout << "simple constructor called." << endl;
        name = new char[100]; // good practice dynamic allocation
    }

    // ! Constructor With Parameter
    Hero(int health)
    {
        name = new char[100];
        // health=health; !do not update (variable scoping)
        this->health = health; // ^ this.health to identify objects health , it stores address of current object
    }

    Hero(int health, char level)
    {
        name = new char[100];
        this->health = health;
        setLevel(level);
    }

    void print0()
    {
        cout << health << " ";
        cout << getLevel() << " ";
        // cout << getName() << endl;
    }

    void print()
    {
        cout << this->health << " ";
        cout << this->level << " ";
        cout << this->name << endl;
    }

    // //! user copy constructor
    // Hero(Hero &temp)
    // {
    //     cout << "user copy constructor" << endl;
    //     char *ch=new char[strlen(temp.name)+1];
    //     strcpy(ch,temp.name);

    //     this->health = temp.health;
    //     this->level = temp.level;
    //     this->name = ch;
    // }

    char getLevel()
    { // getter
        return level;
    }

    // void setLevel(char newLevel,char password){ // setter with security
    void setLevel(char newLevel)
    { // setter
        // if(password=="")
        level = newLevel;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    string getName()
    {
        return name;
    }

    // ! static function
    static int staticFunc(){
        cout<<"static function "<<endl;
        // cout<<this->level<<endl; // incorrect - no this
        // cout<<level<<endl; // incorrect - access only static member
        cout<<timeToComplete<<endl; // only if alloacted
        return 1;
    }

    // ! destructor user-defined
    ~Hero()
    {
        cout << "Destructor called" << endl;
    }
};