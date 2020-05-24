#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    returnSize = (int*)malloc(2 * sizeof(int));
    
    for(int i = 0; i < numsSize - 1; i ++){
        for(int j = i + 1; j < numsSize; j++){
            if((nums[i] + nums[j]) == target){
                *returnSize = i;
                *(returnSize + 1) = j;
            }
        }
    }
    return returnSize;
}

int main(){
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int * returnSize = NULL;
    int * p = twoSum(nums, numsSize, target, returnSize);
    printf("[%d, %d]", *p, *(p + 1));
    free(returnSize);
}

