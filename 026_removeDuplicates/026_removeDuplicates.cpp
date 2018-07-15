class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() <= 1)
            return nums.size();

        int numLength = 1;
        int *front = &nums[0];
        int *rear;
        for (int index = 1; index < nums.size(); index++) {
            rear = &nums[index];
            if (*front == *rear)
                rear++;
            else {
                nums[numLength] = *rear;
                front++;
                rear++;
                numLength++;
            }
        }
        return numLength;
    }
};