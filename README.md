# Pointers

## AIM:-<br>
To allocate the memory of pointers and to increment the pointer <br>

## Softeware Used :- <br> 
VS Code <br> 

## Theory:- <br>
A pointer is a variable that stores the memory address of another variable. <br>
It does not hold any actual data value like a normal variable, instead holds the location where the data is stored in memory.<br>
Pointers allow for efficient array and memory management, and can be used to directly manipulate memory. Using pointers significantly improves performance for repetitive operations, like traversing iterable data structures (e.g. strings).<br>
In particular, it is often much cheaper in time and space to copy and dereference pointers than it is to copy and access the data to which the pointers point.<br>
The basic syntax to define a pointer is:<br>
```
int a = 5;
int *ptr = &a;
```
## Algorithm for Demonstrating Pointers

1. **Declare and Initialize Variables**:
   - Declare an integer variable `a` and initialize it with a value (e.g., `20`).

2. **Declare and Initialize Pointer**:
   - Declare a pointer `aptr` of type `int*`.
   - Assign the address of variable `a` to the pointer `aptr`.

3. **Display Address of Variable**:
   - Print the address of variable `a` using the address-of operator (`&`).

4. **Display Pointer Value**:
   - Print the value stored in the pointer `aptr` (which is the address of variable `a`).

5. **Display Value Pointed to by Pointer**:
   - Print the value pointed to by the pointer `aptr` using the dereference operator (`*`).

6. **End Program**:
   - Conclude the program after displaying the address of the variable, the pointer value, and the dereferenced value.

## Algorithm for Pointer Arithmetic with Different Data Types

1. **Declare and Initialize Variables**:
   - Define an integer variable `a` and initialize it with `10`.
   - Define a float variable `b` and initialize it with `10.90`.
   - Define a char variable `ch` (not used in the program).
   - Define a bool variable `boo` (not initialized).

2. **Integer Pointer Arithmetic**:
   - Declare an integer pointer `aptr` and initialize it with the address of `a`.
   - Print the address of `a` using `aptr` before incrementing.
   - Increment the pointer `aptr` to point to the next integer location (address increases by the size of an `int`).
   - Print the address of `a` using `aptr` after incrementing.
   - Print the value pointed to by `aptr`.

3. **Float Pointer Arithmetic**:
   - Declare a float pointer `bptr` and initialize it with the address of `b`.
   - Print the address of `b` using `bptr` before incrementing.
   - Increment the pointer `bptr` to point to the next float location (address increases by the size of a `float`).
   - Print the address of `b` using `bptr` after incrementing.
   - Print the value pointed to by `bptr`.

4. **Bool Pointer Arithmetic**:
   - Declare a bool pointer `dbool` and initialize it with the address of `boo`.
   - Print the address of `boo` using `dbool` before incrementing.
   - Increment the pointer `dbool` to point to the next bool location (address increases by the size of a `bool`).
   - Print the address of `boo` using `dbool` after incrementing.
   - Print the value pointed to by `dbool`.

5. **End Program**:
   - Conclude the program after performing pointer arithmetic and displaying the results.

## conclusion :-
<br>
Learned how pointers are used for dynamic memory management and how pointer arithmetic (such as incrementation) allows efficient data access in arrays.
