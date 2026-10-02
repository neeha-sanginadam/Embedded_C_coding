1. const int *p:
    the pointer to constant integer value. The value of the integer cannot be changed in the entire program execution.

int a=10;
int b=20;
const int *p=&a;
/*
*p=30 ----> incorrect ==> throws error as this is changing the value in that address.
*/
printf("%d\n", *p);
p=&b; //This is correct....
//Here the const int *p===the value present in the pointer address is constant that menas value of a is constant.

2. int *const p:
    pointer is constant interger datatype.
    Once allocated the address to the pointer cannot be changed in entire program execution.

    int a=30;
    int *const p = &a;
    *p=30; //This is allowed
    int b=40;
    p=&b; //Not allowed



3. const int *const p:
    both the pointer value address and the interger adrres cannot be changed
    int a=30;
    int b=40;
    const int *const p =&a;
    *p=40; --> This is not allowed
    p=&b; ---> This is not allowed.
