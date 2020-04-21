
/******************************************************************************************************
表达式求值

题目描述
给定一个字符串描述的算术表达式，计算出结果值。

输入字符串长度不超过100，合法的字符包括”+, -, *, /, (, )”，”0-9”，字符串内容的合法性及表达式语法的合法性由做题者检查。本题目只涉及整型计算。

输入描述:
输入算术表达式

输出描述:s
计算出结果值

示例1
输入
复制
400+5
输出
复制
405
*******************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int find_one(int num)
{
    int tmp_num = num;
    int sum = 0;

    while (0 != tmp_num)
    {
        if(1 == (tmp_num % 2))
            sum += 1;
        tmp_num = tmp_num / 2;
    }
    return sum;
}


int main(void)
{
    int answer;
    int input_num = 0;
    printf("Please input:");
    scanf("%d", &input_num);
    
    printf("num: %d\n", input_num);
    answer = find_one(input_num);
    printf("answer = %d\n", answer);
    return 0;
}

