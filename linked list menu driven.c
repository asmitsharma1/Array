#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* link;
};

struct node* root = NULL;

void append(){
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("enter the value of node: ");
    scanf("%d",&temp->data);
    temp->link = NULL;
    if(root == NULL){
        root = temp;
    }
    else{
        struct node* p;
        p = root;
        while(p->link != NULL){
            p = p->link;
        }
        p->link = temp;
    }
}

void display(){
    struct node* p;
    p = root;
    while(p != NULL){
        printf("%d->",p->data);
        p = p->link;
    }
    printf("\n");
}

int length(){
    int count = 0;
    struct node* p;
    p = root;
    while(p != NULL){
        count = count + 1;
        p = p->link;
    }
    return(count);
}
// function to delete a node
void delete(){
    struct node* p;
    p = root;
    if(p == NULL){
        printf("List is empty\n");
    }
    else{
        struct node* q;
        q = p->link;
        while(q->link != NULL){
            p = p->link;
            q = q->link;
        }
        p->link = NULL;
        free(q);
    }
}
// function to add a node at the beginning

void addbegin(){
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("enter the value of node: ");
    scanf("%d",&temp->data);
    temp->link = NULL;
    if(root == NULL){
        root = temp;
    }
    else{
        temp->link = root;
        root = temp;
    }
}
// function to add a node at a given position
void addafter(){
    struct node* temp;
    int loc;
    printf("enter the location: ");
    scanf("%d",&loc);
    if(loc > length()){
        printf("Invalid location\n");
        printf("ther is only %d nodes\n",length());
        }
    else{
        struct node* p;
        p = root;
        for(int i=1;i<loc;i++){
            p = p->link;
        }
        temp = (struct node*)malloc(sizeof(struct node));
        printf("enter the value of node: ");
        scanf("%d",&temp->data);
        temp->link = NULL;
        temp->link = p->link;
        p->link = temp;
    }
}
int main(){
    int ch;
    while(1){
        printf("Enter 1 to append\nEnter 2 to display\nEnter 3 to length\nEnter 4 to delete\n Enter 5 to addbegin \nEnter 6 to addafter\nEnter 10 to Exit\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                append();
                break;
            case 2:
                display();
                break;
            case 3:
                printf("length=%d\n",length());
                break;
            case 4:
                delete();
                break;
            case 5: 
                addbegin();
                break;
            case 6: 
                addafter();
                break;           
            case 10:
                exit(1);
                break;
            default:
                printf("invalid\n");
        }
    }
    return 0;
}