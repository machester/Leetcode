/**
 * compare every param in nums arry
 * Note:
 *     1. if target < nums[0]
 *     2. if target > nums[max]
 *     3. nums is empty
 */
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target);
};

int main() {
    
    //target = 5, target = 1, target = 6, target = 7, target = 0
    vector<int> nums = {1, 3, 5, 6}; 
    Solution solution;
    int retVal = solution.searchInsert(nums, 7);
    std::cout << "position = " << retVal << endl;
    return 0;
}

int Solution::searchInsert(vector<int>& nums, int target)
{
    // if nums is empty or nums[0] = target or nums[0] > target, return index 0
    if(nums.empty() || (target <= nums[0])) 
        return 0;

    for(int index = 1; index < nums.size(); index++){
        if(nums[index] == target)
            return index;
        else if((nums[index - 1] < target) && (nums[index] > target)){
            return index;
        }
    }
    if(target > nums[nums.size() - 1])
        return nums.size();
    return 0;
}