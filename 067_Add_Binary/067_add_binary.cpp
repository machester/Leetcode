/**
 * Question
Given two binary strings, return their sum (also a binary string).

The input strings are both non-empty and contains only characters 1 or 0.

Example 1:

Input: a = "11", b = "1"
Output: "100"

Example 2:
Input: a = "1010", b = "1011"
Output: "10101"
 */
/**
 * compare every param in nums arry
 * Note:
 *      1. if string is empty
 *      2. two string has different length
 *      3. how to compare every bit
 *      4. using queue to slove it
 * answer:
 * queue A |head|1|0|1|0|tail|
 * queue B |head|1|0|1|1|tail|
 * carry_mark = 0;
 * if((queue A LSB + queue B LSB + carry_mark) > 1)
 *      new queue LSB = 2 - (queue A LSB + queue B LSB)
 *      carry_mark = 1;
 * else
 *      new queue LSB = 2 - (queue A LSB + queue B LSB)
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
    string addBinary(string a, string b);
    void show_string(string str);
};

int main() 
{
    string a = "11001010";
    string b = "01111000";
    string after_operation;
    
    Solution solution;
    solution.show_string(a);
    solution.show_string(b);
    after_operation = solution.addBinary(a, b);
    solution.show_string(after_operation);
    return 0;
}

void Solution::show_string(string str)
{
    cout << "string is : " << str << endl;
#if 0 // for vector start
    cout << "item = { ";
    for(string::iterator item = digits.begin(); item < digits.end(); item++) {
        cout << *item << " ";
    }
    cout << " }" << endl;
#endif  // for vector end
}

string Solution::addBinary(string a, string b)
{
    cout << "------------- start ---------" << endl;
    string ret;
    int temp;
    int carry_mark = 0;
    
    if (a.empty() && b.empty())
        return a;
        
    int length = (a.length() >= b.length()) ? a.length() : b.length();
    cout << "max length = " << length << endl;
    for(int index = length - 1; index >= 0; --index) {
        temp = (int)(a[index] - '0') + (int)(b[index] - '0') + carry_mark;
        if(temp > 1 && carry_mark == 0) {
            temp = 0;
            carry_mark = 1;
        } else if(1 == carry_mark && temp < 1){
            temp += carry_mark;
            carry_mark = 0;
        } else if(temp > 1 && carry_mark == 1) {
            temp = 1; 
            carry_mark = 1;
        }
        cout << "loop " << length - index << ": a[" << index << "] = " << a[index] \
                << ",  b[" << index << "] = " << b[index] \
                << ", temp = " << temp << ", carry_mark = " << carry_mark
                << endl;
        if (0 != temp)

            ret.insert((length - index - 1), '1', 1);
        else 
            ret.insert((length - index - 1), '0', 1);
    }
    if(1 == carry_mark)
        cout << "carry_mark = " << carry_mark << endl;
    return ret;
}

Solution::~Solution() 
{
    cout << "------------- end ---------" << endl;    
}