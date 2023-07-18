#include <stdio.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start = NULL;
struct node *creat(struct node *start);
struct node *display(struct node *start);
struct node *insert_beg(struct node *start);
struct node *insert_end(struct node *start);
struct node *insert_befor(struct node *start);
struct node *insert_after(struct node *start);
struct node *del_beg(struct node *start);
struct node *del_end(struct node *start);
struct node *del_after(struct node *start);
void main()
{
    int ch;
    do
    {
        printf("\n");
        printf("1 : creat\n");
        printf("2 : display\n");
        printf("3 : insert at beg\n");
        printf("4 : insert at end\n");
        printf("5 : insert at befor\n");
        printf("6 : insert at after\n");
        printf("7 : del at beg\n");
        printf("8 : del at end\n");
        printf("9 : del at after\n");
        printf("10 : for exit\n");
        printf("-----------------------------\n");
        printf("please enter your choice\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            creat(start);
            break;
        case 2:
            display(start);
            break;
        case 3:
            insert_beg(start);
            break;
        case 4:
            insert_end(start);
            break;
        case 5:
            insert_befor(start);
            break;
        case 6:
            insert_after(start);
            break;
        case 7:
            del_beg(start);
            break;
        case 8:
            del_end(start);
            break;
        case 9:
            del_after(start);
            break;
        case 10:
            exit(0);
        }

    } while (ch != 10);
    return 0;
}
struct node *creat(struct node *start)
{
    struct node *newnode, *ptr, *current;
    int n, i;
    printf("\n enter how many data you want to enter :\t");
    scanf("%d", &n);
    if (n == 0)
    {
        return 0;
    }
    newnode = start;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nenter the value : ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    ptr = newnode;

    for (i = 2; i <= n; i++)
    {
        current = (struct node *)malloc(sizeof(struct node));
        printf("enter the value : ");
        scanf("%d", &current->data);
        ptr = current;
    }
    current->next = NULL;
    return newnode;
}
struct node *display(struct node *start)
{
    struct node *current;
    current = start;
    if (current == NULL)
    {
        printf("\nlinklisted is empty\n");
        return;
    }
    printf("the linkedlist is :\n");
    while (current != NULL)
    {
        printf("%d\t", current->data);
        current = current->next;
    }
}
struct node *insert_beg(struct node *start)
{
    struct node *newnode;
    int num;
    printf("enter the data : ");
    scanf("%d", &num);
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = num;
    newnode->next = start;
    start = newnode;
    return start;
}
struct node *insert_end(struct node *start)
{
    struct node *newnode, *ptr;
    int num;
    printf("enter the data");
    scanf("%d", &num);
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = num;
    newnode->next = NULL;
    ptr = start;
    while (ptr->next != NULL)
        ptr = ptr->next;
    ptr->next = newnode;
    return start;
}
struct node *insert_after(struct node *start)
{
    struct node *newnode, *ptr, *preptr;
    int num, value;
    printf("enter the data : ");
    scanf("%d", &num);
    printf("enter the before which the node is inserted : ");
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = num;
    ptr = start;
    preptr = ptr;
    while (preptr->data != value)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = newnode;
    newnode->next = ptr;
    return start;
}
struct node *insert_befor(struct node *start)
{

    struct node *newnode, *ptr, *preptr;
    int num, value;
    printf("enter the data : ");
    scanf("%d", &num);
    printf("enter the before which the node is inserted : ");
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = num;
    ptr = start;
    while (ptr->data != value)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = newnode;
    newnode->next = ptr;
    return start;
}
struct node *del_beg(struct node *start)
{
    struct node *ptr;
    ptr = start;
    start = start->next;
    free(ptr);
    return start;
}
struct node *del_end(struct node *start)
{
    struct node *ptr, *preptr;
    ptr = start;
    while (ptr->next != NULL)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = NULL;
    free(ptr);
    return start;
}
struct node *del_after(struct node *start)
{
    struct node *ptr, *preptr;
    int value;
    printf("enter the position after which the node is deleted : ");
    scanf("%d", &value);
    ptr = start;
    while (preptr->data != value)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = ptr->next;
    free(ptr);
    return start;
}