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

