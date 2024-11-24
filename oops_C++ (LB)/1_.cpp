// ^ empty class memory : 1 to track its identification
// ^ by default some random garbage value is assigned to properties

// ! access property using dot "." operator

/*

@ access modifier:
   / 1: Public : can be access outside class
   ^ 2: Private: by default- only accessed in class
   * 3: Protected

@ getter/setter

  private:
    int health;

  public:
      int getLevel(){ // getter
      return level;
    }

    void setLevel(int newLevel){ // setter
        level=newLevel;
    }

*/

// ! this => pointer to current object

/*
@ constructor:

% When a object is created firstly constructor is called (behind the seen).
! constructor : invoked during object creation , have no return type , generally no input parameter (here).

/ when a class is created a default constructor of same name is created.

/ if any constructor is created the default constructor get automatically removed

*/

/*
@ copy constructor

^ temp is passed by reference.
if passed by value it will go in infinite loop as pass by value creates copy, this will call copy constructor creating copy of copy and again...

  Hero(Hero &temp)
  {
      this->health = temp.health;
      this->level = temp.level;
  }

! default copy constructor -> shallow copy
/ Correction: it is wrong to say that the default copy constructor always performs a shallow copy (or a deep copy, for that matter). Whether a type's copy constructor creates a shallow copy, or deep copy, or something in-between the two, depends on the combination of each member's copy behaviour; a member's type's copy constructor can be made to do whatever it wants, after all.

* section 12.8, paragraph 8 of the 1998 C++ standard says:

* The implicitly defined copy constructor for class X performs a memberWise copy of its subObjects. [...] Each subObject is copied in the manner appropriate to its type: [...] [I]f the subObject is of scalar type, the builtin assignment operator is used.

  == Deep And Shallow Copy

    & Shallow Copy:
        any change is the object from where it is copied will reflect in new copy.[string,array]
        ^ same memory accessed by different names.

    & Deep copy:
        any change is the object from where it is copied will not reflect in new copy.
        created object(copy) will retain previous data.
        ^ entirely different object copy

*/

/*
@ Destructor
  ^ to de-allocate memory.
  ^ after function (scope) destructor will be called and the memory will be freed.
  / automatically created with creation of class. Can be created by user.
  / no input parameter

  ~Hero(){
    cout<<"Destructor called"<<endl ;
  }

  / if object is created by static allocation Destructor will be automatically called.

  / if object is created by dynamic allocation Destructor need to manually called.
  % (delete b);

*/

// % constructor and destructor only called once for an object

/*
@ static keyword

  ^ creates a data member that belongs to class.
  ^ no need to create object to access it.

  ^ in class
  / static int timeToComplete;

  ^ initialize it outside function.
  /int Hero::timeToComplete=5;
  "::"" scope resolution operator

*/

/*
@ static function:

    ^ creates a data member that belongs to class.
    ^ no need to create object to access it.
    ^ have no this keyword
    ^ can access only static members only if already allocated
*/

/*

@ greedy alignment

@ Padding

@ Const keyword
    / how it used in object creation
    / const type function

@ initialization List

*/