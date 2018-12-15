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
    int lengthOfLastWord(string s);
};

int main() {

    string s = "hello wrold msg";
    Solution solution;
    int lastLength = solution.lengthOfLastWord(s);
    std::cout << "last length = " << lastLength << endl;
    return 0;
}

int Solution::lengthOfLastWord(string s)
{
    if (0 == s.length())
        return 0;
}