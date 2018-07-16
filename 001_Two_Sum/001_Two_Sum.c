/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* twoSum(int* nums, int numsSize, int target) {
    
    int mark = 0;
    int *result = (int *)malloc(sizeof(int) * 2);
    for(int loop1 = 0; loop1 < numsSize; loop1++)
    {
        for(int loop2 = loop1+1; (loop2 < numsSize) && (loop2 != loop1); loop2++)
        {
            if(target == nums[loop2] + nums[loop1])
            {
                result[0] = loop1;
                result[1] = loop2;
                mark = 1;
            }
        }
    }
    if(1 == mark)
        return result;
    else
        return NULL;
}