## Exercise 3.1

> Rewrite the exercises from $1.4.1(p.13) and $2.6.2(p.76) with appropriate using declarations

[code ex1.10 reviewed](ex3_1_1.cpp) 

[code ex2.41 reviewed](ex3_1_2.cpp)

## Exercise 3.2

> Write a program to read the standard input a line at a time. Modify your program to read a word at a time.

[code read line](ex3_2_1.cpp)

[code read word](ex3_2_2.cpp)

## Exercise 3.3

> Explain how whitespace characters are handled in the `string` input operator and in the `getline` function

- For code like `is >> s`, input is separated by whitespaces while reading into string s.
- For code like `getline(is, s)` input is separated by newline `\n` while reading into string s. Other whitespaces are ignored.
- For code like `getline(is, s, delim)` input is separated by delim while reading into string s. All whitespaces are ignored.

## Exercise 3.4

> Write a program to read two `string`s and report whether the `string`s are equal. If not, report which of the two is larger. Now, change the program to report whether the `string`s have the same length, and if not, report which is longer.

[code compare string](ex3_4_1.cpp)

[code compare string length](ex3_4_2.cpp)

## Exercise 3.5

> Write a program to read `string`s from the standard input, concatenating what is read into one large `string`. Print the concatenated `string`. Next, change the program to seperate adjacent input `string`s by a space.

[code without space](ex3_5_1.cpp)

[code with space](ex3_5_2.cpp)