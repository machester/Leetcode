
/******************************************************************************
 * Decription:
 *          Normally Fibonacci_number
******************************************************************************/
#include <iostream>
using namespace std;

class Solution {
public:
    ~Solution();
    int Fibonacci_number(int num);
};

int main() 
{
    int x = 3;
    
    Solution solution;
    cout << "------------- start -----------" << endl;
    int f = solution.Fibonacci_number(x);
    cout << "number " << x <<" Fibonacci_number answer is " << f << endl;
    return 0;
}

int Solution::Fibonacci_number(int num)
{

    static int loop = 1;
    static int sum = 0;
    cout << "loop = " << loop << " , num = " << num << endl;
    if(1 == num)
        return num + sum;
    else {
        loop++;
        sum += num;
        num--;
        return Solution::Fibonacci_number(num);
    }
}
Solution::~Solution() 
{
    cout << "------------- end ---------" << endl;    
}

