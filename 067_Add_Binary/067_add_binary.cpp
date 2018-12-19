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
 *      5. careful the string boundary
 * answer:
 * queue A |head|1|0|1|0|tail|
 * queue B |head|1|1|1|0|1|1|tail|

 */
/**
 * @Description: can accept string like "a ", last word is a divid element
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
    string addBinary(string a, string b);
    void show_string(string str);
};

int main() 
{
    // string a = "11111";
    // string b = "11";
    string a = "10000011";
    string b = "111000";
    string after_operation;
    
    Solution solution;
    solution.show_string(a);
    solution.show_string(b);
    after_operation = solution.addBinary(a, b);
    cout << "after binary add, ";  
    solution.show_string(after_operation);
    cout << endl;
    return 0;
}

void Solution::show_string(string str)
{
    cout << "string is : " << str << endl;
    
}

string Solution::addBinary(string a, string b)
{
    cout << "------------- start ---------" << endl;
    string result;
    int temp_value;
    int incrase_flag = 0;
    
    int len_a = a.length() - 1;
    int len_b = b.length() - 1;
    
    while(len_a >= 0 || len_b >= 0) {
        if(len_a >= 0 && len_b >= 0)
            temp_value = incrase_flag + (a[len_a] - '0') + (b[len_b] - '0');
        else if(len_a >= 0 && len_b < 0) {
            temp_value = incrase_flag + (a[len_a] - '0');
        }
        else if(len_b >= 0 && len_a < 0) {
            temp_value = incrase_flag + (b[len_b] - '0');
        }
        cout << "len_a = " << len_a 
                << ", len_b = " << len_b 
                << ", incrase_flag = " << incrase_flag 
                << ", temp_value = " << temp_value 
            << endl;
        if(temp_value == 0 || temp_value == 2) {  // keep the increase_flag value
            result.insert(result.begin(), '0');
            if (2 == temp_value) {
                incrase_flag = 1;
            }
        }
        else if(temp_value > 2 || temp_value == 1) {
            result.insert(result.begin(), '1');
            if(1 == temp_value) {
                incrase_flag = 0;
            } else {
                incrase_flag = 1;
            }
        }
        len_a--;
        len_b--;
        show_string(result);
    }
    if(1 == incrase_flag)
        result.insert(result.begin(), '1');
    return result;
}

Solution::~Solution() 
{
    cout << "------------- end ---------" << endl;    
}

