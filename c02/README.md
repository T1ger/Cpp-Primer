## Exercise 2.1

> What are the differences between int, long, long long, and short? Between an unsigned and a signed type? Between a float and a double?

- The language guarantees that `int` will be at least as large as `short` (16 bits), `long` at least 32 bits, `long long` at least 64 bits.

- A `signed` type represents negative or positive numbers(including zero); An `unsigned` type represents only value greater than or equal to zero.

- Typically, `float` is prepresented in one word(32 bits), `double` in two words(64 bits), and `long doubles` in either three or four words(96 or 128 bits)

__Deciding which type to use__

- Use an unsigned type when you know that the values cannot be negative.
- Use `int` for integer arithmetic. `short` is usually too small and, in practice, `long` often has the same size as `int`. If your data values are larger than the minimum guaranteed size of an `int`, then use `long long`.
- Do not use plain `char` or `bool` in arithmetic expressions. Use them _only_ to hold characters or truth values.
- Use `double` for floating-point computations; `float` usually does not have enough precision, and the cost of double-precision calculations versus single-precision is negligible.

## Exercise 2.2

> To calculate a mortgage payment, what types would you use for the rate, principal, and payment? Explain why you selected each type.

use `double`

## Exercise 2.3 

> What output will the following code produce?
>
	unsigned u = 10, u2 = 42;
	std::cout << u2 - u << std::endl;
	std::cout << u - u2 << std::endl;
	int i = 10, i2 = 42;
	std::cout << i2 - i << std::endl;
	std::cout << i - i2 << std::endl;
	std::cout << i - u << std::endl;
	std::cout << u - i << std::endl;

32

2^32 - 32 = 4294967264

32

-32

0

0

## Exercise 2.4

> Write a program to check whether your predictions were correct. If not, study this section until you understand what the problem is.

## Exercise 2.5

> Determine the type of each of the following literals. Explain the differences among the literals in each of the four examples:
- (a) 'a', L'a', "a", L"a"
- (b) 10, 10u, 10L, 10uL, 012, 0xC
- (c) 3.14, 3.14f, 3.14L
- (d) 10, 10u, 10., 10e-2

(a) character literal, wide character, string literal, ?
(b) decimal, unsigned decimal, long decimal, unsigned long decimal, octal, hexadecimal
(c) double, float, long double
(d) decimal, unsigned decimal, double, double

## Exercise 2.6

> What, if any, are the differences between the following definitions:
>
	int month = 9, day = 7;
	int month = 09, day = 07;

## Exercise 2.7

> What values do these literals represent? What type does each have?
- (a) "Who goes with F\145rgus?\012"
- (b) 3.14e1L
- (c) 1024f
- (d) 3.14L

[ASCII Table](http://www.asciitable.com)

## Exercise 2.8

> Using escape sequences, write a program to print 2M followed by a newline. Modify the program to print 2, then a tab, then an M, followed by a newline.

[code](ex2_8.cpp)

## Exercise 2.9

> Explain the following definitions. For those that are illegal, explain what’s wrong and how to correct it.
(a) std::cin >> int input_value;
(b) int i = { 3.14 };
(c) double salary = wage = 9999.99;
(d) int i = 3.14;

(a): error
(b): error
(c): error, wage is not defined
(d): correct but will be truncated

## Exercise 2.10

> What are the initial values, if any, of each of the following variables?
	
	std::string global_str;
	int global_int;
	int main()
	{
    	int local_int;
    	std::string local_str;
	}
	
Uninitialized objects of built-in type defined inside a function body have a undefined value. Objects of class type that we do not explicitly inititalize have a value that is defined by class.