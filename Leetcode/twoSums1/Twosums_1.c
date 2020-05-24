#include <stdio.h>

int* twoSum(int* nums, int numsSize, int target){
    static int ret[2] = {0};
    
    for (int i = 0; i < numsSize - 1; i++){
        for (int j = i + 1; j < numsSize; j++){
            if (nums[j] == (target - nums[i])){
                ret[0] = i;
                ret[1] = j;
                return ret;
            }
        }
    }
    return 0;
}

int main(){
    int nums[] = {2, 7, 11, 15};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int target = 26;
    int* ret = twoSum(nums, numsSize, target);
    printf("%d, %d\n", ret[0], ret[1]);
    return 0;
}