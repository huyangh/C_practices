//
// Created by huyan on 2020/5/20.

// 企业发放的奖金根据利润提成。
//
// 利润(I)低于或等于10万元时，奖金可提10%；
// 利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；
// 20万到40万之间时，高于20万元的部分，可提成5%；
// 40万到60万之间时高于40万元的部分，可提成3%；
// 60万到100万之间时，高于60万元的部分，可提成1.5%；
// 高于100万元时，超过100万元的部分按1%提成。
// 从键盘输入当月利润I，求应发放奖金总数？

#include <stdio.h>
int main(){
    double profit, bonus;
    double bonus1, bonus2, bonus3, bonus4, bonus5;

    bonus1 = 100000 * 0.1;
    bonus2 = 100000 * 0.075;
    bonus3 = 200000 * 0.05;
    bonus4 = 200000 * 0.03;
    bonus5 = 400000 * 0.015;

    printf("Please input the profit: \n");
    scanf("%lf", &profit);

    if (profit <= 100000){
        bonus = profit * 0.1;
    }else if (100000 < profit && 200000 >= profit){
        bonus = bonus1 + (profit - 100000) * 0.075;
    }else if (200000 < profit && 400000 >= profit){
        bonus = bonus1 + bonus2 + (profit - 200000) * 0.05;
    }else if (400000 < profit && 600000 >= profit){
        bonus = bonus1 + bonus2 + bonus3 + (profit - 400000) * 0.03;
    }else if (600000 < profit && 1000000 >= profit){
        bonus = bonus1 + bonus2 + bonus3 + bonus4 + (profit - 600000) * 0.015;
    }else if (1000000 < profit){
        bonus = bonus1 + bonus2 + bonus3 + bonus4 + bonus5 + (profit - 1000000) * 0.01;
    }

    printf("The bonus is : %lf.\n", bonus);
}
