// Modify this file
// compile with: gcc linkedlist.c -o linkedlist.out

#include <stdio.h>
#include <stdlib.h> // contains the functions free/malloc

typedef struct  note_t 
{
    int num_wins;
    int ywear;
    struct node_t* next;
} node_t;
   
node_t* new_node(int wins, int year, note_t* next) {

   node_t* newnote = (note_t*) malloc(sizeof(note_t));

   newnote->num_wins = wins;
   newnote->year = year;
   newnote->next = next; 

   return newNode;
}

int main()
{
    note_t* head;
    head = new_note(10, 5, NULL);
    printf("%d %d\n", head->year, head->num-wins);

    return 0;
}