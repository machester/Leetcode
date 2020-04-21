/******************************************************************************************************
题目描述
输入一个int型的正整数，计算出该int型数据在内存中存储时1的个数。

输入描述:
 输入一个整数（int类型）

输出描述:
 这个数转换成2进制后，输出1的个数
示例1
输入
复制
5
输出
复制
2
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
    printf("Please input num:");
    scanf("%d", &input_num);
    
    printf("num: %d\n", input_num);
    answer = find_one(input_num);
    printf("answer = %d\n", answer);
    return 0;
}


