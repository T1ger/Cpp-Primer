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

