
/******************************************************************************
 * Decription:
 *          Normally Fibonacci_number
******************************************************************************/
#include <iostream>
using namespace std;

class Solution {
public:
    ~Solution();
    int Fibonacci_number(int num, int& answer);
};

int main() 
{
    int x = 20;
    int f = 0;
    
    Solution solution;
    cout << "------------- start -----------" << endl;
    solution.Fibonacci_number(x, f);
    cout << "number " << x <<" Fibonacci_number answer is " << f << endl;
    return 0;
}

int Solution::Fibonacci_number(int num, int& answer)
{

    static int loop = 1;
    cout << "loop = " << loop << " , num = " << num << endl;
    if(1 == num)
        return num + answer;
    else {
        loop++;
        answer += num;
        num--;
        return Solution::Fibonacci_number(num, answer);
    }
}
Solution::~Solution() 
{
    cout << "------------- end ---------" << endl;    
}

