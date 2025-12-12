#include<stdio.h>
#define SIZE 5
int stack[SIZE];
int top=-1;

void push(int value){
    if(top==SIZE-1){
        printf("\nStack Overflow");
    }
    else{
        top=top+1;
        stack[top]=value;
        printf("\nPushed %d",stack[top]);
    }


}
void pop(){
    if(top==-1){
        printf("\nNo elements in stack to pop");
    }
    else{
    printf("\nPopped %d",stack[top]);
    top=top-1;
    }
}
void display(){
    int i;
    if(top==-1){
        printf("\n No Elements in stack");
    }
    else{
        printf("\nElements in stack:\n");
    for(int i=0;i<=top;i++){
        printf("%d\t",stack[i]);
    }
}
}

void peek(){
    if(top==-1){
        printf("\nNo elements in stack");
    }
    else
    printf("\n%d is the element on top",stack[top]);
}

int main(){
    pop();
    push(1);
    push(2);
    push(3);
    pop();
    peek();
    display();


}