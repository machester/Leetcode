/**
 * Question
You are climbing a stair case. It takes n steps to reach to the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

Note: Given n will be a positive integer.

Example 1:

Input: 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
Example 2:

Input: 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step
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

