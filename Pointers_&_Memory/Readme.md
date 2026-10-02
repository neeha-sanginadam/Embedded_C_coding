# 2. Pointers & Memory ⭐⭐⭐

Understanding pointers, memory access, arrays, strings, and dynamic memory management in C.

### 🔹 Pointer Fundamentals

* Pointer declaration and initialization
* Address-of operator `&`
* Dereference operator `*`
* Modifying variables through pointers
* Passing addresses to functions
* Swapping values using pointers

```c
int x = 10;
int *p = &x;

*p = 20;
```

---

### 🔹 Arrays & Pointer Arithmetic

Practiced accessing and manipulating arrays using pointers.

```c
int a[] = {1, 2, 3, 4, 5};
int *p = a;

printf("%d\n", *(p + 2));
```

**Key relationship:**

```text
a[i] == *(a + i)
p[i] == *(p + i)
```

**Covered:**

* Array traversal
* Maximum / minimum
* Array reversal
* Pointer increment / decrement
* Pointer addition / subtraction
* Pointer difference

---

### 🔹 Strings Using Pointers

Implemented basic string operations using pointers without relying on standard string functions.

**Covered:**

* String length
* String copy
* String comparison
* String concatenation

**Important concept:**

```text
C strings are terminated by '\0'
```

---

### 🔹 Advanced Pointer Concepts

#### Pointer-to-Pointer

```c
int x = 10;
int *p = &x;
int **q = &p;
```

```text
q → p → x
```

#### Array of Pointers

```c
int *p[5];
```

An array containing 5 pointers to `int`.

#### Pointer to an Array

```c
int a[5];
int (*p)[5] = &a;
```

A pointer to the entire array.

#### 2D Arrays with Pointers

```c
int a[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};

int (*p)[3] = a;
```

Accessing:

```c
p[i][j]
```

is equivalent to:

```c
*(*(p + i) + j)
```

---

### 🔹 Function Pointers

A function pointer stores the address of a function.

```c
int (*fn)(int, int);

fn = add;

printf("%d\n", fn(10, 20));
```

**Practiced:**

* Function pointer declaration
* Assigning functions to pointers
* Calling functions through pointers
* Matching function signatures

**Applications in Embedded C:**

* Callbacks
* State machines
* Dispatch tables
* Driver interfaces
* Interrupt handler tables

---

### 🔹 Pointer Safety

Studied common pointer-related memory problems.

| Type                 | Description                                 |
| -------------------- | ------------------------------------------- |
| **NULL Pointer**     | Intentionally points to no valid object     |
| **Wild Pointer**     | Uninitialized pointer                       |
| **Dangling Pointer** | Points to memory whose lifetime has ended   |
| **Use-After-Free**   | Accessing memory after it has been released |

---

### 🔹 Dynamic Memory Management

Practiced the complete dynamic memory lifecycle:

```text
malloc() / calloc()
        ↓
   Use memory
        ↓
    realloc()
        ↓
   Use memory
        ↓
      free()
        ↓
     p = NULL
```

#### `malloc()`

Allocates a block of memory without initializing its contents.

```c
int *p = malloc(5 * sizeof(int));
```

#### `calloc()`

Allocates memory for multiple elements and initializes the allocated storage to zero.

```c
int *p = calloc(5, sizeof(int));
```

#### `realloc()`

Resizes an existing dynamic memory allocation.

```c
int *temp = realloc(p, new_size);

if (temp != NULL)
    p = temp;
```

#### `free()`

Releases dynamically allocated memory.

```c
free(p);
p = NULL;
```

---

### 🔹 Stack vs Heap

Understanding the difference between automatic and dynamically allocated memory.

**Stack:**

* Local / automatic variables
* Function call frames
* Automatically managed

**Heap:**

* Dynamic memory allocation
* `malloc()`, `calloc()`, `realloc()`
* Explicitly released using `free()`

**Important concept:**

```c
int *p = malloc(sizeof(int));
```

```text
p       → Pointer variable
*p      → Dynamically allocated memory
```

---

### 🔹 Variable Lifetime

Understanding the difference between **scope** and **lifetime**.

```text
Scope    → Where a variable can be accessed
Lifetime → How long the object exists
```

**Covered:**

* Automatic variables
* Static variables
* Global variables
* Dynamically allocated objects

---

### 🔹 `const` with Pointers

Understanding whether the pointer, the pointed-to data, or both are constant.

```c
const int *p;          // Pointer to constant data
int *const p = &x;     // Constant pointer
const int *const p;    // Constant pointer to constant data
```

| Declaration          | Modify `*p` | Change `p` |
| -------------------- | :---------: | :--------: |
| `const int *p`       |      ❌      |      ✅     |
| `int *const p`       |      ✅      |      ❌     |
| `const int *const p` |      ❌      |      ❌     |

---

### 🔹 Memory Leaks

A memory leak occurs when dynamically allocated memory is no longer accessible and cannot be released.

```c
int *p = malloc(100 * sizeof(int));

p = NULL;    // Memory leak
```

**Correct approach:**

```c
free(p);
p = NULL;
```

---

### 🔹 Key Takeaways

* Understand how pointers store and access memory addresses.
* Use pointers to modify variables and pass data by reference.
* Understand the relationship between arrays and pointers.
* Use pointer arithmetic to traverse arrays and strings.
* Understand pointer-to-pointer relationships.
* Distinguish arrays of pointers from pointers to arrays.
* Understand 2D arrays using pointers.
* Understand function pointers and their Embedded C applications.
* Identify NULL, wild, and dangling pointers.
* Understand dynamic memory allocation and deallocation.
* Understand stack vs heap memory.
* Understand variable lifetime and scope.
* Identify memory leaks and use-after-free bugs.
* Understand `const` with pointers.

### ✅ Pointers & Memory — Completed
