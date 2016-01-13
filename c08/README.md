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