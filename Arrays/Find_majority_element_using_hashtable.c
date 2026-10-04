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

void print_hash_table(int n)
{
    Node *majority=NULL;
    for(int i=0;i<HASH_TABLE;i++)
    {
        Node *current=hash_table[i];
        while(current!=NULL)
        {
            if(current->count> n/2 )
            {
                majority = current;
                break;
            }
            
            current=current->next;
        }
        if(majority != NULL)
        {
            break;
        }
    }
    printf("Element %d frequency:%d\n",majority->key,majority->count);
}

int main()
{
    int a[] = {2, 2, 1, 1, 1, 2, 2};
    for (int i=0;i<sizeof(a)/sizeof(a[0]);i++)
    {
        insert_into_memory(a[i]);
    }
    print_hash_table(sizeof(a)/sizeof(a[0]));

}

/*
| Problem                          | Condition         |
| -------------------------------- | ----------------- |
| **Most frequent element / Mode** | Highest frequency |
| **Majority element**             | Frequency `> n/2` |

hash table gives average O(n) time and O(n) space for majority element.
*/
