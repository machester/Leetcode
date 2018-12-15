/**
 * Question
 * Given a non-empty array of digits representing a non-negative integer, plus one to the integer.

    The digits are stored such that the most significant digit is at the head of the list, and each element in the array contain a single digit.

    You may assume the integer does not contain any leading zero, except the number 0 itself.

    Example 1:

    Input: [1,2,3]
    Output: [1,2,4]
    Explanation: The array represents the integer 123.
    Example 2:

    Input: [4,3,2,1]
    Output: [4,3,2,2]
    Explanation: The array represents the integer 4321.
 */
/**
 * compare every param in nums arry
 * Note:
 *      1. if string is empty
 *      2. set to point to value element head and tail
 *      3. first thing is find a value element tail
 *      4. if end point is null after loop means that no valued element in string
 */
/**
 * @Description: can accept string like "a ", last word is a divid element
 */
#include <iostream>
#include <vector>
#include <string>
// #include <cstring>

using namespace std;

class Solution {
public:
    ~Solution();
    vector<int> plusOne(vector<int>& digits);
};

int main() {

    vector<int> foo;
    for(int index = 1; index < 5; index++) {
        foo.push_back(index);
    }
    
    Solution solution;
    solution.plusOne(foo);
    for(vector<int> iterator item = foo.begin(); item < foo.end())
    return 0;
}

Solution::vector<int> plusOne(vector<int>& digits)
{
    cout << "------------- start ---------" << endl;
    if (s.empty())
        return digits;
        
}

Solution::~Solution() 
{
    cout << "------------- end ---------" << endl;    
}