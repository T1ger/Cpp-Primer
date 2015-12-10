## Exercise 5.1

> What is a null statement? When might you use a null statement?

A null statement is a single semicolon, which is also known as an empty statement.

A null statement is useful where the language requires a statement but the program's logic does not.

## Exercise 5.2

> What is a block? When might you might use a block?

A compound statement, usually referred to as a __block__, is a (possibly empty) sequence of statements and declarations surrounded by a pair of curly braces.

Compound statements are used when the language requires a single statement but the logic of our program needs more than one.

## Exercise 5.3

> Use the comma operator (§ 4.10, p. 157) to rewrite the while loop from § 1.4.1 (p. 11) so that it no longer requires a block. Explain whether this rewrite improves or diminishes the readability of this code.

[code](ex5_3.cpp)

diminishes the readability.

## Exercise 5.4

> Explain each of the following examples, and correct any problems you detect.
> (a) `while (string::iterator iter != s.end()) { /* ... */ }`
> (b) ```cpp
> while (bool status = find(word)) { /* ... */ }
> if (!status) { /* ... */ }
> ```

(a) ```cpp
string::iterator iter = s.begin();
while (iter != s.end()) { /* ... */ }
```

(b) `status` is only declared inside the scope of `while` statement.

## Exercise 5.5

> Using an `if-else` statement, write your own version of the program to generate the letter grade from a numeric grade.

[code](ex5_5.cpp)

## Exercise 5.6

> Rewrite your grading program to use the conditional operator(§4.7, p.151) in place of the `if-else` statement.

[code](ex5_6.cpp)

## Exercise 5.7

> Correct the errors in each of the following code fragments:
> 