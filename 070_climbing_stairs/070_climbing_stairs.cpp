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
    void recursive(int input, int& output);
    void show_string(string str);
};

int main() 
{
    int x = 3;
    Solution solution;
    int y = solution.climbStairs(x);
    cout << "need " << y << " steps" << endl;
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
    cout << "target step is " << n << endl;
    int val = n;
    int  counter = 0;
    
    if (1 == n || 2 == n)
        return n;
        
    cout << "counter = " << counter << ", val = " << val << endl;
    Solution::recursive(val, counter);
    return counter;
}
void Solution::recursive(int input, int& output)
{
    if(input > 0){
        cout << "input = " << input << ", output = " << output << endl;
        input = input / 2;
        output += 1;
        return Solution::recursive(input, output);
    } 
    cout << "-------------------------------------------------"<< endl;
    cout << "input = " << input << ", output = " << output << endl;
}
Solution::~Solution() 
{
    cout << "------------- end ---------" << endl;    
}

