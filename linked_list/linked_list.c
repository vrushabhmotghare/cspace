#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

void display(struct node *head){
    while(head != NULL)
    {
        printf("%d-->",head->data);
        head =head->next;
    }
}

void insert_at_start(struct node **head)
{
    int data=0;
    printf("Enter the data at the start of teh list\n");
    scanf("%d",&data);
    struct node *newnode =(struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next =*head;
    *head =newnode;
}

void insert_at_end(struct node **head)
{
    int data =0;
    printf("Enter the data at the end of the list\n");
    scanf("%d",&data);
    struct node * newnode =(struct node *)malloc(sizeof(struct node));
    struct node *temp =*head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next =newnode;
    newnode->data= data;
    newnode->next = NULL;
}

void delete_at_start(struct node **head){
    struct node *temp = *head;
    *head = temp->next;
    free(temp);
}

  
struct node *  insert(struct node **head){
    int val =0;
    printf("Enter the new value->\n");
    scanf("%d",&val);
    struct node * temp = NULL;
    temp =(struct node *)malloc(sizeof(struct node));
    temp->data= val;
    temp->next = *head;
    *head = temp;
    return *head;
}

struct node * delete(struct node **head, int index)
{
    int x =0;
    int i =0;
    struct node * temp = *head;
    while(temp!= NULL && i < index-1)
    {
        temp = temp->next;
        i++;
    }
    struct node *node_to_delete= temp->next;
    temp->next = node_to_delete->next;
    free(node_to_delete);
    return *head;
}

void search(struct node * head)
{
    int x =0;
    int pos=0;
    printf("Enter the value to be search\n");
    scanf("%d",&x);
    while(head != NULL)
    {
        if(head->data == x)
        {
            printf("%d",pos);
        }
        pos++;
        head =head->next;
    }
}

int main()
{
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    if(head == NULL)
    {
        printf("memory allocation failed\n");
        return -1;
    }
    head->data =10;
    head->next = NULL;

    insert(&head);
    insert(&head);
    insert(&head);
    insert(&head);

    display(head);
    delete(&head,3);
    display(head);
    insert_at_start(&head);
    display(head);
    insert_at_end(&head);
    display(head);
    printf("\n");
    delete_at_start(&head);   
    display(head);
    printf("\n");
    search(head);


}