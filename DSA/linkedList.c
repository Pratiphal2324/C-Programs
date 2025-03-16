#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*p;
int countNodes(struct node *list){
    if(list == NULL){
        return 0;
    }else{
    struct node *temp;
    temp = list;
    int c = 0;
    do{
        c++;
        temp = temp->next;
    }while(temp!=NULL);
    return c;
    }
}
void insertBeg(int el){
    struct node *element;
    element = (struct node*)malloc(sizeof(struct node));
    element->data = el;
    element->next = p==NULL ? NULL : p;
    p = element;
}
void delBeg(int x){
    for(int i=0; i<x; i++){
        p = p->next;
    }
}
void insertEnd(int el){
    struct node *element;
    element = (struct node*)malloc(sizeof(struct node));
    element->data = el;
    element->next = NULL;
    struct node *temp;
    temp = p;
    if(p == NULL){
        p = element;
    }
    else if(countNodes(p) == 1){
        p->next = element;
    }else{
        for(int i=0; i<countNodes(p)-1; i++){
            temp = temp->next;
        }
        temp->next = element;
    }
}
void delEnd(int x){
    struct node *temp;
    temp = p;
    if(p == NULL || x>countNodes(p)){
        printf("Not enough elements!\n");
    }else if(x == countNodes(p)){
        p = NULL;
    }else if(countNodes(p) - x == 1){
        p->next = NULL;
    }else{
    for(int i=0; i<countNodes(p)-x-1; i++){
        temp = temp->next;
    }
    temp->next = NULL;
    }
}
int c = 0;
void revers(int nodeNo){
    struct node *temp1 , *temp2;
    temp1 = p;
    struct node *lastNode;
    int noOfNodes;
    if(c==0){
        noOfNodes = countNodes(p);
        for(int i=0; i<noOfNodes-1; i++){
            temp1 = temp1->next;
        }
        lastNode = temp1;
    }
    if(nodeNo == 1){
        p->next = NULL;
        p = lastNode;
    }else if(nodeNo == 2){
        p->next->next = p;
        revers(1);
    }
    else{
        int node = 0;
        for(int i=1; i<=nodeNo-1; i++){
            temp1 = temp1->next;
            if(i == nodeNo - 2){
                node = nodeNo - 1;
                temp2 = temp1;
            }
        }
        temp1->next = temp2;
        c++;
        revers(node);
    }
}
void displayList(){
    struct node *temp;
    temp = p;
    for(int i=0; i<countNodes(p); i++){
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}
int main(){
    insertEnd(1);
    insertEnd(2);
    insertBeg(5);
    insertEnd(2);
    insertEnd(20);
    revers(5);
    // insertEnd(5);
    // insertEnd(6);
    // printf("%lu\n",sizeof(p));
    // delEnd(1);
    // delBeg(1);
    // revers(2);
    displayList();
    printf("No. of nodes: %d\n", countNodes(p));
}