class Solution {
public:
	int removeElement(vector<int>& nums, int val) {
		if (nums.empty())
			return 0;
		int *pbegin = NULL;
		int *position = NULL;

		for (vector<int>::iterator item = nums.begin(); item != nums.end(); item++) {
			if (*item == val) {
				pbegin = item;
				position = item + 1;
			}
			for ()
			}
	}
};