#include<stdio.h>
#define MAX 5
int arr[MAX];
int SIZE;

int isfull(){
    if(SIZE==MAX){
        printf("List is Full");
        return 1;
    }
}

void insert(int SIZE,int pos){
if (!isfull()){
for(int i=SIZE;i<=pos;i++){
    arr[i]=arr[i-1];
}
}
}

void del(int SIZE,int pos){
if(SIZE==0){
    printf("\nList IS empty");
}
else{
    arr[i]=arr[i+1];

}
}


int main(){


}