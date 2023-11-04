//
// Created by Shin on 2023/10/24.
//

#ifndef CLION_C_FIND_NARCISSISTIC_H // 避免多个文件重复导入
#define CLION_C_FIND_NARCISSISTIC_H // 定义一个预处理宏定义
#include <stdio.h>
#include <math.h>

void find_Narcissistic(int num) {
    // find Narcissistic number that < input num
    for (int i = 100; i < num; i++) {

        int a = i / 100;
        int b = (i / 10) % 10;
        int c = i % 10;

        if (pow(a, 3) + pow(b, 3) + pow(c, 3) == i) {
            printf("%d is the Narcissistich number!\n", i);
        }
    }
}


#endif //CLION_C_FIND_NARCISSISTIC_H // 表示条件命令的结束
