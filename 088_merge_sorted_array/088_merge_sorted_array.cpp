/**
 * Question
Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.

Note:

The number of elements initialized in nums1 and nums2 are m and n respectively.
You may assume that nums1 has enough space (size that is greater or equal to m + n) to hold additional elements from nums2.
Example:

Input:
nums1 = [1,2,3,0,0,0], m = 3
nums2 = [2,5,6],       n = 3

Output: [1,2,2,3,5,6]


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
    }
};

*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

// #include <cstring>

using namespace std;

class Solution {
public:
    ~Solution();
    int climbStairs(int n);
    void show_string(string str);
};

int main() 
{
    int x = 8192;
    Solution solution;
    int y = solution.climbStairs(x);
    cout << "x sqrt is: " << y << endl;  
    // solution.show_string(after_operation);
    return 0;
}

void Solution::show_string(string str)
{
    cout << "string is : " << str << endl;
    
}

int Solution::climbStairs(int n)
{
    cout << "------------- start ---------" << endl;
    int retval;
    
    
    
    
    
    
    
    
    
    return retval;    
}

Solution::~Solution() 
{
    cout << "------------- end ---------" << endl;    
}

