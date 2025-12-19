1. Difference between a normal variable and a pointer

A normal variable stores a value directly in memory, while a pointer stores the memory address of another variable.

A normal variable is accessed using its name, but a pointer accesses data by dereferencing the address it holds using the * operator.

Example:

int x = 10;      // normal variable
int *p = &x;    // pointer storing address of x

Here, x stores the value 10, p stores the address of x, and *p accesses the value of x.


---

2. Variable declaration and definition vs pointer declaration and definition

Variable declaration and definition allocate memory to store a value. Pointer declaration allocates memory to store an address.

The & operator is used to get the address of a variable, while the * operator is used to declare and dereference pointers.

Example:

int a = 5;     // variable declaration and definition
int *ptr;     // pointer declaration
ptr = &a;     // pointer definition


---

3. Dereferencing a pointer

Dereferencing a pointer means accessing or modifying the value stored at the memory address held by the pointer. This is done using the * operator.

Example:

int x = 20;
int *p = &x;

*p = 30;   // modifies the value of x

After dereferencing, the value of x becomes 30.


---

4. Scenarios where pointers are preferred over normal variables

Pointers are preferred when there is a need to modify variables inside functions, work with arrays, or manage dynamic memory.

Practical examples include passing variables to functions by reference and allocating memory dynamically using malloc().


---

5. Limitations and risks of using pointers

Pointers can cause errors such as segmentation faults if not properly initialized. They can be difficult to debug and may lead to dangling pointers or memory leaks if memory is not properly managed.


---

6. Call by value vs call by reference

In call by value, a copy of the data is passed to the function, so the original value remains unchanged.

Example:

void change(int x) {
    x = 10;
}

In call by reference, the address of the variable is passed, allowing the function to modify the original value.

Example:

void change(int *x) {
    *x = 10;
}


---

7. Practical scenarios

Call by value is preferred when the original data should not be modified and when working with small data values.

Call by reference is preferred when the function needs to modify the original data or when passing large arrays or structures.
