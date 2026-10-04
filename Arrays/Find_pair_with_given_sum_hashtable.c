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
    return (key)%HASH_TABLE;
}

void insert_into_hash(int key)
{
    int index = hash(key);
    Node *current =hash_table[index];
    while(current != NULL)
    {
        if(current->key == key)
        {
            current->count++;
            return;
        }
        current=current->next;
    }
    Node *newnode=malloc(sizeof(Node));
    if(newnode == NULL)
    {
        return;
    }
    newnode->key=key;
    newnode->count=1;
    newnode->next=hash_table[index];
    hash_table[index]=newnode;

}

Node *search(int req)
{
    int index =hash(req);
    Node *current = hash_table[index];
    while(current !=NULL)
    {
        if(current->key == req)
        {
            return current;
        }
        current=current->next;
    }
    return NULL;
}

void find_pairs(int *a,int n,int target)
{
    for(int i=0;i<n;i++)
    {
        int req=target-a[i];
        if(search(req)!=NULL)
        {
            printf("Pairs: %d, %d\n", a[i], req);
        }
        insert_into_hash(a[i]);
    }
}


int main()
{
    //get the elements in hash table
   int a[] = {2, 7, 11, 15, 3, 6, 9};
   int target=18;
   find_pairs(a, sizeof(a)/sizeof(a[0]),target);
}

/*
Average TC : O(n)
Worst TC   : O(n²)   // severe hash collisions
SC         : O(n)
*/