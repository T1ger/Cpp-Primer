## Exercise 10.1

> The `algorithm` header defines a function named `count` that, like `find`, takes a pair of iterators and a value. `count` returns a count of how often that value appears. Read a sequence of `int`s into a `vector` and print the `count` of how many elements have a given value.

[code](ex10_1.cpp)

## Exercise 10.2

> Repeat the previous program, but read values into a `list` of `string`s.

[code](ex10_2.cpp)

## Exercise 10.3

> Use `accumulate` to sum the elements in a `vector<int>`.

[code](ex10_3.cpp)

## Exercise 10.4

> Assuming `v` is a `vector<double>`, what, if anything, is wrong with calling `accumulate(v.cbegin(), v.cend(), 0)`?

The type of the third argument to `accumulate` determines which addition operator is used and is the type that `accumulate` returns. So the result will be an `int` in current situation.

## Exercise 10.5

> In the call to `equal` on rosters, what would happen if both rosters held C-style strings, rather than library `string`s?

need reviewed!

## Exercise 10.6

> Using `fill_n`, write a program to set a sequence of `int` values to 0.

[code](ex10_6.cpp)

## Exercise 10.7

> Determine if there are any errors in the following programs and, if so, correct the error(s):
> (a)
```cpp
vector<int> vec; list<int> lst; int i; 
while (cin >> i)
    lst.push_back(i); 
copy(lst.cbegin(), lst.cend(), vec.begin());
```

add `vec.resize(lst.size());`

Cause Algorithms that write to a destination iterator assume the destination is large enough to hold the number of elements being written.

> (b)
```cpp
vector<int> vec; 
vec.reserve(10); // reserve is covered in § 9.4 (p. 356) fill_n(vec.begin(), 10, 0);
```

`v.size()` still equal 0
use `v.resize(10)` or `fill_n(back_inserter(v), 10, 0)`

## Exercise 10.8

> We said that algorithms do not change the size of the containers over which they operate. Why doesn’t the use of `back_inserter` invalidate this claim?

`back_inserter` takes a reference to a container and returns an insert iterator bound to that container. When we assign through that iterator, the assignment calls `push_back` to add an element with the given value to the container.

Inserters like `back_inserter` is part of `<iterator>` rather than `<algorithm>`.

## Exercise 10.9

> Implement your own version of `elimDups`. Test your program by printing the `vector` after you read the input, after the call to `unique`, and after the call to `erase`.

[code](ex10_9.cpp)

## Exercise 10.10

> Why do you think the algorithms don’t change the size of containers?

The library algorithms operate on iterators, not containers. Therefore, an algorithm cannot (directly) add or remove elements.