//Pointer to pointer -- double pointer
#include <stdio.h>

int main()
{
    int a=10, b=20;
    int *p=&a;
    int *q=&b;
    int **x=&p;
    int **y=&q;
    printf("Address --> a:%p | b:%p | *p: %d | p: %p | *q: %d | q: %p | *x:%p |x:%p |*y:%p | y:%p | **x:%d | **y:%d\n",&a,&b, *p, &p, *q,&q, *x,&x, *y, &y,**x,**y);

    //Change the vales of variables using pointers
    *p=(*p)*10;
    *q=(*q)*10;
    //a=100, b=200, *p=100, *q=200, p-->address of 100 value and q --> address of 200 value
    printf("Address --> a:%p | b:%p | *p: %d | p: %p | *q: %d | q: %p | *x:%p |x:%p |*y:%p | y:%p | **x:%d | **y:%d\n",&a,&b, *p, &p, *q,&q, *x,&x, *y, &y,**x,**y);

    //Exchnage the pointing value sof x and y
    int *temp=*x;
    *x=*y;
    *y=temp;
    printf("Address --> a:%p | b:%p | *p: %d | p: %p | *q: %d | q: %p | *x:%p |x:%p |*y:%p | y:%p | **x:%d | **y:%d\n",&a,&b, *p, &p, *q,&q, *x,&x, *y, &y,**x,**y);

    printf("Adding values to the elments using double pointers:\n");
    **x=**x+5;
    **y=**y+5;
    printf("Address --> a:%p | b:%p | *p: %d | p: %p | *q: %d | q: %p | *x:%p |x:%p |*y:%p | y:%p | **x:%d | **y:%d\n",&a,&b, *p, &p, *q,&q, *x,&x, *y, &y,**x,**y);



}