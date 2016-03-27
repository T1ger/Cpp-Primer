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

[code](ex12_6.cpp)

## Exercise 12.7

> Redo the previous exercise, this time using `shared_ptr`.

[code](ex12_7.cpp)

## Exercise 12.8

> Explain what if anything is wrong with the following function.
```cpp
bool b() { 
    int* p = new int; 
    // ... 
    return p; 
}
```

p will convert to `bool`, then the dynamic memory allocated has no chance to be freed.

## Exercise 12.9

> Explain what happens in the following code:
```cpp
int *q = new int(42), *r = new int(100); 
r = q; 
auto q2 = make_shared<int>(42), r2 = make_shared<int>(100); 
r2 = q2;
```

q => r:

Memory leakage happens

q2 => r2:

safe

## Exercise 12.10

> Explain whether the following call to the `process` function defined on page 464 is correct. If not, how would you correct the call?
```cpp
shared_ptr<int> p(new int(42)); 
process(shared_ptr<int>(p));
```

correct

[test](ex12_10.cpp)

## Exercise 12.11

> What would happen if we called `process` as follows?
```cpp
process(shared_ptr<int>(p.get()));
```

error for object 0x7fcd40c031f0: pointer being freed was not allocated

[test](ex12_10.cpp)

## Exercise 12.12

> Using the declarations of `p` and `sp` explain each of the following calls to process. If the call is legal, explain what it does. If the call is illegal, explain why:
```cpp
auto p = new int(); 
auto sp = make_shared<int>();
```

(a) `process(sp);` 

legal. Copy `sp`(shared_ptr) to process()

(b) `process(new int());`
illegal. plain pointer cannot convert to smart pointer implicitly

(c) `process(p);` 
illegal

(d) `process(shared_ptr<int>(p));`
legal but could potentially cause problems.

## Exercise 12.13

> What happens if we execute the following code?
```cpp
auto sp = make_shared<int>(); 
auto p = sp.get(); 
delete p;
```

double free. runtime error

## Exercise 12.14

> Write your own version `shared_ptr`to manage a connection.

[code](ex12_14.cpp)

## Exercise 12.15

> Rewrite the first exercise to use a lambda (§ 10.3.2, p. 388) in place of the `end_connection` function.

[code](ex12_15.cpp)

## Exercise 12.16

> Compilers don’t always give easy-to-understand error messages if we attempt to copy or assign a `unique_ptr`. Write a program that contains these errors to see how your compiler diagnoses them.

[code](ex12_16.cpp)

## Exercise 12.17

> Which of the following `unique_ptr` declarations are illegal or likely to result in subsequent program error? Explain what the problem is with each one.
```cpp
int ix = 1024, *pi = &ix, *pi2 = new int(2048); 
typedef unique_ptr<int> IntP;
```

(a) `IntP p0(ix);`

(b) `IntP p1(pi);`

(c) `IntP p2(pi2);`

(d) `IntP p3(&ix);`

(e) `IntP p4(new int(2048));`

(f) `IntP p5(p2.get());`

[code](ex12_17.cpp)

need review

## Exercise 12.18

> Why doesn’t `shared_ptr` have a release member?

Other `shared_ptr` that points the same object can still delete this object