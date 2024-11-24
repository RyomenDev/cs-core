/*
^ In C++, friend functions and friend classes are mechanisms to allow access to the private and protected members of a class from outside the class. These are used to facilitate certain types of operations where external functions or classes need to interact closely with the internals of a class.
*/
/*
! Friend Function
% A friend function is a non-member function that has access to the private and protected members of a class. It is declared by using the friend keyword inside the class whose private members need to be accessed.
*/
/*
! Friend Class
% A friend class is a class whose members have access to the private and protected members of another class. This is declared using the friend keyword inside the class that grants the access
*/
/*
! Key Points:
* Access Control: friend functions and classes can access private and protected members of the class that declares them as friends.
* Non-Member Function: A friend function is not a member of the class but has access to its private and protected members.
* Two-Way Friendship Not Automatic: If class A is a friend of class B, it does not mean class B is automatically a friend of class A.
* Encapsulation: Although friend mechanisms break the encapsulation principle, they are useful in situations where closely coupled classes need to work together.

! When to Use:
* When you need to perform operations that require access to the internals of a class from non-member functions or other classes.
* To facilitate operator overloading, especially when the operator needs to access private data of the class.
* In certain design patterns like the friend function can be used in factories or for operator overloading purposes where external functions need access to class internals.
* In general, friend mechanisms should be used sparingly and only when necessary to maintain good encapsulation and modularity practices.
*/