#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
};

struct node *add_to_list_end(struct node *first, int value)
{
    struct node *new_node = malloc(sizeof(struct node));

    if (!new_node)
    {
        printf("Error: malloc failed in add_to_list\n");
        exit(EXIT_FAILURE);
    }
    new_node->value = value;
    new_node->next = first; // NULL at first
    first = new_node;
    // the head now points to new_node, and new_node->next points to head, which at first iS NULL,
    // but after the second node is added new_node->next will point to the head, which points to the last inserted node, and new_node and becomes the first, and so on
    return new_node;
}
void add_to_list_after(struct node *previous, int value)
{
    struct node *new_node = malloc(sizeof(struct node));
    new_node->value = value;
    new_node->next = previous->next;
    previous->next = new_node;
}

struct node *search_list(struct node *list, int value)
{
    struct node *p;
    for (p = list; p != NULL; p = p->next) // p = p->next advances to next node on the list
        if (p->value == value)
            return p;
    return NULL; // didn't find the value
}

struct node *delete_from_list(struct node *list, int value)
{
    struct node *cur, *prev;
    for (cur = list, prev = NULL;
         cur != NULL && cur->value != value;
         prev = cur, cur = cur->next);
    if (cur == NULL)
        return list;
    if (prev == NULL)
        list = list->next;
    else
        prev->next = cur->next;
    free(cur);
    return list;
}
void print_list(struct node *list)
{
    for (; list != NULL; list = list->next)
    {
        printf("List value: %d\n", list->value);
    }
}

int main()
{
    struct node *list = NULL;
    struct node *prev;
    list = add_to_list_end(list, 10);
    list = add_to_list_end(list, 5);
    list = add_to_list_end(list, 20); // head
    prev = search_list(list, 20);// prev.value == 20
    add_to_list_after(prev, 50);//50 depois de 20
    list = delete_from_list(list, 10);
    if (prev == NULL)
    {
        printf("Elemento não encontrado.");
    }
    else
    {
        printf("Prev: %d\n", prev->value);
    }
    print_list(list);
    return 0;
}
// alternative
// struct node *search_list(struct node *list, int n)
// {
//     for (; list != NULL; list = list->next)
//         if (list->value == n)
//             return list;
//     return NULL;
// }

// struct node *search_list(struct node *list, int n)
// {
//     for (; list != NULL && list->value != n; list = list->next)
//         ;
//     return list;
// }

// struct node *search_list(struct node *list, int n)
// {
//     while (list != NULL && list->value != n)
//         list = list->next;
//     return list;
// }