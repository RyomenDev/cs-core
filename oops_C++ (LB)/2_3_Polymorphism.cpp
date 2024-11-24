/*
@ Polymorphism

        * single thing existing in multiple forms

@ Types

    ! 1: Compile time polymorphism
            / function overloading
            / operator overloading
    ! 2: Run-time polymorphism
            / method overriding

*/

/*
@  Compile time polymorphism
    * Compile time polymorphism is also known as static polymorphism. This type of polymorphism can be achieved through function overloading or operator overloading.

! function overloading:
~ when there are multiple functions in a class with the same name but different parameters, these functions are overloaded.
Advantage : increases readability of program.
    % 1: with different number of arguments
    % 2: with different types of arguments
    % 3: Default arguments
^ class members cannot be redeclare.
^ function tht differ only in their return type cannot be overloaded.


! operator overloading:
~ C++ also provides options to overload operators. For example, we can make the operator (‘+’) for the string class to concatenate two strings. We know that this is the addition operator whose task is to add two operands. A single operator, ‘+,’ when placed between integer operands, adds them and concatenates them when placed between string operands.

* Points to remember while overloading an operator:

^It can be used only for user-defined operators(objects, structures) but cannot be used for in-built operators(int, char, float, etc.).
^Operators = and & are already overloaded in C++, so we can avoid overloading them.
^Precedence and associativity of operators remain intact.

*/

/*
@ Run-time polymorphism
    * Runtime polymorphism is also known as dynamic polymorphism. Method overriding is a way to implement runtime polymorphism.

! method overriding
    % Method overriding is a feature that allows you to redefine the parent class method in the child class based on its requirement. In other words, whatever methods the parent class has by default are available in the child class. But, sometimes, a child class may not be satisfied with parent class method implementation. The child class is allowed to redefine that method based on its requirement. This process is called method overriding.

^Rules for method overriding:
~ The method of the parent class and the method of the child class must have the same name.
~ The method of the parent class and the method of the child class must have the same parameters.
~ It is possible through inheritance only.

*/

#include <iostream>
using namespace std;

// ! function overloading
class A
{
public:
    void func()
    {
        cout << "hello" << endl;
    }
    void func(int a)
    {
        cout << "Bye " << a << endl;
    }
};

// ! operator overloading:
class Complex
{
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    // This is automatically called when '+' is used with
    // between two Complex objects
    Complex operator+(Complex const &b)
    {
        Complex a;
        a.real = real + b.real; // this.real + b.real
        a.imag = imag + b.imag;
        return a;
    }
    void print()
    {
        cout << real << " + i" << imag << endl;
    }
};

// ! method overriding
class Parent {
    public:
        void show() {
            cout << "Inside parent class" << endl;
        }
};
class subclass1: public Parent {
    public: void show() {
        cout << "Inside subclass1" << endl;
    }
};
class subclass2: public Parent {
    public: void show() {
        cout << "Inside subclass2";
    }
};

int main()
{
    // function overloading
    A obj;
    obj.func(7);

    // operator overloading:
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2; // An example call to "operator+"
    // ! c1 is current object, c2 is input argument
    c3.print();

    // method overriding
    subclass1 o1;
    subclass2 o2;
    o1.show();
    o2.show();

    return 0;
}