#include <stdio.h>
#include <stdlib.h>
//Singly Linked List Creation,Insertion,Deletion,Traversal
struct Node{
    int date;
    struct Node*next;
};
struct Node*head=NULL;
void insertEnd(int value){
    struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=NULL;
    if(head==NULL){
        head=newNode;
    }
    else{
        struct Node*temp=head;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=newNode;
    }
}
void insertBeginning(int value){
    struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=head;
    head=newNode;
}
void deleteNode(int value){
    struct Node *temp=head,*prev=NULL;
    if(temp!=NULL&&temp->data==value){
        head=temp->next;
        free(temp);
        return;
    }
    while(temp!=NULL&&temp->data!=value){
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL){
        printf("Value not found\n");
        return;
    }
    prev->next=temp->next;
    free(temp);

}
void display(){
    struct Node*temp=head;
    if(head==NULL){
        printf("List is empty.\n");
        return;
    }
    printf("Linked List:");
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main(){
    int choice,value;
    while(1){
        printf("\n---Singly Linked List Menu---\n");
        printf("1.Insert ata Beginning\n");
        printf("2.Insert at End\n");
        printf("3.Delete a Node\n");
        printf("4.Display List\n");
        printf("5.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case1:
                printf("Enter value:");
                scanf("%d",&value);
                insertBeginning(value);
                break;
            case2:
                printf("Enter value:");
                scanf("%d",&value);
                insertEnd(value);
                break;
            case3:
                printf("Enter value to delete:");
                scanf("%d",&value);
                deleteNode(value);
                break;
            case4:
                display();
                break;
            case5:
                exit(0);
        default:
            printf("Invalid Choice!\n");

        }
    }

}
