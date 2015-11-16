## Exercise 2.1

> What are the differences between int, long, long long, and short? Between an unsigned and a signed type? Between a float and a double?

- The language guarantees that `int` will be at least as large as `short` (16 bits), `long` at least 32 bits, `long long` at least 64 bits.

- A `signed` type represents negative or positive numbers(including zero); An `unsigned` type represents only value greater than or equal to zero.

- Typically, `float` is prepresented in one word(32 bits), `double` in two words(64 bits), and `long doubles` in either three or four words(96 or 128 bits)

__Deciding which type to use__

- Use an unsigned type when you know that the values cannot be negative.
- Use `int` for integer arithmetic. `short` is usually too small and, in practice, `long` often has the same size as `int`. If your data values are larger than the minimum guaranteed size of an `int`, then use `long long`.
- Do not use plain `char` or `bool` in arithmetic expressions. Use them _only_ to hold characters or truth values.
- Use `double` for floating-point computations; `float` usually does not have enough precision, and the cost of double-precision calculations versus single-precision is negligible.