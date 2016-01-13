## Exercise 8.1

> Write a function that takes and returns an `istream&`. The function should read the stream until it hits end-of-file. The function should print what it reads to the standard output. Reset the stream so that it is valid before returning the stream.

[code](ex8_1.cpp)

## Exercise 8.2

> Test your function by calling it, passing cin as an argument.

[code](ex8_1.cpp)

## Exercise 8.3

> What causes the following `while` to terminate?
```cpp
while (cin >> i) /* ... */
```

Put `cin` in an error state, such as `eofbit`, `failbit`, `badbit`.

## Exercise 8.4

> Write a function to open a file for input and read its contents into a `vector` of `string`s, storing each line as a separate element in the vector.

[code](ex8_4.cpp)

## Exercise 8.5

> Rewrite the previous program to store each word in a separate element.

[code](ex8_5.cpp)

## Exercise 8.6

> Rewrite the bookstore program from § 7.1.1 (p. 256) to read its transactions from a file. Pass the name of the file as an argument to `main` (§ 6.2.5, p. 218).

[code](ex8_6.cpp)

## Exercise 8.7

> Revise the bookstore program from the previous section to write its output to a file. Pass the name of that file as a second argument to main.

[code](ex8_7.cpp)

## Exercise 8.8

> Revise the program from the previous exercise to append its output to its given file. Run the program on the same output file at least twice to ensure that the data are preserved.

[code](ex8_8.cpp)

## Exercise 8.9

> Use the function you wrote for the first exercise in § 8.1.2 (p. 314) to print the contents of an `istringstream` object.

[code](ex8_9.cpp)

## Exercise 8.10

> Write a program to store each line from a file in a `vector<string>`. Now use an `istringstream` to read each element from the `vector` a word at a time.

[code](ex8_10.cpp)

## Exercise 8.11

> The program in this section defined its `istringstream` object inside the outer `while` loop. What changes would you need to make if `record` were defined outside that loop? Rewrite the program, moving the definition of `record` outside the `while`, and see whether you thought of all the changes that are needed.

Need clear `istringsteam` in each loop

## Exercise 8.12

> Why didn’t we use in-class initializers in `PersonInfo`?

Cause we need a __aggregate class__ here. so it should have no in-class initializers.

## Exercise 8.13

> Rewrite the phone number program from this section to read from a named file rather than from `cin`.

[code](ex8_13.cpp)

## Exercise 8.14

> Why did we declare `entry` and `nums` as `const auto &`?

- cause they are all class type, not the built-in type. so reference more effective.
- output shouldn't change their values. so we added the const.