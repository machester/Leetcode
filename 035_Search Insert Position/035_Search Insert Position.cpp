class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        if(nums.empty())
            return 0;
        
        for(int index = 0; index < nums.size(); index++){
            if(nums[index] == target)
                return index;
            else if((nums[index] <= target) && (nums[index + 1] >= target)){
                return (index + 1);
            }
        }
        return 0;
    }
};