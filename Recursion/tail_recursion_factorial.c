#include<stdio.h>
int factorial(int n,int result){
    if(n==0){
        return result;
    }
    else{
        return factorial(n-1,result*n);

    }

}
int main(){
    int n,result=1;
    printf("\nEnter number to find factorial:");
    scanf("%d",&n);
    result=factorial(n,result);
    printf("\n%d",result);

}