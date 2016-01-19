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