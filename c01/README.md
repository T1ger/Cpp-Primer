## Exercise 1.1

> Review the documentation for your compiler and determine what file naming convention it uses. Compile and run the main program from page 2.

#### Mac

	$ g++ -o exe1_1 ex1_1.cpp

## Exercise 1.2

> Change the program to return -1. A return value of -1 is often treated as an indicator that the program failed. Recompile and rerun your program to see how your system treats a failure indicator from main.

#### Mac

	$ ./ex1_1
	$ echo $?
	255

## Exercise 1.3

> Write a program to print _Hello, World_ on the standard output.

	#include <iostream>

	int main() 
	{
		std::cout << "Hello, World" << std::endl;
		return 0;
	}

## Exercise 1.4

> Our program used the addition operator, +, to add two numbers. Write a program that uses the multiplication operator, *, to print the product instead.

	#include <iostream>

	int main() 
	{
		std::cout << "Enter two numbers:" << std::endl;
		int v1 = 0, v2 = 0;
		std::cin >> v1 >> v2;
		std::cout << "The product of " << v1 << " times " << v2 << " is " << v1 * v2 << std::endl;
    
    	return 0;
	}

## Exercise 1.5

> We wrote the output in one large statement. Rewrite the program to use a separate statement to print each operand.

	#include <iostream>

	int main() 
	{
	    std::cout << "Enter two numbers:" << std::endl;
	    int v1 = 0, v2 = 0;
	    std::cin >> v1 >> v2;
	    std::cout << "The product of ";
	    std::cout << v1;
	    std::cout << " and "; 
	    std::cout << v2;
	    std::cout << " is ";
	    std::cout << v1 * v2; 
	    std::cout << std::endl;

	    return 0;
	}				
	
## Exercise 1.6

> Explain whether the following program fragment is legal.

Illegal.

	std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
	
## Exercise 1.7

## Exercise 1.8

## Exercise 1.9

[code](ex1_9.cpp)

## Exercise 1.10

[code](ex1_10.cpp)

## Exercise 1.11

[code](ex1_11.cpp)

## Exercise 1.12

> What does the following for loop do? What is the final value of sum?
	
	int sum = 0;
	for (int i = -100; i <= 100; ++i)
	sum += i;

The loop sums the numbers from -100 to 100. The final sum is 0.

## Exercise 1.13

> Rewrite the exercises from § 1.4.1 (p. 13) using for loops.

## Exercise 1.14

> Compare and contrast the loops that used a for with those using a while. Are there advantages or disadvantages to using either form?

Refer [answer](http://stackoverflow.com/questions/2950931/for-vs-while-in-c-programming)


## Exercise 1.15

> Write programs that contain the common errors discussed in the box on page 16. Familiarize yourself with the messages the compiler generates.

## Exercise 1.16

> Write your own version of a program that prints the sum of a set of integers read from _cin_.

[code](ex1_16.cpp)


## Exercise 1.17

> What happens in the program presented in this section if the input values are all equal? What if there are no duplicated values?

## Exercise 1.18

> Compile and run the program from this section giving it only equal values as input. Run it again giving it values in which no number is repeated.

## Exercise 1.19

> Revise the program you wrote for the exercises in § 1.4.1 (p. 13) that printed a range of numbers so that it handles input in which the first number is smaller than the second.

[code](ex1_11.cpp)

## Exercise 1.20

> [http://www.informit.com/title/032174113](http://www.informit.com/title/032174113) contains a copy of Sales_item.h in the Chapter 1 code directory. Copy that file to your working directory. Use it to write a program that reads a set of book sales transactions, writing each transaction to the standard output.

[code](ex1_20.cpp)

