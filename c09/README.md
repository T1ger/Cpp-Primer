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

## Exercise 9.19

> Rewrite the program from the previous exercise to use a `list`. List the changes you needed to make.

[code](ex9_19.cpp)

## Exercise 9.20

> Write a program to copy elements from a `list<int>` into two `deque`s. The even-valued elements should go into one `deque` and the odd ones into the other.

[code](ex9_20.cpp)

## Exercise 9.21

> Explain how the loop from page 345 that used the return from `insert` to add elements to a `list` would work if we inserted into a `vector` instead.

It is just the same, as the `insert` way is same as calling `push_front`

## Exercise 9.22

> Assuming `iv` is a `vector` of `int`s, what is wrong with the following program? How might you correct the problem(s)?
```cpp
vector<int>::iterator iter = iv.begin(), 
                       mid = iv.begin() + iv.size()/2; 
while (iter != mid) 
    if (*iter == some_val) iv.insert(iter, 2 * some_val);
```

- endless loop. `iter` will never equal `mid`
- `insert` will affect `iterator`, `mid` will be invalid.

## Exercise 9.23

> In the first program in this section on page 346, what would the values of `val`, `val2`, `val3`, and `val4` be if `c.size()` is `1`?

All same.

## Exercise 9.24

> Write a program that fetches the first element in a `vector` using `at`, the subscript operator, `front`, and `begin`. Test your program on an empty `vector`.

[code](ex9_24.cpp)

## Exercise 9.25

> In the program on page 349 that erased a range of elements, what happens if `elem1` and `elem2` are equal? What if `elem2` or both `elem1` and `elem2` are the off-the-end iterator?

1. nothing happened.
2. delete from elem1 to the end.
3. nothing happened too.

## Exercise 9.26

> Using the following definition of `ia`, copy `ia` into a `vector` and into a `list`. Use the single-iterator form of `erase` to remove the elements with odd values from your `list` and the even values from your `vector`.
```cpp
int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
```

[code](ex9_26.cpp)

## Exercise 9.27

> Write a program to find and remove the odd-valued elements in a `forward_list<int>`.

[code](ex9_27.cpp)

## Exercise 9.28

> Write a function that takes a `forward_list<string>` and two additional `string` arguments. The function should find the first `string` and insert the second immediately following the first. If the first `string` is not found, then insert the second `string` at the end of the list.

[code](ex9_28.cpp)

## Exercise 9.29

> Given that `vec` holds 25 elements, what does `vec.resize(100)` do? What if we next wrote `vec.resize(10)`?

adds 75 elements of value 0 to the back of vec and then erases 90 elements from the back of vec.

## Exercise 9.30

> What, if any, restrictions does using the version of `resize` that takes a single argument place on the element type?

We must supply an initializer or the element type must have a default constructor.

## Exercise 9.31

> The program on page 354 to remove even-valued elements and duplicate odd ones will not work on a `list` or `forward_list`. Why? Revise the program so that it works on these types as well.

[list](ex9_31_list.cpp) | [forward_list](ex9_31_forward_list.cpp)

## Exercise 9.32

> In the program onpage 354 would it be legal to write the call to `insert` as follows? If not, why not?
```cpp
iter = vi.insert(iter, *iter++);
```

No. The order of evaluation of arguments is unspecified. "As a result, after entering function insert, iter could be its original value or original value + 1 or even anything else, depending on how compiler implemented.

## Exercise 9.33

> In the final example in this section what would happen if we did not assign the result of `insert` to `begin`? Write a program that omits this assignment to see if your expectation was correct.

Crash, because the iterator is invalid after inserting.

Ref: [code](ex9_33.cpp)

## Exercise 9.34

> Assuming `vi` is a container of `int`s that includes even and odd values, predict the behavior of the following loop. After you’ve analyzed this loop, write a program to test whether your expectations were correct.
```cpp
iter = vi.begin(); 
while (iter != vi.end()) 
    if (*iter % 2)
        iter = vi.insert(iter, *iter); 
    ++iter;
```

`insert` inserts elements at the specified location in the container(before `iterator`). So endless loop.

## Exercise 9.35

> Explain the difference between a `vector`’s `capacity` and its `size`.

The `size` of a container is the number of elements it already holds; its `capacity` is how many elements it can hold before more space must be allocated.

## Exercise 9.36

> Can a container have a `capacity` less than its `size`?

No.

## Exercise 9.37

> Why don’t `list` or `array` have a `capacity` member?

`list` does not hold elements contiguously. `array` has the fixed size statically.

## Exercise 9.38

> Write a program to explore how `vector`s grow in the library you use.

[code](ex9_38.cpp)

## Exercise 9.39

> Explain what the following program fragment does:
```cpp
vector<string> svec; 
svec.reserve(1024); // reserve capacity to 1024
string word; 
while (cin >> word)
	svec.push_back(word); 
svec.resize(svec.size()+svec.size()/2); // after add new string, resize capacity to 1.5 * size()
```

## Exercise 9.40

> If the program in the previous exercise reads 256 words, what is its likely `capacity` after it is `resize`d? What if it reads 512? 1,000? 1,048?

read | size | capacity
-----|------|---------
256  |384   |1024
512  |768   |1024
1000 |1500  |2048
1048 |1572  |2048

## Exercise 9.41

> Write a program that initializes a `string` from a `vector<char>`.

[code](ex9_41.cpp)

## Exercise 9.42

> Given that you want to read a character at a time into a `string`, and you know that you need to read at least 100 characters, how might you improve the performance of your program?

Use `reserve(200)` to allocate enough space for this string.

## Exercise 9.43

> Write a function that takes three `string`s, `s`, `oldVal`, and `newVal`. Using iterators, and the `insert` and `erase` functions replace all instances of oldVal that appear in `s` by `newVal`. Test your function by using it to replace common abbreviations, such as “tho” by “though” and “thru” by “through”.

[code](ex9_43.cpp)

## Exercise 9.44

> Rewrite the previous function using an `index` and `replace`.

[code](ex9_44.cpp)

## Exercise 9.45

> Write a funtion that takes a `string` representing a name and two other `string`s representing a prefix, such as “Mr.” or “Ms.” and a suffix, such as “Jr.” or “III”. Using iterators and the `insert` and `append` functions, generate and return a new `string` with the suffix and prefix added to the given name.

[code](ex9_45.cpp)

## Exercise 9.46

> Rewrite the previous exercise using a position and length to manage the `string`s. This time use only the `insert` function.

[code](ex9_46.cpp)