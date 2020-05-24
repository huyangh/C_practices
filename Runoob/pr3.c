//
// Created by huyan on 2020/5/20.
//
// 一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？

#include <stdio.h>
#include <math.h>
int main(){
    int i, j, m, n, x;

    for (i = 2; i < 168 / 2 + 1; i += 2) {
        for (j = 168 / 2; j > 0; j -= 2) {
            m = (i + j) / 2;
            n = (j - i) / 2;
            if ((i * j == 168) && (n > 0)){
                x = n * n - 100;
                printf("%d %d %d\n", x, n, m);
            }
        }
    }

}


