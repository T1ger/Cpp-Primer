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

[code](ex11_14.cpp)

## Exercise 11.15

> What are the `mapped_type`, `value_type` of a `map` from `int` to `vector<int>`?

`map<int, vector<int>>`

so `mapped_type` is `vector<int>` and `value_type` is `pair<const int, vector<int>>`

## Exercise 11.16

> Using a `map` iterator write an expression that assigns a value to an element.

[code](ex11_16.cpp)

## Exercise 11.17

> Assuming `c` is a `multiset` of `string`s and `v` is a `vector` of `string`s, explain the following calls. Indicate whether each call is legal:
```cpp
copy(v.begin(), v.end(), inserter(c, c.end())); // legal
copy(v.begin(), v.end(), back_inserter(c)); // no push_back in set
copy(c.begin(), c.end(), inserter(v, v.end())); // legal
copy(c.begin(), c.end(), back_inserter(v)); // legal
```

## Exercise 11.18

> Write the type of `map_it` from the loop on page 430 without using `auto` or `decltype`.

`map<string, size_t>::const_iterator`

## Exercise 11.19

> Define a variable that you initialize by calling `begin()` on the `multiset` named `bookstore` from § 11.2.2 (p. 425). Write the variable’s type without using `auto` or `decltype`.

```cpp
multiset<Sales_data, decltype(compareIsbn)*>::iterator it = bookstore.begin();
```

## Exercise 11.20

> Rewrite the word-counting program from § 11.1 (p. 421) to use `insert` instead of subscripting. Which program do you think is easier to write and read? Explain your reasoning.

[code](ex11_20.cpp)

I prefer subscripting way.


## Exercise 11.21

> Assuming `word_count` is a `map` from `string` to `size_t` and word is a `string`, explain the following loop:
```cpp
while (cin >> word) 
    ++word_count.insert({word, 0}).first->second;
```

equals:

```cpp
++( ( (word_count.insert({word, 0}) ).first )->second );
```

## Exercise 11.22

> Given a `map<string, vector<int>>`, write the types used as an argument and as the return value for the version of `insert` that inserts one element.

```cpp
pair<string, vector<int>> // as argument
pair<map<string, vector<int>>::iterator, bool> // as return
```

## Exercise 11.23

> Rewrite the `map` that stored `vector`s of children’s names with a key that is the family last name for the exercises in § 11.2.1 (p. 424) to use a `multimap`.

```cpp
std::multimap<string, string> families;
```

## Exercise 11.24

> What does the following program do?
```cpp
map<int, int> m; 
m[0] = 1;
```

check if key = 0 exists in the map, if true, change its value to 1, else, add pair {0, 1} into the map

## Exercise 11.25

> Contrast the following program with the one in the previous exercise
```cpp
vector<int> v; 
v[0] = 1;
``` 

if index 0 exist in v, change its value to 1, if not, fatal error.

## Exercise 11.26

> What type can be used to subscript a `map`? What type does the subscript operator return? Give a concrete example—that is, define a `map` and then write the types that can be used to subscript the `map` and the type that would be returned from the subscript operator.

any type can be used to subscript a `map`

it returns the `map`'s mapped_type

[code](ex11_26.cpp)
(need review!)

## Exercise 11.27

> What kinds of problems would you use `count` to solve? When might you use `find` instead?

For the containers that can hold only unique keys, it probably doesn’t matter whether we use `find` or `count`. However, for the containers with multiple keys, `count` has to do more work: If the element is present, it still has to `count` how many elements have the same key. If we don’t need the count, it’s best to use `find`

## Exercise 11.28

> Define and initialize a variable to hold the result of calling `find` on a `map` from `string` to `vector` of `int`.

```cpp
map<string, vector<int>> m;
map<string, vector<int>>::iterator iter = m.find(...);
```


## Exercise 11.29

> What do `upper_bound`, `lower_bound`, and `equal_range` return when you pass them a key that is not in the container?

Both will refer to the point at which this key can be inserted while maintaining the container order.

## Exercise 11.30

> Explain the meaning of the operand `pos.first->second` used in the output expression of the final program in this section.

`pos` is a map iterator, `pos.first` get the key, second point to the value. 

## Exercise 11.31

> Write a program that defines a `multimap` of authors and their works. Use find to find an element in the `multimap` and `erase` that element. Be sure your program works correctly if the element you look for is not in the `map`.

[code](ex11_31.cpp)

## Exercise 11.32

> Using the `multimap` from the previous exercise, write a program to print the list of authors and their works alphabetically.

[code](ex11_32.cpp)