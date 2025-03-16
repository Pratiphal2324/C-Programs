#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

struct node
{
    int data;
    struct node* link;
};

int main(int argc, char const *argv[])
{
    int n,con;
    struct node* head = NULL;
    struct node* next = NULL;
    next->data=0;
    next->link=NULL;
    struct node*tmp = NULL;
    head=malloc(sizeof(struct node));
    top:
    printf("Enter the data to be added : ");
    scanf("%d",&n);
    tmp=head;
    tmp->data=n;
    tmp->link=next;
    printf("Do you want to continue adding? (1 for yes and 2 for no): \n");
    scanf("%d",&con);
    switch (con)
    {
    case 1:
        tmp=tmp->link;
        goto top;
        break;
    
    case 2:
        break;
    }
    printf("%d",tmp->data);
    printf("%d",next->data);
    return 0;
}
