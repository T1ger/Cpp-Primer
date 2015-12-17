## Exercise 6.1

> What is the difference between a parameter and an argument?

Arguments are the initializers for a function's parameters.

## Exercise 6.2

> Indicate which of the following functions are in error and why. Suggest how you might correct the problems.
```cpp
(a) int f() { 
		string s;		// ... 
		return s;}(b) f2(int i) { /* ... */ }(c) int calc(int v1, int v1) /* ... */ }(d) double square(double x) return x * x;
```
(a) return type should be `int`

(b) need to indicate the return type

(c) lack `{`

(d) lack `{` and `}`

## Exercise 6.3

> Write and test your own version of fact.

[code](ex6_3.cpp)

## Exercise 6.4

> Write a function that interacts with the user, asking for a number and generating the factorial of that number. Call this function from main.

[code](ex6_4.cpp)

## Exercise 6.5

> Write a function to return the absolute value of its argument.[code](ex6_5.cpp)

## Exercise 6.6

> Explain the differences between a parameter, a local variable, and a local `static` variable. Give an example of a function in which each might be useful.

Parameter: local variables declared inside the __function parameter list__

Local variable: variables defined inside a __block__

Local `static` variable: is initialized before the first time execution passes through the object’s definition. Local `static`s are not destroyed when a function ends; they are destroyed when the program terminates.

```cpp
// example
size_t count_add(int n)       // n is a parameter.
{
    static size_t ctr = 0;    // ctr is a static variable.
    ctr += n;
    return ctr;
}

int main()
{
    for (size_t i = 0; i != 10; ++i)  // i is a local variable.
      cout << count_add(i) << endl;

    return 0;
}
```

## Exercise 6.7

> Write a function that returns 0 when it is first called and then generates numbers in sequence each time it is called again.

```cpp
size_t generate() {
	static size_t count = 0;
	return count++; 
}
```

## Exercise 6.8

> Write a header file named Chapter6.h that contains declarations for the functions you wrote for the exercises in § 6.1 (p. 205).

[code](Chapter6.h)

## Exercise 6.9

> Write your own versions of the `fact.cc` and `factMain.cc` files. These files should include your `Chapter6.h` from the exercises in the previous section. Use these files to understand how your compiler supports separate compilation.

[fact.cc](fact.cc)

[factMain.cc](factMain.cc)

## Exercise 6.10

> Using pointers, write a function to swap the values of two`int`s. Test the function by calling it and printing the swapped values.

[code](ex6_10.cpp)

## Exercise 6.11

> Write and test your own version of `reset` that takes areference.

[code](ex6_11.cpp)

## Exercise 6.12

> Rewrite the program from exercise 6.10 in § 6.2.1 (p. 210) to use references instead of pointers to swap the value of two `int`s. Which version do you think would be easier to use and why?

[code](ex6_12.cpp)

I prefer reference way which is more intuitive in my opinon.

## Exercise 6.13

> Assuming `T` is the name of a type, explain the difference between a function declared as `void f(T)` and `void f(T&)`.

`f(T)` copy parameter

`f(T&)` reference parameter

## Exercise 6.14

> Give an example of when a parameter should be a reference type. Give an example of when a parameter should not be a reference.

[reference type](ex6_11.cpp)

[should not be a reference](ex6_3.cpp)

## Exercise 6.15

> Explain the rationale for the type of each of `find_char`'s parameters. In particular, why is `s` a reference to `const` but `occurs` is a plain reference? Why are these parameters references, but the `char` parameter `c` is not? What would happen if we made `s` a plain reference? What if we made `occurs` a reference to `const`?

`s` should not be changed in the function. But `occurs`'s result must be calculated by the function.

## Exercise 6.16

> The following function, although leagl, is less useful than it might be. Identify and correct the limitation on this function:
```cpp
bool is_empty(string& s) { return s.empty(); }
```

This function will not change the argument, so `const` should be added, or the function could not be used with `const` string or in a `const` function. Should be: 
```cpp
bool is_empty(const string& s) { return s.empty(); }
```

## Exercise 6.17

> Write a function to determine whether a `string` contains any capital letters. Write a function to change a `string` to all lowercase. Do the parameters you used in these functions have the same type? If so, why? If not, why not?

[code](ex6_17.cpp)

## Exercise 6.18

> Write declarations for each of the following functions. When you write these declarations, use the name of the function to indicate what the function does.

> (a) A function named `compare` that returns a `bool` and has two parameters that are references to a class named `matrix`.

```cpp
bool compare(const matrix &a, const matrix &b);
```

> (b) A function named `change_val` that returns a `vector<int>` iterator and takes two parameters: One is an `int` and the other is an iterator for a `vector<int>`.

```cpp
vector<int>::iterator change_val(int i, vector<int>::iterator iter); // not sure const is needed or not for vector
```

## Exercise 6.19

> Given the following declarations, determine which calls are legal and which are illegal. For those that are illegal, explain why.
```cpp
double calc(double);int count(const string &, char);int sum(vector<int>::iterator, vector<int>::iterator, int);vector<int> vec(10);
```

> (a) `calc(23.4, 55.1);`

`calc` only accept one parameter.

> (b) `count("abcda", 'a');`

legal

> (c) `calc(66);`

legal, but `66` will convert to `double`

> (d) `sum(vec.begin(), vec.end(), 3.8);`

legal, but `3.8` will truncate to `3` which is a int

## Exercise 6.20

> When should reference parameters be references to `const`? What happens if we make a parameter a plain reference when it could be a reference to `const`?

We should use `const` when possible. Plain reference might change the reference value.

## Exercise 6.21

> Write a function that takes an `int` and a pointer to an `int` and returns the larger of the `int` value or the value to which the pointer points. What type should you use for the pointer?

```cpp
int compare(const int a, const int* b);
```

## Exercise 6.22

> Write a function to swap two `int` pointers.

[code](ex6_22.cpp)

## Exercise 6.23

> Write your own versions of each of the `print` functions presented in this section. Call each of these functions to print `i` and `j` defined as follows:```cppint i = 0, j[2] = {0, 1};
```

[code](ex6_23.cpp)

## Exercise 6.24

> Explain the behavior of the following function. If there are problems in the code, explain what they are and how you might fix them.
```cpp
void print(const int ia[10]){ 
	for (size_t i = 0; i != 10; ++i) 
		cout << ia[i] << endl;
}
```

Refer to [Confused about array parameters](http://stackoverflow.com/questions/26530659/confused-about-array-parameters)

## Exercise 6.25

> Write a `main` function that takes two arguments. Concatenate the supplied arguments and print the resulting `string`.

[code](ex6_25.cpp)

## Exercise 6.26

> Write a program that accepts the options presented in thissection. Print the values of the arguments passed to `main`.

[code](ex6_25.cpp)