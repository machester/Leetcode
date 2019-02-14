/**
 * @file 088_merge_sorted_array.c
 * @author your name (you@domain.com)
 * @brief 
 *      1. total array parameter is m+n
 *      2. merge array from nums1 tail to head
 *      3. 归并排序
 * @version 0.1
 * @date 2019-02-14
 * 
 * @copyright Copyright (c) 2019
 * 
 * @Other
 *      行用时: 8 ms, 在Merge Sorted Array的C提交中击败了29.70% 的用户
 *      存消耗: 7.6 MB, 在Merge Sorted Array的C提交中击败了0.86% 的用户
 */


#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>
#include <malloc.h>
void show_arry(int arryx[], int length)
{
    printf("arry[] = ");
    for(int index = 0; index < length; index++)
        printf("%d, ", arryx[index]);
    printf("\n");
}

void merge(int* nums1, int m, int* nums2, int n) {
    if(!n) {
        printf("nums2 is empty\n");
        return ;
    }
    if(!m) {
        printf("nums1 is empty\n");
        memcpy(nums1, nums2, sizeof(int) * n);
        return ;
    }
    
    int ret;
    int len = n + m;
    int * temp = (int *)malloc(sizeof(int) * len);
    memset(temp, 0, sizeof(int) * len);
    
    int rear_nums1 = 0;
    int rear_nums2 = 0;
    int finish_flag = 0;
    int index = 0;
    
    while(finish_flag == 0) {
        if(nums1[rear_nums1] == nums2[rear_nums2]) {
            temp[index] = nums1[rear_nums1];
            temp[index + 1] = nums2[rear_nums2];
            rear_nums1++;
            rear_nums2++;
            index += 1;
        } else if (nums1[rear_nums1] > nums2[rear_nums2]) {
            temp[index] = nums2[rear_nums2];
            rear_nums2++;
        } else if (nums1[rear_nums1] < nums2[rear_nums2]) {
            temp[index] = nums1[rear_nums1];
            rear_nums1++;
        }
        
        if(rear_nums1 == m || rear_nums2 == n)
            finish_flag = 1;
        else
            index++;
    }
    if(rear_nums1 == m && rear_nums2 != n)
        memcpy((temp + index + 1), (nums2 + rear_nums2), (sizeof(int) * (n - rear_nums2)));
    else if(rear_nums1 != m && rear_nums2 == n)
        memcpy((temp + index + 1), (nums1 + rear_nums1), (sizeof(int) * (m - rear_nums1)));
    memcpy(nums1, temp, sizeof(int) * len);
}

// make sure nums1 allocate enough space
// no need allocate memory in merge function
int main(int argc, char **argv)
{
    // int nums1[] = {1, 2, 3};
    // int nums2[] = {2, 5, 6};
    // int nums1[] = {1};//, 2, 3};
    // int nums2[] = {1};//, 5, 6};
    // int nums1[] = {1};//, 2, 3};
    // int nums2[] = {};//, 5, 6};
    // int nums1[] = {1, 2, 3, 0, 0, 0};
    // int nums2[] = {2, 5, 6};
    int nums1[] = {0};
    int nums2[] = {1};
    int m = sizeof(nums1)/sizeof(int);
    int n = sizeof(nums2)/sizeof(int);
    // specificate nums1 parameter number
    merge(nums1, 1, nums2, n);
    printf("---------- after merge -----------\n");
    show_arry(nums1, 6);
    
    return 0;
}