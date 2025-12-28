/*
TWO SUM
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1]

Given an array of integers nums and an integer target, return indices of the two numbers such that
they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.
*/

#include<stdio.h>
#include<stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int *returnSize) {
    int i,j;
    
   
    int *indices=(int *)malloc(*returnSize*sizeof(int));
    for(i=0;i<numsSize;i++){
        for(j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==target){
                indices[0]=i;
                indices[1]=j;
                return indices;
            }
        }
    }
    return indices;
    
}
int main(){
    int nums[]={2,7,11,15};
    int numsSize=4;
    int target=9;
    int *result;
    int returnSize=2;
    result=twoSum(nums,numsSize,target,&returnSize);
    printf("\n[%d,%d]\n",result[0],result[1]);
    return 0;

}

// For pointer args in functions we pass address (here for returnSize)

