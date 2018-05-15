#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* twoSum(int* nums, int numsSize, int target) {
	int *result = (int *)malloc(sizeof(int) * 2);

	int find = 0;
	int loop1;
	int loop2;
	for(loop1 = 0; loop1 < numsSize; loop1++)
	{
		int temp = target - nums[loop1];
		for(loop2 = 0; loop2 < numsSize; loop2++)
		{
			if(temp == nums[loop2])
			{
				find = 1;
				break;
			}
		}
		if(1 == find)
			break;
	}
	if(1 == find)
	{
		result[0] = loop1;
		result[1] = loop2;
		return result;
	}
	else
		return NULL;

}

int main(void)
{
	int target = 9;
	int nums[] = {4, 7, 3, 2};
	int numsSize = sizeof(nums)/sizeof(int);	
	int *res;
	printf("numsSize = %d\n", numsSize);

	res = (int *)malloc(sizeof(int)*2);
	res = twoSum(nums, numsSize, target);

	printf("nums[%d], nums[%d]\n", res[0], res[1]);
	return 0;
}
