
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
    int x = 5;
    Solution solution;
    cout << "------------- start -----------" << endl;
    int y = solution.climbStairs(x);
    cout << "clime "<< x <<" stairs, has " << y << " distinct ways" << endl;
    return 0;
}

int Solution::climbStairs(int n)
{
    int ret = 0;
    static int ret1 = 1;
    static int ret2 = 1;
    if((1 == n) || (2 == n)) {
        return n;
    } else {
        ret = Solution::rw_climbStairs(n - 1, ret1) + Solution::rw_climbStairs(n - 2, ret1);
    }
    cout << "---------> ret = " << ret << endl;
    return ret;
}
int Solution::rw_climbStairs(int n, int& answer)
{
    static int loops = 0;
    
    if(n > 2) {
        loops++;
        answer += answer;
        cout << "loops = " << loops
            << " , n = " << n
            << " , answer = " << answer << endl;
        return (Solution::rw_climbStairs(n - 1, answer) + Solution::rw_climbStairs(n - 2, answer));
    }
    return answer;
}

Solution::~Solution() 
{
    cout << "------------- end ---------" << endl;    
}


# if 0  // out of time
using namespace std;

class Solution {
public:
    ~Solution();
    int climbStairs(int n);
};

int main() 
{
    int x = 6;
    Solution solution;
    cout << "------------- start -----------" << endl;
    int y = solution.climbStairs(x);
    cout << "clime "<< x <<" stairs, has " << y << " distinct ways" << endl;
    return 0;
}

int Solution::climbStairs(int n)
{
    // static int distict_ways = 0;
    static int loops = 0;
    loops++;
    cout << "loops = " << loops
        << " , n = " << n << endl;
    if(1 == n || 2 == n)
        return n;
    else {
        return (Solution::climbStairs(n - 1) + Solution::climbStairs(n - 2));
    }
}

Solution::~Solution() 
{
    cout << "------------- end ---------" << endl;    
}

#endif 
