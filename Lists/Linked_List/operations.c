// #include<stdio.h>
// struct Node{
//     int data;
//     struct NODE *next;
// };
// int main(){
//     struct Node *start;
//     struct Node n1,n2,n3,n4;
//     n1.data=10;
//     n2.data=20;
//     n3.data=30;
//     n4.data=40;

//     n1.next=&n2;
//     n2.next=&n3;
//     n3.next=&n4;
//     n4.next=NULL;

//     start=&n1;

//     struct Node *temp=start;
//     while(temp!=NULL){
//         printf("%d->",temp->data);
//         temp=temp->next;
//     }

// }

#include<stdio.h>
struct Node{
    int data;
    struct NODE *next;
};
int main(){
    struct Node *start;
    struct Node n1,n2,n3,n4;
    n1.data=10;
    n2.data=20;
    n3.data=30;
    n4.data=40;

    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    n4.next=NULL;

    start=&n1;

    struct Node *temp=start;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }

}