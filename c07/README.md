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