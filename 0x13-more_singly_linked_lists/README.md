The previous project we covered the singly linked lists. We are going to cover more on singly linked lists in this project.

# Our project here includes 11 mandatory tasks and 4 advanced tasks (optionadata structure for this project.

Our data structure for all tasks int this  project:  

 /\* struct listint_s - singly linked list <br>
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
Task 0: Print list <br>
Write a function that prints all the elements of a listint_t list.

- Prototype: size_t print_listint(const listint_t *h);
- Return: the number of nodes
- Format: see example
- You are allowed to use printf  

Task 1: List length <br>
Write a function that returns the number of elements in a linked listint_t list.

- Prototype: size_t listint_len(const listint_t *h);  

Task 2: Add node <br>
Write a function that adds a new node at the beginning of a listint_t list.

- Prototype: listint_t *add_nodeint(listint_t **head, const int n);
- Return: the address of the new element, or NULL if it failed

Task 3: Add node at the end <br>
Write a function that adds a new node at the end of a listint_t list.

- Prototype: listint_t *add_nodeint_end(listint_t \**head, const int n);
- Return: the address of the new element, or NULL if it failed

Task 4: Free list  
Write a function that frees a listint_t list.

- Prototype: void free_listint(listint_t *head);

Task 5: Free  
Write a function that frees a listint_t list.

- Prototype: void free_listint2(listint_t \**head);
- The function sets the head to NULL

Task 6: Pop  
Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).

- Prototype: int pop_listint(listint_t **head);
- if the linked list is empty return 0

Task 7: 
