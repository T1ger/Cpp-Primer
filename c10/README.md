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

## Exercise 10.26

> Explain the differences among the three kinds of insert iterators.

- `back_inserter` creates an iterator that uses `push_back`
- `front_inserter` creates an iterator that uses `push_front`
- `inserter` creates an iterator that uses `insert`

## Exercise 10.27

> In addition to `unique` (§ 10.2.3, p. 384), the library defines function named `unique_copy` that takes a third iterator denoting a destination into which to copy the unique elements. Write a program that uses `unique_copy` to copy the unique elements from a `vector` into an initially empty `list`.

[code](ex10_27.cpp)

## Exercise 10.28

> Copy a `vector` that holds the values from `1` to `9` inclusive, into three other containers. Use an `inserter`, a `back_inserter`, and a `front_inserter`, respectivly to add elements to these containers. Predict how the output sequence varies by the kind of inserter and verify your predictions by running your programs.

[code](ex10_28.cpp)

## Exercise 10.29

> Write a program using stream iterators to read a text file into a `vector` of `string`s.

[code](ex10_29.cpp)

## Exercise 10.30

> Use stream iterators, `sort`, and `copy` to read a sequence of integers from the standard input, sort them, and then write them back to the standard output.

[code](ex10_30.cpp)

## Exercise 10.31

> Update the program from the previous exercise so that it prints only the unique elements. Your program should use `unqiue_copy` (§ 10.4.1, p. 403).

[code](ex10_31.cpp)

## Exercise 10.32

> Rewrite the bookstore problem from § 1.6 (p. 24) using a `vector` to hold the transactions and various algorithms to do the processing. Use `sort` with your `compareIsbn` function from § 10.3.1 (p. 387) to arrange the transactions in order, and then use `find` and `accumulate` to do the sum.

[code](ex10_32.cpp)


## Exercise 10.33

> Write a program that takes the names of an input file and two output files. The input file should hold integers. Using an `istream_iterator` read the input file. Using `ostream_iterator`s, write the odd numbers into the first output file. Each value should be followed by a space. Write the even numbers into the second file. Each of these values should be placed on a separate line.

[code](ex10_33.cpp)

## Exercise 10.34

> Use `reverse_iterators` to print a `vector` in reverse order.

[code](ex10_34.cpp)

## Exercise 10.35

> Now print the elements in reverse order using ordinary iterators.

[code](ex10_35.cpp)

## Exercise 10.36

> Use `find` to find the last element in a `list` of `int`s with value 0.

[code](ex10_36.cpp)

## Exercise 10.37

> Given a `vector` that has ten elements, copy the elements from positions 3 through 7 in reverse order to a `list`.

[code](ex10_37.cpp)

## Exercise 10.38

> List the five iterator categories and the operations that each supports.

- Input iterator (`==`, `!=`, `++`, `*`)
- Output iterator (`==`, `!=`, `++` `*`)
- Forward iterator (`==`, `!=`, `++` `*`)
- Bidirectional iterator (`==`, `!=`, `++` `*`, `--`)
- Random-access iterator (`==`, `!=`, `++` `*`, `--`, `<`, `<=`, `>`, `>=`, `+`, `+=`, `-`, `-=`, `iter[n]`)

## Exercise 10.39

> What kind of iterator does a `list` have? What about a `vector`?

`list` would be bidirectional iterator and `vector` is random-access iterator.

## Exercise 10.40

> What kinds of iterators do you think `copy` requires? What about `reverse` or `unique`?

- `copy`: first and second are input iterator, third is output iterator;
- `reverse`: bidirectional iterators.
- `unique`: forward iterators.

## Exercise 10.41

> Based only on the algorithm and argument names, describe the operation that the each of the following library algorithms performs:
```cpp
replace(beg, end, old_val, new_val); // replace old_val by new_val from beg to end
replace_if(beg, end, pred, new_val); // replace the first element confirms pred by new_val in the range between beg and end
replace_copy(beg, end, dest, old_val, new_val); // copy to dest with replace old_val by new_val in range beg to end
replace_copy_if(beg, end, dest, pred, new_val); // copy to dest with replace the first element confirms pred by new_val in range beg to end
```