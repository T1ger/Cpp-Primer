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

## Exercise 3.6

> Use a range `for` to change all the characters in a `string` to X

[code](ex3_6.cpp)

## Exercise 3.7

> What would happen if you define the loop control variable in the previous exercise as type `char`? Predict the results and then change your program to use a char to see if you were right.

It will change every c to 'X', but this won't affect the original string

## Exercise 3.8

> Rewrite the program in the first exercise, first using a `while` and again using a traditional `for` loop. Which of the three approaches do you prefer and why?

I prefer range loop in this situation.

## Exercise 3.9

> What does the following program do? Is it valid? If not, why not?
```cpp
string s;
cout << s[0] << endl;
```

Error, s is empty string, s[0] is undefined

## Exercise 3.10

> Write a program that reads a string of characters including punctuation and writes what was read but with the punctuation removed.

[code](ex3_10.cpp)

## Exercise 3.11

> Is the following range `for` legal? If so, what is the type of `c`?
```cpp
const string s = "Keep out!";
for (auto &c : s) { /* ... */}
```

legal if code doesn't change the value of c, c is a `const char&`.

## Exercise 3.12

> Which, if any, of the following vector definitions are in error? For those that are legal, explain what the definition does. For those that are not legal, explain why they are illegal.

```cpp
vector<vector<int>> ivec;         // legal(start from c++11), vectors.
vector<string> svec = ivec;       // illegal, different type.
vector<string> svec(10, "null");  // legal, vector have 10 strings: "null".
```

## Exercise 3.13

> How many elements are there in each of the following vectors? What are the values of the elements?

```cpp
vector<int> v1;                // size:0,  no values.
vector<int> v2(10);            // size:10, value:0
vector<int> v3(10, 42);        // size:10, value:42
vector<int> v4{ 10 };          // size:1,  value:10
vector<int> v5{ 10, 42 };      // size:2,  value:10, 42
vector<string> v6{ 10 };       // size:10, value:""
vector<string> v7{ 10, "hi" }; // size:10, value:"hi"
```

## Exercise 3.14

> Write a program to read a sequence of `int`s from `cin` and store those values in a `vector`.

[code](ex3_14.cpp)

## Exercise 3.15

> Repeat the previous program but read `string`s this time.

[code](ex3_15.cpp)

## Exercise 3.16

> Write a program to print the size and contents of the `vector`s from _Exercise 3.13_. Check whether your answers to that exercise were correct. If not, restudy $3.3.1(p.97) until you understand why you were wrong.

[code](ex3_16.cpp)

## Exercise 3.17

> Read a sequence of words from `cin` and store the values a `vector`. After you've read all the words, process the `vector` and change each word to uppercase. Print the transformed elements, eight word to a line.

[code](ex3_17.cpp)

## Exercise 3.18

> Is the following program legal? If not, how might you fix it?
```cpp
vector<int> ivec;
ivec[0] = 42;
```

ivec[0] is not defined, you can not assign a value to it.
To fix it, try:

```cpp
vector<int> ivec = { 42 };
```

## Exercise 3.19

> List three ways to define a `vector` and give it ten elements, each with the value 42. Indicate whether there is a preferred way to do so and why.

```cpp
vector<int> x = (10, 42); // first way
vector<int> y = {42, 42, 42, 42, 42, 42, 42, 42, 42, 42}; // second way
vector<int> z;
for (int i = 0; i != 10; i++) {
    z.push_back(42);
} // third way
```

## Exercise 3.20

> Read a set of integers into a `vector`. Print the sum of each pair of adjacent elements. Change your program so that it prints the sum of the first and last elements, followed by the sum of the second and second-to-last, and so on.

[code](ex3_20.cpp)

## Exercise 3.21

> Redo the first exercise from $3.3.3(p.105) using iterators.

[code](ex3_21.cpp)

## Exercise 3.22

> Revise the loop that printed the first paragraph in `text` to instead change the elements in `text` that correspond to the first paragraph to all uppercase. After you've updated `text`, print its contents.

[code](ex3_22.cpp)

## Exercise 3.23

> Write a program to create a `vector` with ten `int` elements. Using an iterator, assign each element a value that is twice its current value. Test your program by printing the `vector`.

[code](ex3_23.cpp)

## Exercise 3.24

> Redo the last exercise from $3.3.3 (p. 105) using iterators.

[code](ex3_24.cpp)

## Exercise 3.25

> Rewirte the grade clustering program from $3.3.3 (p. 104) using iterators instead of subscripts.

[code](ex3_25.cpp)

## Exercise 3.26

> In the binary search program on page 112, why did we write `mid=beg+(end-beg)/2;` instead of `mid=(beg+end) /2;`?

(beg + end) means nothing.

## Exercise 3.27

>