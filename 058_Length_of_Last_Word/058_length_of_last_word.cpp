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
    int lengthOfLastWord(string s);
};

int main() {

    // string s = "hello wrold msg";
    string s = "Hello World";
    // string s = " a ";
    Solution solution;
    int lastLength = solution.lengthOfLastWord(s);
    cout << "last length = " << lastLength << endl;
    return 0;
}

int Solution::lengthOfLastWord(string s)
{
    int ret = 0;
    int index = 0;
    char * headPoint = NULL;
    char * tailPoint = NULL;
    
    cout << "------------- start ---------" << endl;
    if (s.empty())
        return ret;

    cout << "length = " << s.length() << endl;

    for(index = s.length() - 1; index >= 0; index--) {
        if((s[index] >= 'a' && s[index] <= 'z') || (s[index] >= 'A' && s[index] <= 'Z')) {
            cout << "loop : " << index << ", s["<< index <<"] = " << s[index] << endl;
            if(NULL == tailPoint) {
                tailPoint = &s[index];
                headPoint = &s[index];
                cout << "init tailPoint to character : " << *tailPoint << endl;
                cout << "init headPoint to character : " << *headPoint << endl;
            } 
            else if (NULL != tailPoint) {         // tail has got a valuable char, head point move
                headPoint = &s[index];
                cout << "headPoint to character : " << *headPoint << endl;
            }
        }
        else if(NULL != tailPoint)      // find divid element " "
            break;
    }

    if(index == (s.length() - 1)) {     // not run loop
        ret = 1;
        cout << "ret = " << ret << endl;
    }
    else if(NULL == headPoint)          // if string s is no meaning loop
        return 0;
    else {                              // run part of loop 
        cout << "loop break tailPoint to character : " << *tailPoint << endl;
        cout << "loop break headPoint to character : " << *headPoint << endl;
        cout << "tailPoint - headPoint = " << tailPoint - headPoint << endl;
        ret = tailPoint - headPoint + 1;
        cout << "return ret = " << ret << endl;
    }
    cout << "last word length = " << ret << endl;
    return ret;
}

Solution::~Solution() 
{
    cout << "------------- end ---------" << endl;    
}