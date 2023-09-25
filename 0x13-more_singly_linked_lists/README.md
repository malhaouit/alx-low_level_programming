The previous project we covered the singly linked lists. We are going to cover more on singly linked lists in this project.

#Our project here includes 11 mandatory tasks and 4 advanced tasks (optional).

We will use this data structure for this project.

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

##Mandatory tasks
Task 0:

Write a function that prints all the elements of a listint_t list.

- Prototype: size_t print_listint(const listint_t *h);
- Return: the number of nodes
- Format: see example
- You are allowed to use printf

