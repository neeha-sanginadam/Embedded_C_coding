#include <stdio.h>
#include <stdlib.h>

#define HASH_TABLE 10
typedef struct Node
{
    int key;
    int count;
    struct Node *next;
}Node;
Node *hash_table[HASH_TABLE]={NULL};

int hash(int key)
{
    if(key<0)
    {
        key=-key;
    }
    return key%HASH_TABLE;
}

void insert_into_memory(int key)
{
    int index = hash(key);
    Node *current = hash_table[index];

    while(current!=NULL)
    {
        if(current->key == key)
        {
            current->count++;
            return;
        }
        current=current->next;
    }
    Node *newnode=malloc(sizeof(Node));
    newnode->key=key;
    newnode->count=1;
    newnode->next=hash_table[index];
    hash_table[index]=newnode;
}

void First_non_repeating(int *arr, int n)
{
    for(int i=0;i<n;i++)
    {
        int index=hash(arr[i]);
        Node *current=hash_table[index];
        while(current!=NULL)
        {
            if(current->key == arr[i] && current->count==1)
            {
                printf("First non-repeating element: %d\n",arr[i]);
                return;
            }
            current=current->next;
        }
    }
    
}

int main()
{
    int a[]={1,3,1,4,3,2,2,5,5,1,6};
    for (int i=0;i<sizeof(a)/sizeof(a[0]);i++)
    {
        insert_into_memory(a[i]);
    }
    First_non_repeating(a, sizeof(a)/sizeof(a[0]));


}

/*
Average TC: O(n)
Worst-case TC: O(n²) due to hash collisions
SC: O(k) where k = number of unique elements.
*/