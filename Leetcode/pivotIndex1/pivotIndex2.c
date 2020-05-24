#include <stdio.h>

int pivotIndex(int* nums, int numsSize);

int pivotIndex(int* nums, int numsSize){
    if ((nums == NULL) || (numsSize < 3)){
        return -1;
    }

    int sum1 = 0;
    int temp = 0;

    for (int i = 0; i < numsSize; i++){
        sum1 += nums[i];
    }

    for (int i = 0; i < numsSize; i++){

        if ((sum1 - nums[i]) == (2 * temp) ){
            return i;
        }
        temp += nums[i];
    }
    return -1;
}

int main(){
    int a[] = {1,7,3,6,5,6};
//     int a[] = {-1, -1, -1, 1, 1, -1};
//    int a[] = {-1, -1, 0, 1, 1, -1};
//    int a[] = {-1, -1, 1, 1, 0, 0};

    int size = sizeof(a) / sizeof(a[0]);
    int pI = pivotIndex(a, size);
    printf("%d\n", pI);
}