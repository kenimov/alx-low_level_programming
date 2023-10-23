0x13. C - More singly linked lists
Tasks
These are all the tasks of this project, the ones that are completed link to the corresponding files.

0. Print list
Write a function that prints all the elements of a listint_t list.
Prototype: size_t print_listint(const listint_t *h);
Return: the number of nodes
Format: see example
You are allowed to use printf
1. List lengtht
Write a function that returns the number of elements in a linked list_t list.
Prototype: size_t list_len(const list_t *h);
2. Add node
Write a function that adds a new node at the beginning of a listint_t list.\
Prototype: listint_t *add_nodeint(listint_t **head, const int n);
Return: the address of the new element, or NULL if it failed
3. Add node at the end
Write a function that adds a new node at the end of a listint_t list.\
Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
Return: the address of the new element, or NULL if it failed
4. Free list
Write a function that frees a listint_t list.
Prototype: void free_listint(listint_t *head);
4. Free list
Write a function that frees a listint_t list.
Prototype: void free_listint(listint_t *head)
