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

## Exercise 12.3

> Does this class need `const` versions of `push_back` and `pop_back`? If so, add them. If not, why aren’t they needed?

## Exercise 12.4

> In our `check` function we didn’t check whether `i` was greater than zero. Why is it okay to omit that check?

## Exercise 12.5

> We did not make the constructor that takes an `initializer_list explicit` (§ 7.5.4, p. 296). Discuss the pros and cons of this design choice.