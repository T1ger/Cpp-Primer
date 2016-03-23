## Exercise 12.1

> How many elements do `b1` and `b2` have at the end of this code?
```cpp
StrBlob b1; 
{ 
	StrBlob b2 = {"a", "an", "the"}; 
	b1 = b2; 
	b2.push_back("about"); 
}
```

`b1` has four; `b2` has been destroyed

## Exercise 12.2

> Write your own version of the `StrBlob` class including the `const` versions of `front` and `back`.

[header](ex12_2.h) | [code](ex12_2.cpp)

## Exercise 12.3

> Does this class need `const` versions of `push_back` and `pop_back`? If so, add them. If not, why aren’t they needed?

Not matter, because it will change the content of the pointer points to, not the pointer itself

## Exercise 12.4

> In our `check` function we didn’t check whether `i` was greater than zero. Why is it okay to omit that check?

The type of `i` is `unsigned` because of `std::vector<std::string>::size_type`

## Exercise 12.5

> We did not make the constructor that takes an `initializer_list explicit` (§ 7.5.4, p. 296). Discuss the pros and cons of this design choice.

`explicit` prevents automatic conversion from an `initializer_list` to `StrBlob`

need more review

## Exercise 12.6

> Write a function that returns a dynamically allocated `vector` of `int`s. Pass that `vector` to another function that reads the standard input to give values to the elements. Pass the `vector` to another function to print the values that were read. Remember to `delete` the `vector` at the appropriate time.

## Exercise 12.7

> Redo the previous exercise, this time using `shared_ptr`.

## Exercise 12.8

> Explain what if anything is wrong with the following function.
```cpp
bool b() { 
    int* p = new int; 
    // ... 
    return p; 
}
```

## Exercise 12.9

> Explain what happens in the following code:
```cpp
int *q = new int(42), *r = new int(100); 
r = q; 
auto q2 = make_shared<int>(42), r2 = make_shared<int>(100); 
r2 = q2;
```