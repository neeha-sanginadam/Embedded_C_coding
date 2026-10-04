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
    if (newnode == NULL)
    {
    return;
    }
    newnode->key=key;
    newnode->count=1;
    newnode->next=hash_table[index];
    hash_table[index]=newnode;     

}

void Duplicate_elements()
{
    for(int i=0;i<HASH_TABLE;i++)
    {
        Node *current=hash_table[i];
        while(current!=NULL)
        {
            if(current->count>1)
            {
                printf("Duplicate Element %d with frequency:%d\n",current->key,current->count);

            }
            current=current->next;
        }
    }
}

int main()
{
    int a[]={3,4,2,5,4,2,3,3,1};
    for (int i=0;i<sizeof(a)/sizeof(a[0]);i++)
    {
        insert_into_memory(a[i]);
    }
    Duplicate_elements();

}

//For an unsorted array, a hash table can find duplicate elements in O(n) average time and O(k) extra space.
