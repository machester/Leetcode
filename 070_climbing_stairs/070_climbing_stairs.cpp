
/******************************************************************************
 * Decription:
 *      every distinct ways in this stair is equal to sum of two before distinct ways climbing.
 *      example
 *          6 stairs --------------> 13 distinct ways
 *          5 stairs --------------> 8 distinct ways
 *          4 stairs --------------> 5 distinct ways
 *          3 stairs --------------> 3 distinct ways
 *          2 stairs --------------> 2 distinct ways
 *          1 stairs --------------> 1 ways
 * function ----> F(n) = F(n - 1) + F(n -2)
******************************************************************************/
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    ~Solution();
    int climbStairs(int n);
    int rw_climbStairs(int n, int& answer);
};

int main() 
{
    int x = 20;
    Solution solution;
    cout << "------------- start -----------" << endl;
    int y = solution.climbStairs(x);
    cout << "clime "<< x <<" stairs, has " << y << " distinct ways" << endl;
    return 0;
}

int Solution::climbStairs(int n)
{
    int mem[n + 1] = {0};
    mem[0] = 1;
    mem[1] = 1;
    
    for(int index = 2; index <= n; index++) {
        mem[index] = mem[index - 1] + mem[index - 2];
        cout << "---> mem[ " << index << " - 1]: " << mem[index - 1]
            << " + mem[ " << index << " - 2]: " << mem[index - 2]
            << " = " << mem[index]
            << endl;
    }
    return mem[n];
}

#if 0
// out of time limit
int Solution::climbStairs(int n)
{
    int ret = 0;

    if((1 == n) || (2 == n)) {
        return n;
    } else {
        ret = Solution::climbStairs(n - 1) + Solution::climbStairs(n - 2);
        cout << "---> ret = " << ret << endl;
    }
    cout << "-----------------------------------------------------"<< endl;
    cout << "---------> ret = " << ret << endl;
    return ret;
}
#endif
Solution::~Solution() 
{
    cout << "------------- end ---------" << endl;    
}
