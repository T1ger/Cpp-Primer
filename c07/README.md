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