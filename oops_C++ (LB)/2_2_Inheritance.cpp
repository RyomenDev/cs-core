/*
@ Inheritance :

    ! inheriting property of class A to class B.

@ mode of inheritance
    public protected private
*/

/*
/ types of inheritance:
    ^ single : class A to class B
    ^ multilevel : class A to class B .. Class C ... 
    ^ multiple : class A & class B both inherited by C
            ! class C : public A , protected B{}
    ^ hierarchial : One class serve as parent class for more than one class
    ^ hybrid : Combination of more than one type of inheritance
*/

/*
@ Inheritance Ambiguity

    % There may be a possibility that a class may inherit member functions with the same name from two or more base classes, and the derived class may not have functions with the same name as those of its base classes. If the derived class object needs to access one of the same-named member functions of the base classes, it results in ambiguity as it is not clear toi the compiler which base's class member function should be invoked.

    / scope resolution operator
    * ambiguity can be resolved by scope resolution operator by specifying the class in which the member function lies.
    ! C object;
    ! object.A::func();
    ! object.B::func();

*/

/*
== Protected

        / similar to private
        / accessible in own class
        / child | derived class can access it
*/

#include <iostream>
using namespace std;

class Human
{
public:
    int height;
    int weight;
    int age;

public:
    int getAge()
    {
        return this->age;
    }
    void setWeight(int w)
    {
        this->weight = w;
    }
};

class Male : public Human // inheriting
{                         // childName : modeOfInheritance  ParentClass

public:
    string color;
    void sleep()
    {
        cout << "Male Sleeping" << endl;
    }
};
class Female : protected Human // inheriting
{                              // childName : modeOfInheritance  ParentClass

public:
    string color;
    void sleep()
    {
        cout << "Female Sleeping" << endl;
    }
    void setAge(int a)
    {
        this->age = a;
    }
    int getAge()
    {
        return this->age;
    }
};

int main()
{
    Male obj1;
    obj1.sleep();
    obj1.age = 10;
    obj1.setWeight(20);

    cout << obj1.age << " " << obj1.weight << endl;

    Female obj2;
    // ! obj2.age=10; //in accessible - protected
    obj2.setAge(5);
    cout<<obj2.getAge()<<endl;

    return 0;
}