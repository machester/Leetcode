#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int removeElement(vector<int>& nums, int val);
	int removeElement_byArry(vector<int>& nums, int val);
};
int main() {
	std::cout << "arry in :" <<std::endl;
	vector<int>nums;

//	for(int index = 0; index < 10; index++)
//		nums.push_back(index);
	nums = {0,1,2,2,3,0,4,2, 2};
//	nums = {1, 1, 1};
//	nums = {4, 5};
//	nums = {2, 2, 3};

	for(vector<int>::iterator coor = nums.begin(); coor != nums.end(); coor++)
		cout << " --> " << *coor << " ";
	cout << endl << "---------------------------------------------------" << endl;

	Solution  solution;
	int len = solution.removeElement_byArry(nums, 2);
	cout << "len = " << len << endl;
	for(int i = 0; i < len; i++)
		cout << " --> " << nums[i] << " ";
	cout << endl << "---------------------------------------------------" << endl;
	return 0;
}
int Solution::removeElement_byArry(vector<int> &nums, int val)
{
	int retLen = nums.size();
	for(int index = 0; index < retLen; index++){
		if(nums[index] == val){
			//retLen -1 to make sure nums[i+1] in range,
			// and direct cut the arry last item if item = val.
			for(int i = index; i < retLen - 1; i++){	//max compare to nums.size() - 1
				nums[i] = nums[i + 1];
			}
			retLen--;	// after moved arry total length - 1
			index--;	// move index to current position after moved arry
		}
	}
	return retLen;
}
int Solution::removeElement(vector<int> &nums, int val)
{
	if (nums.empty())
		return 0;
	int length = nums.size() - 1;
	int *position = NULL;
	int *replace = &nums[length];
	int index;
	for (index = 0; index <= length; index++) {
		if (nums[index] == val){
			position = &nums[index];
		}
		if((position != NULL) && (index < length)){
			while (*position == *replace)
			{
				replace--;
				length--;
			}
			if(length <= 0)		// index to arry start positon, search finished
				break;
			*position = *replace;
			position = NULL;
			length = length - 1;
			replace = &nums[length];		//remember move the replace pointer to usefal positon.
		}
	}
	if(NULL != position)
		index = index - 1;
	return index;
}