#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>
#include <malloc.h>

void show_arry(int arryx[], int length)
{
    printf("arry[] = ");
    for(int index = 0; index < length; index++) {
        // printf("--> %d, 0x%x", arryx[index], &arryx[index]);
        printf("--> %d", arryx[index]);
    }
    printf("\n");
}
void merge(int * nums1, int m, int * nums2, int n)
{
    int ret;
    int len = n + m;
    
    printf("-------- check -----------\n");  
    printf("-------- m = %d ----------\n", m);
    show_arry(nums1, m);  
    printf("-------- m = %d ----------\n", n);  
    show_arry(nums2, n);
    printf("--- total length = %d ----\n", len);
    printf("--------------------------\n");
    

    
    if(!n)
        return ;
    if(!m) {
        nums1 = nums2;
        return ;
    }
    
    int * temp = (int *)malloc(sizeof(int) * len);
    memset(temp, 0, sizeof(int) * len);
    show_arry(temp, m);
    
    int rear_nums1 = 0;
    int rear_nums2 = 0;
    int finish_flag = 0;
    int index = 0;
    
    while(finish_flag == 0) {
        if(nums1[rear_nums1] == nums2[rear_nums2]) {
            temp[index] = nums1[rear_nums1];
            rear_nums1++;
            rear_nums2++;
        } else if (nums1[rear_nums1] > nums2[rear_nums2]) {
            // if(temp[index] != nums2[rear_nums2])
                temp[index] = nums2[rear_nums2];
            rear_nums2++;
        } else if (nums1[rear_nums1] < nums2[rear_nums2]) {
            // if(temp[index] != nums1[rear_nums1])
                temp[index] = nums1[rear_nums1];
            rear_nums1++;
        }
        
        if(rear_nums1 == m || rear_nums2 == n) {
            printf("---> rear_nums1 = %d ---> rear_nums2 = %d, ---> index = %d\n", rear_nums1, rear_nums2, index);
            finish_flag = 1;
        } else
            index++;
        show_arry(temp, len);
    }
    
    if(rear_nums1 == m && rear_nums2 != n)
        memcpy((temp + index + 1), (nums2 + rear_nums2), (sizeof(int) * (n - rear_nums2)));
    else if(rear_nums1 != m && rear_nums2 == n)
        memcpy((temp + index + 1), (nums1 + rear_nums1), (sizeof(int) * (m - rear_nums1)));
    show_arry(temp, len);
    // delete 0
    printf("-------- delete 0 ---------\n");
    while(temp[--len] == 0 && len >= m);
    len = len + 1;
    printf("---> list arry length = %d\n", len);
    int *answer = (int *)malloc(sizeof(int) * len);
    for(int loop = 0; loop < len; loop++) {
        answer[loop] = temp[loop];
    }
    nums1 = answer;
    show_arry(nums1, len);
}

int main(int argc, char **argv)
{
    // int nums1[] = {1, 2, 3};
    // int nums2[] = {2, 5, 6};
    // int nums1[] = {1};//, 2, 3};
    // int nums2[] = {1};//, 5, 6};
    // int nums1[] = {1};//, 2, 3};
    // int nums2[] = {};//, 5, 6};
    int nums1[] = {1, 2, 3,0,0,0};
    int nums2[] = {2,5,6};
    int m = sizeof(nums1)/sizeof(int);
    int n = sizeof(nums2)/sizeof(int);
    
    merge(nums1, 3, nums2, 3);
    
    
    return 0;
}