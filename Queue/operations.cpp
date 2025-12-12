#include<stdio.h>
#define SIZE 5
int queue[SIZE];
int front= -1;
int rear= -1;

void enqueue(int value){
    if(rear==SIZE-1){
        printf("\nOverflow");
    }
    else{
        if(front==-1)
        front=0;
        rear=rear+1;
        queue[rear]=value;
        printf("\n%d Enqueued",queue[rear]);
        }  
    }



void dequeue(){
    if(front==-1){
        printf("\nQueue Underflow");
    }
    else{
        printf("\nDequeued %d",queue[front]);
        front=front+1;
        if(front>rear)
        front=rear-1;
        
    }

}
void display(int queue[]){
    int i;
    printf("\n Elements in Queue:\n");
    for(i=front;i<=rear;i++){
        
        printf("%d\t",queue[i]);
    }
}
int main(){
    dequeue();

    enqueue(6);
    enqueue(7);
    enqueue(8);
    enqueue(9);
    enqueue(10);
    dequeue();

    display(queue);
    return 0;
}