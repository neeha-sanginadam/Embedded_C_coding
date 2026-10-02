#include <stdio.h>
//Pointer to an array

int main()
{
    int a[]={1,2,3,4,5};
    int (*p)[5]=&a;
    for (int i=0;i<sizeof(a)/sizeof(a[0]);i++)
    {
        printf("Pointer to an array and its element: %d\n",(*p)[i]);
    }

    printf("**********************************************************\n");

    //2 D array
    int b[2][3]={{1,2,3},{4,5,6}};
    int (*q)[2][3]=&b;
    for(int i=0;i<sizeof(b)/sizeof(b[0]);i++)
    {
        for (int j=0;j<sizeof(b[0])/sizeof(b[0][0]);j++)
        {
            printf("2-D Array value elements through pointer to an array :%d\n",(*q)[i][j]);
        }
    }
}