#include<stdio.h>
int stack[100];
int fact(int n){
    int i=0;
    
    if(n==1 || n==0){
        printf("\nBase Condition in Recursion\t");
        stack[i]=n;
        printf("%d*",stack[i]);
        i=i+1;
        return 1;
        
    }
    else
    {   printf("\nRecursive Condition in Recursion\t");
        stack[i]=n;
        printf("%d*",stack[i]);
        i=i+1;
        return n*fact(n-1);
    }
}
int main(){
    int n,result,i;
    printf("\n Enter a number to find factorial:");
    scanf("%d",&n);
    printf("\nElements in Stack:");
    result=fact(n);
    printf("\n%d is the factorial of %d\n",result,n);
    
}