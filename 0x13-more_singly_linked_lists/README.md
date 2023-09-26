The previous project we covered the singly linked lists. We are going to cover more on singly linked lists in this project.

# Our project here includes 11 mandatory tasks and 4 advanced tasks (optionadata structure for this project.

Our data structure for all tasks int this  project:  
 \* struct listint_s - singly linked list <br>
 \* @n: integer <br>
 \* @next: points to the next node <br>
 \* <br>
 \* Description: singly linked list node structure <br>
 \* <br>
 \*/ <br>
typedef struct listint_s <br>
{ <br>
    int n; <br>
    struct listint_s *next; <br>
} listint_t;

## Mandatory tasks
Task 0:

Write a function that prints all the elements of a listint_t list.

- Prototype: size_t print_listint(const listint_t *h);
- Return: the number of nodes
- Format: see example
- You are allowed to use printf


