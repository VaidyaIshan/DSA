/*
Palindrome Number or Not
Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
*/

#include<stdio.h>
int isPalindrome(int x){
    int original,remainder,count=0;
    original=x;

    if(x<0){
        return 0;
    }
    if(x==0){
        return 1;
    }

    while(original!=0){
        remainder=original%10;
        count=count*10+remainder;
        original=original/10;
    }
    if(x==count){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int num=-101;
    if(isPalindrome(num)){
        printf("%d is a Palindrome number",num);
    }
    else{
        printf("%d is not a Palindrome number",num);
    }

}