#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;

};

void LinkedlistTraversal(struct node*ptr){
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }

}

int main(){
    struct node * head;
    struct node * second;
    struct node * third;
    
    //allocate memory for nodes in the linked list in heap
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
   
    //linked first and second node
    head->data=7;
    head->next=second;
    //linked second and third node
    second->data=11;
    second->next=third;
    //terminate the list at the third node
    third->data=15;
    third->next=NULL;
   //traversal
   LinkedlistTraversal(head);
return 0;
}
