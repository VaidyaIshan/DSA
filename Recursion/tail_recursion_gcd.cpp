#include<stdio.h>
int gcd(int p,int q){
    if(p==0){
        return q;
    }
    else{
        return gcd(p-1,p*q);
    }
}
int main(){
    int n1,n2,result;
    printf("\nEnter two numbers:");
    scanf("%d%d",&n1,&n2);
    result=gcd(n1,n2);
    printf("\nResult=%d",result);
}