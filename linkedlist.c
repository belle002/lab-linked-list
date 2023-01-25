// Modify this file
// compile with: gcc linkedlist.c -o linkedlist.out

#include <stdio.h>
#include <stdlib.h> // contains the functions free/malloc

typedef struct  node_t 
{
    int num_wins;
    int ywear;
    struct node_t* next;
} node_t;
   
node_t* new_node(int wins, int year, node_t* next) {

   node_t* newnode = (node_t*) malloc(sizeof(node_t));

   newNode->num_wins = wins;
   newNode->year = year;
   newNode->next = next; 

   return newNode;
}

int main()
{
    node_t* head;
    head = new_node(10, 5, NULL);
    printf("%d %d\n", head->year, head->num-wins);

    return 0;
}