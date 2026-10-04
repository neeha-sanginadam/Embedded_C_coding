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

//Covert key into bucket number
int hash(int key)
{
    if(key<0)
    {
        key=-key;
    }
    return (key%HASH_TABLE);
}
void insert_into_memory(int key)
{
    //Find the bucket
    int index=hash(key);
    Node *current =hash_table[index];

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

void print_hash_table()
{
    for(int i=0;i<HASH_TABLE;i++)
    {
        Node *current=hash_table[i];
        while(current!=NULL)
        {
            printf("Element %d frequency:%d\n",current->key,current->count);
            current=current->next;
        }
    }
}

int main()
{
    int a[]={1,2,2,3,3,3,4,4,5,5,5,5,6,6,16,16,16};
    for (int i=0;i<sizeof(a)/sizeof(a[0]);i++)
    {
        insert_into_memory(a[i]);
    }
    print_hash_table();

}
/*
        key
         ↓
    hash(key)
         ↓
      bucket
         ↓
   Search linked list
         ↓
 ┌─────────────────┐
 │ Key exists?     │
 └───────┬─────────┘
       YES│       NO
          ↓        ↓
    frequency++   Create node
                   ↓
              frequency = 1

Time Complexity: O(n) average, O(n²) worst case due to hash collisions.
Space Complexity: O(k), where k is the number of unique elements.
*/