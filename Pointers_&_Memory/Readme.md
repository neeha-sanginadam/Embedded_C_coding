🔹 Pointer Fundamentals
Pointer declaration and initialization
Address-of operator &
Dereference operator *
Modifying variables through pointers
Passing addresses to functions
Swapping values using pointers
int x = 10;
int *p = &x;

*p = 20;
🔹 Arrays & Pointer Arithmetic

Practiced accessing and manipulating arrays using pointers.

int a[] = {1, 2, 3, 4, 5};
int *p = a;

printf("%d\n", *(p + 2));

Key relationship:

a[i]  ==  *(a + i)
p[i]  ==  *(p + i)

Covered:

Array traversal
Maximum / minimum
Array reversal
Pointer increment/decrement
Pointer addition/subtraction
Pointer difference
🔹 Strings Using Pointers

Implemented basic string operations without relying on standard string functions:

String length
String copy
String comparison
String concatenation

Important concept:

C strings are terminated by '\0'
🔹 Advanced Pointer Concepts
Pointer-to-Pointer
int x = 10;
int *p = &x;
int **q = &p;
q → p → x
Array of Pointers
int *p[5];

An array containing 5 pointers to int.

Pointer to an Array
int a[5];
int (*p)[5] = &a;

A pointer to the entire array.

2D Arrays
int a[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};

int (*p)[3] = a;

Accessing:

p[i][j]

is equivalent to:

*(*(p + i) + j)
🔹 Function Pointers

A function pointer stores the address of a function.

int (*fn)(int, int);

fn = add;

printf("%d\n", fn(10, 20));

Practiced:

Function pointer declaration
Assigning functions to pointers
Calling functions through pointers
Matching function signatures

Applications in Embedded C include:

Callbacks
State machines
Dispatch tables
Driver interfaces
Interrupt handler tables
🔹 Dynamic Memory Management

Practiced the complete dynamic memory lifecycle:

malloc()
   ↓
Use allocated memory
   ↓
realloc()  → Resize when required
   ↓
free()
   ↓
p = NULL
malloc()

Allocates a block of memory without initializing its contents.

int *p = malloc(5 * sizeof(int));
calloc()

Allocates memory for multiple elements and initializes the allocated storage to zero.

int *p = calloc(5, sizeof(int));
realloc()

Changes the size of an existing dynamic allocation.

int *temp = realloc(p, new_size);

if (temp != NULL)
    p = temp;
free()

Releases dynamically allocated memory.

free(p);
p = NULL;
🔹 Stack vs Heap
Stack	Heap
Automatic/local storage	Dynamic storage
Managed automatically	Managed explicitly
Function call frames	malloc() / calloc() / realloc()
Limited and typically predictable	Flexible but requires management
No explicit free() for local variables	Requires free()
Lifetime based on storage duration	Lifetime controlled by allocation/deallocation

Important distinction:

void test()
{
    int *p = malloc(sizeof(int));
}

Here:

p                  → local variable
malloc'd memory    → dynamic storage

The pointer itself and the memory it points to have different lifetimes.

🔹 Pointer Safety & Memory Bugs

Studied common pointer-related memory problems:

Concept	Meaning
NULL Pointer	Intentionally points to no valid object
Wild Pointer	Uninitialized pointer
Dangling Pointer	Pointer referring to an object whose lifetime has ended
Use-After-Free	Accessing memory after free()
Memory Leak	Allocated memory becomes unreachable without being freed

Safe cleanup pattern:

free(p);
p = NULL;
🔹 const with Pointers

Understanding what is constant:

const int *p;

Pointer to constant data

int *const p;

Constant pointer

const int *const p;

Constant pointer to constant data

Declaration	Modify *p	Change p
const int *p	❌	✅
int *const p	✅	❌
const int *const p	❌	❌
Key Takeaways
Understand how pointers store and manipulate addresses.
Use pointer arithmetic to traverse arrays and strings.
Understand the difference between arrays of pointers and pointers to arrays.
Use double pointers to access and modify pointer variables.
Understand function pointers and their use in Embedded C.
Distinguish NULL, wild, and dangling pointers.
Understand dynamic memory allocation and its lifecycle.
Understand stack vs heap and variable lifetime.
Identify memory leaks and use-after-free bugs.
Understand how const applies to pointers and pointed-to data.

Pointers & Memory — Completed ✅
