1. Stack (memory aread: High addresses)
    Static memory allocation
    it has memory allocated for local variables, function calls, function pointers, function parameters etc....
    memory will be freed automatically by the compiler
    usually fast
    limited size

2. Heap (memory area: Lower addresses)
    Dynamic memory allocation
    malloc,calloc, realloc
    Need to free the memory by the user
    allocation/deallocation more overhead
    usually large size.

Stack memory is typically used for automatic variables and function call frames, with lifetime managed automatically according to storage duration. Heap memory is dynamically allocated at runtime using functions such as malloc() and must be explicitly released using free(). Stack allocation is generally simpler and faster, while heap allocation provides flexible lifetime and size but introduces allocation failures, fragmentation, and management overhead.

3. Variable Lifetime:
    How long an object/variable exists in memory during program execution.
    Scope → where you can access the variable in the source code.
    Lifetime → how long the variable exists during execution.

Variable/object	Typical lifetime
Local automatic variable	Until block/function execution ends
Global variable	Entire program execution
static variable	Entire program execution
malloc() memory	From allocation until free()

Interview question:

int *get_value()
{
    int x = 10;
    return &x;
}
The scope of the x is within the function. as it is returning the address of x , x is no longer accessable. Now its become dangling pointer.