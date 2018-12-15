/**
 * compare every param in nums arry
 * Note:
 *     1. if target < nums[0]
 *     2. if target > nums[max]
 *     3. nums is empty
 */
#include <iostream>
#include <vector>
#include <string>
// #include <cstring>

using namespace std;

class Solution {
public:
    ~Solution();
    int lengthOfLastWord(string s);
};

int main() {

    // string s = "hello wrold msg";
    // string s = "Hello World";
    string s = "a";
    Solution solution;
    int lastLength = solution.lengthOfLastWord(s);
    cout << "last length = " << lastLength << endl;
    return 0;
}

int Solution::lengthOfLastWord(string s)
{
    int ret = 0;
    cout << "------------- start ---------" << endl;
    if (s.empty())
        return ret;
    
    int len = s.length();
    cout << "length = " << len << endl;
    if(!((s[len - 1] >= 'a' && s[len - 1] <= 'z') || (s[len - 1] >= 'A' && s[len - 1] <= 'Z')))
        return ret;
        
    int index = 0;
    for(index = len - 1; index >= 0; index--) {
        if((s[index] >= 'a' && s[index] <= 'z') || (s[index] >= 'A' && s[index] <= 'Z')) {
            cout << "loop : " << index << ", s["<< index <<"] = " << s[index] << endl;
        } 
        else
            break;
    }
    cout << "index = " << index << endl;
    if(index == (len - 1)) {     // not run loop
        ret = 1;
        cout << "ret = " << ret << endl;
    } 
    else if (-1 == index)               // run whole loop
        ret = len;
    else {                              // run part of loop 
        ret = len - index - 1;
        cout << "ret = " << ret << endl;
    }
    cout << "last word length = " << ret << endl;
    return ret;
}

Solution::~Solution() 
{
    cout << "------------- end ---------" << endl;    
}