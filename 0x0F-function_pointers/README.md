C - Function Pointers Exercises

This repository contains a set of exercises to practice using function pointers in C programming language.
Getting Started

To get started, clone this repository to your local machine and open it in your preferred C development environment. All exercises are located in the exercises directory.
Exercise 1 - Using Function Pointers to Print Names

Create a function print_name(char *name, void (*f)(char *)) that takes a char array name and a function pointer f which represents a function that takes a char pointer as its parameter and returns nothing. The function print_name should call the function pointed to by f on each character of name.

Create two functions print_char(char *c) and print_uppercase(char *c) which respectively print a char to the console and print its uppercase version to the console. Test print_name() function by calling it with a name and each of the two functions.
Exercise 2 - Using Function Pointers to Iterate Over Arrays

Create a function array_iterator(int *array, size_t size, void (*action)(int)) that takes an integer array array, its size size, and a function pointer action which represents a function that takes an integer as its parameter and returns nothing. The function array_iterator should call the function pointed to by action on each element of array.

Create a function print_integer(int n) which simply prints an integer to the console. Test array_iterator() function by calling it with an integer array and print_integer() function pointer.
Exercise 3 - Using Function Pointers to Search Arrays

Create a function int_index(int *array, int size, int (*cmp)(int)) that takes an integer array array, its size size, and a function pointer cmp which represents a function that takes an integer as its parameter and returns an integer. The function int_index should search array for an element that satisfies the condition specified by cmp, and return the index of the first such element found.

Create a function is_negative(int n) which returns 1 if n is negative, and 0 otherwise. Test int_index() function by calling it with an integer array and is_negative() function pointer.
