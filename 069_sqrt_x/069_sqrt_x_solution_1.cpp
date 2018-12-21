/**
 * Question
Implement int sqrt(int x).

Compute and return the square root of x, where x is guaranteed to be a non-negative integer.

Since the return type is an integer, the decimal digits are truncated and only the integer part of the result is returned.

Example 1:

Input: 4
Output: 2
Example 2:

Input: 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since 
             the decimal part is truncated, 2 is returned.
 */
/**
 * 执行用时: 36 ms, 在Sqrt(x)的C++提交中击败了18.80% 的用户
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
    int mySqrt(int x);
    void show_string(string str);
};

int main() 
{
    int x = 8192;
    Solution solution;
    int y = solution.mySqrt(x);
    cout << "x sqrt is: " << y << endl;  
    // solution.show_string(after_operation);
    return 0;
}

void Solution::show_string(string str)
{
    cout << "string is : " << str << endl;
    
}

int Solution::mySqrt(int x)
{
    cout << "------------- start ---------" << endl;
    int result = 0;
    double max;
    double mini;
    
    if(x < 0) 
        return -1;
    if(x <= 1)
        return x;
    cout << "input number is : " << x << endl;
    double miniloop = x;
    while((miniloop * miniloop) > x) {
        miniloop = miniloop / 2;
        cout << "miniloop = " << miniloop << endl;
    }
    
    double maxloop = miniloop;
    while((maxloop * maxloop) < x) {
        miniloop = maxloop;
        maxloop++;
        cout << "maxloop = " << maxloop << endl;
    }
    // return (maxloop - miniloop) >= 2 ?  (miniloop + 1) :  maxloop;
    cout << "---> maxloop = " << maxloop << endl;
    int temp = (int)maxloop;
    cout << "---> temp = " << temp << endl;
    if((temp * temp) <= x)
        return (int)maxloop;
    else 
        return (int)miniloop;
}

Solution::~Solution() 
{
    cout << "------------- end ---------" << endl;    
}

