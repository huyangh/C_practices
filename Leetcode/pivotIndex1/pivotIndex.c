#include <stdio.h>

int pivotIndex(int* nums, int numsSize);

int pivotIndex(int* nums, int numsSize){
    int sum1 = 0;
    int sum11 = 0;
    int sum2 = 0;
    int sum22 = 0;
    int yes = 0;

    if (numsSize >= 2){
        for (int i = 0; i < numsSize; i++){
            if (i != (numsSize - 1)) {

                for (int k = i + 1; k < numsSize; k++){
                    sum2 += nums[k];
                }

                sum22 = sum2;
                sum2 = 0;

                if (i != 0){
                    for (int j = 0; j < i; j++){
                        sum1 += nums[j];
                    }

                    sum11 = sum1;
                    sum1 = 0;
                }

            }else{
                for (int j = 0; j < i; j++){
                    sum1 += nums[j];
                }

                sum11 = sum1;
                sum1 = 0;
                sum22 = 0;
            }

            if (sum11 == sum22){
                yes = i;
                break;
            }else{
                yes = -1;
            }
        }
    }else{
        yes = -1;
    }
    return yes;
}

int main(){
    int a[] = {1,7,3,6,5,6};
//     int a[] = {-1, -1, -1, 1, 1, -1};
    int size = sizeof(a) / sizeof(a[0]);
    int pI = pivotIndex(a, size);

    printf("%d", pI);
}