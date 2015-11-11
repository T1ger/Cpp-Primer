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

