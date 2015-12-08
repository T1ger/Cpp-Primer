## Exercise 4.1

> What is the value returned by 5 + 10 * 20 / 2

105

## Exercise 4.2

> Using Table 4.12 (p.166), parenthesize the following expressions to indicate the order in which the operands are grouped:

(a)
```cpp
* (vec.begin())
```

(b)
```cpp
(* (vec.begin())) + 1
```

## Exercise 4.3

> Order of evaluation for most of the binary operators is left undefined to give the compiler opportunities for optimization. This strategy presents a trade-off between efficient code generation and potential pitfalls in the use of the language by the programmer. Do you consider that an acceptable trade-off? Why or why not?

No.

## Exercise 4.4

> Parenthesize the following expression to show how it is evaluated. Test your answer by compiling the expression (without parentheses) and printing its results.
> `12 / 3 * 4 + 5 * 15 + 24 % 4 / 2`

`((12 / 3) * 4) + (5 * 15) + ((24 % 4) / 2)`

result is 16+75+0 = 91

## Exercise 4.5

> Determine the result of the following expressions.

(a) ` -30 * 3 + 21 / 5 `

-90+4 = -86

(b) ` -30 + 3 * 21 / 5 `

-30 + 63 / 5 = -18

(c) ` 30 / 3 * 21 % 5 `

0

(d) ` -30 / 3 * 21 % 4 `

-2

## Exercise 4.6

> Write an expression to determine whether an `int` value is even or odd.

`i % 2` for i >= 0

`i & 0x1` or `i & 1` for all `int`

## Exercise 4.7

> What does overflow mean? Show three expressions that will overflow.

Overflow happens when a value is computed that is outside the range of values that the type can represent.

```cpp
short sv = 32767;
sv += 1;

unsigned uv = 0;
uv -= 1;

unsigned short usv = 65535;
usv += 1;
```

## Exercise 4.8

> Explain when operands are evaluated in the logical _AND_, logical _OR_, and equality operators.

- `&&` and `||` always evaluate their left operand before the right.
- The right side of an `&&` is evaluated _if and only if_ the left side is __true__.
- The right side of an `||` is evaluated _if and only if_ the left side is __false__.
- `==` always evaluate both side

## Exercise 4.9

> Explain the behavior of the condition in the following if:
```cpp
const char *cp = "Hello World";
if (cp && *cp) 
```

check the pointer cp and the string cp points to are both not 0. True.

## Exercise 4.10

> Write the condition for a while loop that would read ints from the standard input and stop when the value read is equal to 42.

```cpp
int i;
while (std::cin >> i && i != 42)
```

## Exercise 4.11

> Write an expression that tests four values, a, b, c, and d, and ensures that a is greater than b, which is greater than c, which is greater than d.

```cpp
if (a > b && b > c && c > d)
```

## Exercise 4.12

> Assuming i, j, and k are all ints, explain what i != j < k means.

~~first check if `i` equals `j`, get `0` or `1`, the compare with `k`~~

`i != j < k` equals `i != (j < k)`

## Exercise 4.13

> What are the values of `i` and `d` after each assignment?
> `int i; double d;`

(a) `d = i = 3.5;`

d = 3.0, i = 3

(b) `i = d = 3.5;`

i = 3, d = 3.5

## Exercise 4.14

> Explain what happens in each of the if tests:

```cpp
if (42 = i)   // error: literal is rvalue
if (i = 42)   // true.
```

## Exercise 4.15

> The following assignment is illegal. Why? How would you correct it?
```cpp
double dval; int ival; int *pi;
dval = ival = pi = 0;
```

pointer to int and int are not convertable.

```cpp
dval = ival = 0;
pi = 0;
```

## Exercise 4.16

> Although the following are legal, they probably do not behave as the programmer expects. Why? Rewrite the expressions as you think they should be.
```cpp
if (p = getPtr() != 0)
if (i = 1024)
```

First one, `=` has low precedence, should be `if ((p = getPtr()) != 0)`

Second one, should be `if (i == 1024)`

## Exercise 4.17

> Explain the difference between prefix and postfix increment.

The prefix operators return the object itself as an lvalue.
The postfix operators return a copy of the object's original value as an rvalue.

## Exercise 4.18

> What would happen if the `whlie` loop on page 148 that prints the elements from a `vector` used the prefix increment operator?

~~`*++pbeg` return the pbeg advanced pointed value~~

It will print elements starting from second, at last print the dereference `v.end()`, which is undefined.

## Exercise 4.19

> Given that ptr points to an int, that vec is a vector, and that ival is an int, explain the behavior of each of these expressions. Which, if any, are likely to be incorrect? Why? How might each be corrected?

```cpp
ptr != 0 && *ptr++; // check ptr is not a nullptr, then check ptr original value and advance ptr

ival++ && ival; // check ival and ival + 1 whether equal zero

vec[ival++] <= vec[ival]; // error. undefine behavior.
```
See also [order of evaluation](http://en.cppreference.com/w/cpp/language/eval_order)

## Exercise 4.20

> Assuming that `iter` is a `vector<string>::iterator`, indicate which, if any, of the following expressions are legal. Explain the behavior of the legal expressions and why those that aren’t legal are in error.

```cpp
*iter++; // legal, return *iter, then advance iter
(*iter)++; // illegal, *iter is string
*iter.empty(); // illegal, iter is pointer which does not apply empty(), should be iter->empty()
iter->empty(); // legal, check *iter is empty or not
++*iter; // illegal, *iter is string
iter++->empty(); // legal, check original *iter is empty or not
```