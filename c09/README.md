## Exercise 9.1

> Which is the most appropriate—a `vector`, a `deque`, or a `list`—for the following program tasks? Explain the rationale for your choice. If there is no reason to prefer one or another container, explain why not.
> (a) Read a fixed number of words, inserting them in the container alphabetically as they are entered. We’ll see in the next chapter that associative containers are better suited to this problem.

`list`. inserting or deleting elements other than at the back may be slow for `vector`; `deque` is good for fast insert/delete at front or back.

> (b) Read an unknown number of words. Always insert new words at the back. Remove the next value from the front.

`deque`. If the program needs to insert or delete elements at the front and the back, but not in the middle.

> (c) Read an unknown number of integers from a file. Sort the numbers and then print them to standard output.

`vector`. If your program has lots of small elements and space overhead matters, don’t use `list` or `forward_list`.

## Exercise 9.2

> Define a `list` that holds elements that are `deque`s that hold `int`s.

```cpp
std::list<std::deque<int> > l;
```

## Exercise 9.3

> What are the constraints on the iterators that form iterator ranges?

The iterators `begin` and `end` must refer to the same container. The iterator `end` may be equal to `begin` but must not refer to an element before the one denoted by `begin`

## Exercise 9.4

> Write a function that takes a pair of iterators to a `vector<int>` and an `int` value. Look for that value in the range and return a `bool` indicating whether it was found.

```cpp
bool contain_int(std::vector<int>::const_iterator b, std::vector<int>::const_iterator e, int v) {
    for (int i = *b; b != e; ++b) {
        if (i == v) return true;
    }
    return false;
}
```

## Exercise 9.5

> Rewrite the previous program to return an iterator to the requested element. Note that the program must handle the case where the element is not found.

```cpp
auto find_int(std::vector<int>::const_iterator b, std::vector<int>::const_iterator e, int v) {
    for (int i = *b; b != e; ++b) {
        if (i == v) return b;
    }
    return e;
}
```

## Exercise 9.6

> What is wrong with the following program? How might you correct it?
```cpp
list<int> lst1; 
list<int>::iterator iter1 = lst1.begin(), 
                    iter2 = lst1.end(); 
while (iter1 < iter2) /* ... */
```

`iter1 != iter2`

## Exercise 9.7

> What type should be used as the index into a `vector` of `int`s?

```cpp
std::vector<int>::size_type
```

## Exercise 9.8

> What type should be used to read elements in a `list` of `string`s? To write them?

```cpp
std::list<std::string> const_iterator; // read
std::list<std::string> iterator; // write
```

## Exercise 9.9

> What is the difference between the `begin` and `cbegin` functions?

`begin` get the container's `iterator` type and `cbegin` get the container's `const_iterator` type.

## Exercise 9.10

> What are the types of the following four objects?
```cpp
vector<int> v1; 
const vector<int> v2; 
auto it1 = v1.begin();
auto it2 = v2.begin(); 
auto it3 = v1.cbegin(), it4 = v2.cbegin();
```

```cpp
it1; // vector<int>::iterator
it2; // vector<int>::const_iterator
it3; // vector<int>::const_iterator
it4; // vector<int>::const_iterator
```

## Exercise 9.11

> Show an example of each of the six ways to create and initialize a `vector`. Explain what values each vector contains.

```cpp
vector<T> v;
vector<T> v(v_copy);
vector<T> v(10);
vector<T> v(10, <T>);
vector<T> v{, , , ...};
vector<T> v(v_copy.begin(), v_copy.end());
```

## Exercise 9.12

> Explain the differences between the constructor that takes a container to copy and the constructor that takes two iterators.

- The constructor that takes another container as an argument (excepting array) assumes the container type and element type of both containers are identical. It will also copy all the elements of the received container into the new one.
- The constructor that takes two iterators as arguments does not require the container types to be identical. Moreover, the element types in the new and original containers can differ as long as it is possible to convert the elements we’re copying to the element type of the container we are initializing. It will also copy only the object delimited by the received iterators.

## Exercise 9.13

> How would you initialize a `vector<double>` from a `list<int>`? From a `vector<int>`? Write code to check your answers.

```cpp
list<int> l_int;
vector<int> v_int;
vector<double> v_double(l_int.begin(), l_int.end());
vector<double> v_double(v_int.begin(), v_int.end());

```

## Exercise 9.14

> Write a program to assign the elements from a `list` of `char*` pointers to C-style character strings to a `vector` of `string`s.

[code](ex9_14.cpp)

## Exercise 9.15

> Write a program to determine whether two `vector<int>`s are equal.

[code](ex9_15.cpp)

## Exercise 9.16

> Repeat the previous program, but compare elements in a `list<int>` to a `vector<int>`.

```cpp
list<int> li;
vector<int> vi(li.cbegin(), li.cend()) == ...
```

## Exercise 9.17

> Assuming `c1` and `c2` are containers, what (if any) constraints does the following usage place on the types of `c1` and `c2`?
```cpp
if (c1 < c2)
```

The containers must be identical and hold the same type.

The type held must support relational operation

## Exercise 9.18

> Write a program to read a sequence of `string`s from the standard input into a `deque`. Use iterators to write a loop to print the elements in the `deque`.

[code](ex9_18.cpp)