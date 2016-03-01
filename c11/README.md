## Exercise 11.1

> Describe the differences between a map and a vector.

`map` is an associative container, `vector` is a sequential container.

## Exercise 11.2

> Give an example of when each of list, vector, deque, map, and set might be most useful.

`list`: double-linked list

`vector`: dynamic array

`deque`: refer to [link](http://stackoverflow.com/questions/3880254/why-do-we-need-deque-data-structures-in-the-real-world)

`map`: dictionary

`set`: to keep elements sorted and unique

## Exercise 11.3

> Write your own version of the word-counting program.

[code](ex11_3.cpp)

## Exercise 11.4

> Extend your program to ignore case and punctuation. For example, “example.” “example,” and “Example” should all increment the same counter.

[code](ex11_4.cpp)

## Exercise 11.5

> Explain the difference between a map and a set. When might you use one or the other?

refer to [link](http://stackoverflow.com/questions/16286714/advantages-of-stdset-vs-vectors-or-maps)

## Exercise 11.6

> Explain the difference between a set and a list. When might you use one or the other?

refer to [link](http://stackoverflow.com/questions/2302681/c-stl-list-vs-set)

## Exercise 11.7

> Define a `map` for which the key is the family’s last name and the value is a `vector` of the children’s names. Write code to add new families and to add new children to an existing family.

[code](ex11_7.cpp)

## Exercise 11.8

> Write a program that stores the excluded words in a `vector` instead of in a `set`. What are the advantages to using a `set`?

refer to [link](http://stackoverflow.com/questions/8686725/what-is-the-difference-between-stdset-and-stdvector)

## Exercise 11.9

> Define a `map` that associates words with a `list` of line numbers on which the word might occur.

`std::map<std::string, std::list<std::size_t>> m;`

## Exercise 11.10

> Could we define a `map` from `vector<int>::iterator` to `int`? What about from `list<int>::iterator` to `int`? In each case, if not, why not?

[code](ex11_10.cpp)

need review!

## Exercise 11.11

> Redefine `bookstore` without using `decltype`.

[code](ex11_11.cpp)

## Exercise 11.12

> Write a program to read a sequence of `string`s and `int`s, storing each into a `pair`. Store the `pair`s in a `vector`.

[code](ex11_12.cpp)

## Exercise 11.13

> There are at least three ways to create the pairs in the program for the previous exercise. Write three versions of that program, creating the pairs in each way. Explain which form you think is easiest to write and understand, and why.

[code](ex11_12.cpp)

## Exercise 11.14

> Extend the `map` of children to their family name that you wrote for the exercises in § 11.2.1 (p. 424) by having the `vector` store a `pair` that holds a child’s name and birthday.