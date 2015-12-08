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