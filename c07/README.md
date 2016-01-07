## Exercise 7.1

> Write a version of the transaction-processing program from § 1.6 (p. 24) using the Sales_data class you defined for the exercises in § 2.6.1 (p. 72).

[code](ex7.1.cpp)

## Exercise 7.2

> Add the `combine` and `isbn` members to the `Sales_data` class you wrote for the exercises in § 2.6.2 (p. 76).

[code](ex7_2.cpp)

## Exercise 7.3

> Revise your transaction-processing program from § 7.1.1 (p. 256) to use these members.

[code](ex7_2.cpp)

## Exercise 7.4

> Write a class named `Person` that represents the name and address of a person. Use a `string` to hold each of these elements. Subsequent exercises will incrementally add features to this class.

[code](ex7_4.cpp)

## Exericse 7.5

> Provide operations in your `Person` class to return the name and address. Should these functions be `const`? Explain your choice.

[code](ex7_5.cpp)

## Exercise 7.6

> Define your own versions of the `add`, `read`, and `print` functions.

[code](ex7_6.h)

## Exercise 7.7

> Rewrite the transaction-processing program you wrote for the exercises in § 7.1.2 (p. 260) to use these new functions.

[code](ex7_7.cpp)

## Exercise 7.8

> Why does `read` define its `Sales_data` parameter as a plain reference and `print` define its parameter as a reference to `const`?

`read` function will affect the parameter value, `print` will not.

## Exercise 7.9

> Add operations to `read` and `print` Person objects to the code you wrote for the exercises in § 7.1.2 (p. 260).

[code](ex7_9.cpp)


## Exercise 7.10

> What does the condition in the following `if` statement do?
```cpp
if (read(read(cin, data1), data2))
```

`if` will read two `Sales_data` objects at one time.

## Exercise 7.11

> Add constructors to your `Sales_data` class and write a program to use each of the constructors.

[header](ex7_11.h) | [code](ex7_11.cpp)

## Exercise 7.12

> Move the definition of the `Sales_data` constructor that takes an `istream` into the body of the Sales_data class.

[header](ex7_12.h)

## Exercise 7.13

> Rewrite the program from page 255 to use the `istream` constructor.

[code](ex7_13.cpp)

## Exercise 7.14

> Write a version of the default constructor that explicitly initializes the members to the values we have provided as in-class initializers.

```cpp
Sales_data() : units_sold(0), revenue(0) { }
```

## Exercise 7.15

> Add appropriate constructors to your `Person` class.

[header](ex7_15.h) | [code](ex7_15.cpp)

## Exercise 7.16

> What, if any, are the constraints on where and how often an access specifier may appear inside a class definition? What kinds of members should be defined after a `public` specifier? What kinds should be `private`?

A class may contain zero or more access specifiers, and there are no restrictions on how often an access specifier may appear.

The constructors and member functions that are part of the interface follow the `public` specifier; the data members and the functions that are part of the implementation follow the `private` specifier.

## Exercise 7.17

> What, if any, are the differences between using `class` or `struct`?

We can define a class type using either keyword. The only difference between `struct` and `class` is the default access level. (`class`: private; `struct`: public)

## Exercise 7.18

> What is encapsulation? Why is it useful?

Encapsulation is the separation of implementation from interface. It hides the implementation details of a type. (In C++, encapsulation is enforced by putting the implementation in the private part of a class)

Important advantages:

- User code cannot inadvertently corrupt the state of an encapsulation object.
- The implementation of an encapsulated class can change over time without requiring changes in user-level code.

## Exercise 7.19

> Indicate which members of your `Person` class you would declare as `public` and which you would declare as `private`. Explain your choice.

The interface should be defined as `public`, the data shouldn't expose to outside of the class.

[header](ex7_19.h)

## Exercise 7.20

> When are friends useful? Discuss the pros and cons of using friends.

A class can allow another class or function to access its non`public` members by making that class or function a __friend__.

#### Pros

- the useful functions can refer to class members in the class scope without needing to explicitly prefix them with the class name.
- you can access all the nonpublic members conveniently.
- sometimes, more readable to the users of class.

#### Cons

- lessens encapsulation and therefore maintainability.
- code verbosity, declarations inside the class, outside the class.

## Exercise 7.21

> Update your `Sales_data` class to hide its implementation. The programs you’ve written to use `Sales_data` operations should still continue to work. Recompile those programs with your new class definition to verify that they still work.

[header](ex7_21.h) | [code](ex7_21.cpp)

## Exercise 7.22

> Update your `Person` class to hide its implementation.

[header](ex7_22.h)

## Exercise 7.23

> Write your own version of the `Screen` class.

[header](ex7_23.h)

## Exercise 7.24

> Give your `Screen` class three constructors: a default constructor; a constructor that takes values for height and width and initializes the contents to hold the given number of blanks; and a constructor that takes values for height, width, and a character to use as the contents of the screen.

[header](ex7_24.h)

## Exercise 7.25

> Can `Screen` safely rely on the default versions of copy and assignment? If so, why? If not, why not?

Classes that use `vector`s and `string`s avoid the complexities involved in allocating and deallocating memory.

The synthesized versions for copy, assignment, and destruction work correctly for classes that have `vector` or `string` members.

Hence the class below which used only built-in type and strings can rely on the default version of copy and assignment. 

## Exercise 7.26

> Define `Sales_data::avg_price` as an `inline` function

[header](ex7_26.h)

## Exercise 7.27

> Add the `move`, `set`, and `display` operations to your version of `Screen`. Test your class by executing the following code:
```cpp
Screen myScreen(5, 5, 'X'); 
myScreen.move(4,0).set('#').display(cout); 
cout << "\n"; 
myScreen.display(cout); 
cout << "\n";
```

[header](ex7_27.h) | [code](ex7_27.cpp)

## Exercise 7.28

> What would happen in the previous exercise if the return type of `move`, `set`, and `display` was `Screen` rather than `Screen&`?

will copy a new screen, not affect current `Screen` object.

## Exercise 7.29

> Revise your `Screen` class so that `move`, `set`, and `display` functions return Screen and check your prediction from the previous exercise.

#### Before

```
XXXXXXXXXXXXXXXXXXXX#XXXX
XXXXXXXXXXXXXXXXXXXX#XXXX
```

#### After

```
XXXXXXXXXXXXXXXXXXXX#XXXX
XXXXXXXXXXXXXXXXXXXXXXXXX
```

## Exercise 7.30

> It is legal but redundant to refer to members through the `this` pointer. Discuss the pros and cons of explicitly using the `this` pointer to access members.

#### Pros

- more explicit
- less scope for misreading
- can use the member function parameter which name is same as the member name.
```cpp
void setAddr(const std::string &addr) { this->addr = addr; }
```

#### Cons

- more to read
- sometimes redundant
```cpp
std::string getAddr() const { return this->addr; } // unnecessary
```

## Exercise 7.31

> Define a pair of classes `X` and `Y`, in which `X` has a pointer to `Y`, and `Y` has an object of type `X`.

```cpp
class Y;

class X {
	Y *px;
};

class Y {
	X y;
};
```

## Exercise 7.32

> Define your own versions of `Screen` and `Window_mgr` in which `clear` is a member of `Window_mgr` and a friend of `Screen`.

[header](ex7_32.h) | [code](ex7_32.cpp)

## Exercise 7.33

> What would happen if we gave `Screen` a `size` member defined as follows? Fix any problems you identify.
```cpp
pos Screen::size() const
{
    return height * width;
}
```

`pos` might be unknown, so fixed by:

```cpp
Screen::pos Screen::size() const
{
    return height * width;
}
```

## Exercise 7.34

> What would happen if we put the `typedef` of `pos` in the `Screen` class on page 285 as the last line in the class?

error: unknown type name 'pos'

## Exercise 7.35

> Explain the following code, indicating which definition of `Type` or `initVal` is used for each use of those names. Say how you would fix any errors.
```cpp
typedef string Type; 
Type initVal(); 
class Exercise { 
public: 
    typedef double Type; 
    Type setVal(Type); 
    Type initVal(); 
private:
    int val; 
}; 
Type Exercise::setVal(Type parm) { 
    val = parm + initVal(); 
    return val; 
}
```

```cpp
typedef string Type; 
Type initVal(); // use 'string'
class Exercise { 
public: 
    typedef double Type; 
    Type setVal(Type); // use 'double'
    Type initVal(); use 'double'
private:
    int val; 
}; 
Type Exercise::setVal(Type parm) { // return value use 'string'; para use 'double'
    val = parm + initVal(); // Exercise::initVal()
    return val; 
}
```

## Exercise 7.36

> The following initializer is in error. Identify and fix the problem.
```cpp
struct X { 
    X (int i, int j): base(i), rem(base % j) { } 
    int rem, base; 
};
```

warning: field 'base' is uninitialized when used here

fixed by:

```cpp
struct X { 
    X (int i, int j): base(i), rem(base % j) { } 
    int base, rem; 
};
```

## Exercise 7.37

> Using the version of `Sales_data` from this section, determine which constructor is used to initialize each of the following variables and list the values of the data members in each object:
```cpp
Sales_data first_item(cin);
int main() { 
    Sales_data next; 
    Sales_data last("9-999-99999-9"); 
}
```

```cpp
Sales_data first_item(cin); // Sales_data(std::istream&)
int main() { 
    Sales_data next; // Sales_data(std::string)
    Sales_data last("9-999-99999-9"); // Sales_data(std::string)
}
```

## Exercise 7.38

> We might want to supply `cin` as a default argument to the constructor that takes an `istream&`. Write the constructor declaration that uses `cin` as a default argument.

```cpp
Sales_data(std::istream& is = std::cin) { ... }
```

## Exercise 7.39

> Would it be legal for both the constructor that takes a `string` and the one that takes an `istream&` to have default arguments? If not, why not?

Illegal. the call of overloaded `Sales_data()` will be ambiguous.

## Exercise 7.40

> Choose one of the following abstractions (or an abstraction of your own choosing). Determine what data are needed in the class. Provide an appropriate set of constructors. Explain your decisions.
> (a) Book 
> (b) Date 
> (c) Employee 
> (d) Vehicle 
> (e) Object 
> (f) Tree

review later

## Exercise 7.41

> Rewrite your own version of the `Sales_data` class to use delegating constructors. Add a statement to the body of each of the constructors that prints a message whenever it is executed. Write declarations to construct a `Sales_data` object in every way possible. Study the output until you are certain you understand the order of execution among delegating constructors.

[header](ex7_41.h) | [code](ex7_41.cpp) | [test](ex7_41_test.cpp)

## Exercise 7.42

> For the class you wrote for exercise 7.40 in § 7.5.1 (p. 291), decide whether any of the constructors might use delegation. If so, write the delegating constructor(s) for your class. If not, look at the list of abstractions and choose one that you think would use a delegating constructor. Write the class definition for that abstraction.

review later

## Exercise 7.43

> Assume we have a class named `NoDefault` that has a constructor that takes an `int`, but has no default constructor. Define a class `C` that has a member of type `NoDefault`. Define the default constructor for `C`.

[header](ex7_43.h) | [code](ex7_43.cpp)

## Exercise 7.44

> Is the following declaration legal? If not, why not?
```cpp
vector<NoDefault> vec(10);
```

Illegal. Ten elements for `NoDefault`, but no default initializer.

## Exercise 7.45

> What if we defined the `vector` in the previous execercise to hold objects of type `C`?

Legal.

## Exercise 7.46

> Which, if any, of the following statements are untrue? Why?
> 
> (a) A class must provide at least one constructor.

false. Compiler could create default constructor(synthesized default constructor) if there is no constructor.

> (b) A default constructor is a constructor with an empty parameter list. 

false. A default constructor is a constructor that is used if no initializer is supplied. What's more, a constructor that supplies default arguments for all its parameters also defines the default constructor)

> (c) If there are no meaningful default values for a class, the class should not provide a default constructor.

false.

> (d) If a class does not define a default constructor, the compiler generates one that initializes each data member to the default value of its associated type.

false. Only if our class does not explicitly define any constructors, the compiler will implicitly define the default constructor for us.

## Exercise 7.47

> Explain whether the `Sales_data` constructor that takes a `string` should be `explicit`. What are the benefits of making the constructor `explicit`? What are the drawbacks?

Depends on requirement.

Benefits:

- prevent the use of a constructor in a context that requires an implicit conversion
- we can define a constructor which is used only with the direct form of initialization

Drawbacks:

- meaningful only on constructors that can be called with a single argument

## Exercise 7.48

> Assuming the `Sales_data` constructors are not explicit, what operations happen during the following definitions
```cpp
string null_isbn("9-999-99999-9"); 
Sales_data item1(null_isbn); 
Sales_data item2("9-999-99999-9");
```
> What happens if the Sales_data constructors are explicit?

Both work!

## Exercise 7.49

> For each of the three following declarations of `combine`, explain what happens if we call `i.combine(s)`, where `i` is a `Sales_data` and `s` is a `string`:
> 
> (a) `Sales_data &combine(Sales_data);` 

ok.

> (b) `Sales_data &combine(Sales_data&);` 

`std::string&` could not convert to `Sales_data` type

> (c) `Sales_data &combine(const Sales_data&) const;`

`const` for this function will cause error

## Exercise 7.50

> Determine whether any of your `Person` class constructors should be `explicit`.

review later

## Exercise 7.51

> Why do you think `vector` defines its single-argument constructor as explicit, but `string` does not?

review later

## Exercise 7.52

> Using our first version of `Sales_data` from § 2.6.1 (p. 72), explain the following initialization. Identify and fix any problems.
```cpp
Sales_data item = {"978-0590353403", 25, 15.99};
```

A class is an aggregate if

- All of its data members are `public`
- It does not define any constructors
- It has no in-class initializers
- It has no base classes or `virtual` functions

So it should be 

```cpp
struct Sales_data {
    std::string bookNo;
    unsigned units_sold;
    double revenue;
};
```
