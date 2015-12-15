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

> Write a function to return the absolute value of its argument.[code](ex6.5.cpp)

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

## Exercise 6,7

> Write a function that returns 0 when it is first called and then generates numbers in sequence each time it is called again.

```cpp
size_t generate() {
	static size_t count = 0;
	return count++; 
}
```