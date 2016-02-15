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

## Exercise 10.11

> Write a program that uses `stable_sort` and `isShorter` to sort a `vector` passed to your version of `elimDups`. Print the `vector` to verify that your program is correct.

[code](ex10_11.cpp)

## Exercise 10.12

> Write a function named `compareIsbn` that compares the `isbn()` members of two `Sales_data` objects. Use that function to sort a vector that holds `Sales_data` objects.

[code](ex10_12.cpp)

## Exercise 10.13

> The library defines an algorithm named `partition` that takes a predicate and partitions the container so that values for which the predicate is `true` appear in the first part and those for which the predicate is `false` appear in the second part. The algorithm returns an `iterator` just past the last element for which the predicate returned `true`. Write a function that takes a `string` and returns a `bool` indicating whether the `string` has five characters or more. Use that function to partition words. Print the elements that have five or more characters.

[code](ex10_13.cpp)

## Exercise 10.14

> Write a lambda that takes two `int`s and returns their sum.

[code](ex10_14.cpp)

## Exercise 10.15

> Write a lambda that captures an `int` from its enclosing function and takes an `int` parameter. The lambda should return the sum of the captured `int` and the `int` parameter.

[code](ex10_15.cpp)

## Exercise 10.16

> Write your own version of the `biggies` function using lambdas.

[code](ex10_16.cpp)

## Exercise 10.17

> Rewrite exercise 10.12 from § 10.3.1 (p. 387) to use a lambda in the call to `sort` instead of the `compareIsbn` function.

[code](ex10_17.cpp)

## Exercise 10.18

> Rewrite biggies to use `partition` instead of `find_if`. We described the `partition` algorithm in exercise 10.13 in § 10.3.1 (p. 387).

[code](ex10_18.cpp)

## Exercise 10.19

> Rewrite the previous exercise to use `stable_partition`, which like `stable_sort` maintains the original element order in the paritioned sequence.

[code](ex10_19.cpp)

## Exercise 10.20

> The library defines an algorithm named `count_if`. Like `find_if`, this function takes a pair of iterators denoting an input range and a predicate that it applies to each element in the given range. `count_if` returns a count of how often the predicate is true. Use `count_if` to rewrite the portion of our program that counted how many words are greater than length 6.

[code](ex10_20.cpp)

## Exercise 10.21

> Write a lambda that captures a local `int` variable and decrements that variable until it reaches 0. Once the variable is 0 additional calls should no longer decrement the variable. The lambda should return a `bool` that indicates whether the captured variable is 0.

[code](ex10_21.cpp)

## Exercise 10.22

> Rewrite the program to count words of size 6 or less using functions in place of the lambdas.

[code](ex10_22.cpp)

## Exercise 10.23

> How many arguments does `bind` take?

`n + 1`

## Exercise 10.24

> Use `bind` and `check_size` to find the first element in a `vector` of `int`s that has a value greater than the length of a specified `string` value.

[code](ex10_24.cpp)

## Exercise 10.25

> In the exercises for § 10.3.2 (p. 392) you wrote a version of `biggies` that uses `partition`. Rewrite that function to use `check_size` and `bind`.

[code](ex10_25.cpp)