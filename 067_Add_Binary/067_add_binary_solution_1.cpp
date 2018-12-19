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
    string a = "100";
    string b = "111110";
    // string a = "11";
    // string b = "1";
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
    string ret;
    int temp;
    int carry_mark = 0;
    
    if (a.empty() && b.empty())
        return a;
        
    int length = (a.length() >= b.length()) ? a.length() : b.length();
    cout << "max length = " << length << endl;
    
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    
    int index = 0;
    while(!a.empty() && !b.empty()){
        if (!a.empty() && !b.empty()) {
            temp = (int)(a[0] - '0') + (int)(b[0] - '0');
            
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
            else if(temp == 1 && carry_mark == 1) {
                temp = 0; 
                carry_mark = 1;
            }
            cout << "loop " << index << ": a[0] = " << a[0] \
                    << ",  b[0] = " << b[0] \
                    << ", temp = " << temp << ", carry_mark = " << carry_mark
                    << endl;
            if (0 != temp)

                ret.push_back('1');
            else 
                ret.push_back('0');
            
            // clean 
            a.erase(a.begin());
            b.erase(b.begin());
            cout << "string a ---> ";
            show_string(a);
            cout << "string b ---> ";
            show_string(b);
            cout << "string ret ---> ";
            show_string(ret);
            index++;
        }
    }
    if(a.empty() && !b.empty()) {
        cout << "a.empty() && !b.empty()" << endl;
        if(1 == carry_mark) {
            for(string::iterator item = b.begin(); !b.empty();) {
                if(*item == '0') {      // find a place to store carry_mark, laset items no need to add.
                    *item = '1';
                    carry_mark = 0;
                    ret.append(b);
                    break;
                } else {                // has increase set current to zero, keep carry_mark
                    ret.push_back('0'); 
                    b.erase(b.begin());
                }          
            }
        } else 
            ret.append(b);
    
        // show ret
        show_string(ret);
    } else if(!a.empty() && b.empty()) {
        cout << "!a.empty() && b.empty()" << endl;
        if(1 == carry_mark) {
            for(string::iterator item = a.begin(); !a.empty();) {
                if(*item == '0') {
                    *item = '1';
                    carry_mark = 0;
                    ret.append(a);
                    break;
                } else {
                    ret.push_back('0');
                    a.erase(a.begin());
                }          
            }
        }
        else {
            ret.append(a);
        }
        // show ret
        show_string(ret);
    }
    
    if(1 == carry_mark) {
        cout << "last step : carry_mark = " << carry_mark << endl;
        ret.push_back('1');
        carry_mark = 0;
    }

    cout << "---> before invert : ";
    show_string(ret);

    // inver string
    reverse(ret.begin(), ret.end());
    return ret;
}

Solution::~Solution() 
{
    cout << "------------- end ---------" << endl;    
}





#if 0
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    string addBinary(string a, string b) {
        
        string ret;
        int temp;
        int carry_mark = 0;

        if (a.empty() && b.empty())
            return a;

        int length = (a.length() >= b.length()) ? a.length() : b.length();

        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());

        int index = 0;
        while(!a.empty() && !b.empty()){
            if (!a.empty() && !b.empty()) {
                temp = (int)(a[0] - '0') + (int)(b[0] - '0');

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
                else if(temp == 1 && carry_mark == 1) {
                    temp = 0; 
                    carry_mark = 1;
                }
                if (0 != temp)

                    ret.push_back('1');
                else 
                    ret.push_back('0');

                // clean 
                a.erase(a.begin());
                b.erase(b.begin());

                index++;
            }
        }
        if(a.empty() && !b.empty()) {
            if(1 == carry_mark) {
                for(string::iterator item = b.begin(); item != b.end(); item++) {
                    if(*item == '0') {
                        *item = '1';
                        carry_mark = 0;
                        ret.append(b);
                        break;
                    } else {
                        ret.push_back('0');
                        b.erase(b.begin());
                    }          
                }
            } else
                ret.append(b);

        } else if(!a.empty() && b.empty()) {
            if(1 == carry_mark) {
                for(string::iterator item = a.begin(); item != a.end(); item++) {
                    if(*item == '0') {
                        *item = '1';
                        carry_mark = 0;
                        ret.append(a);
                        break;
                    } else {
                        ret.push_back('0');
                        a.erase(a.begin());
                    }          
                }
            }
            else
                ret.append(a);
        }
        if(1 == carry_mark) {
            ret.push_back('1');
        }


        reverse(ret.begin(), ret.end());
        return ret;
    }
};

string stringToString(string input) {
    assert(input.length() >= 2);
    string result;
    for (int i = 1; i < input.length() -1; i++) {
        char currentChar = input[i];
        if (input[i] == '\\') {
            char nextChar = input[i+1];
            switch (nextChar) {
                case '\"': result.push_back('\"'); break;
                case '/' : result.push_back('/'); break;
                case '\\': result.push_back('\\'); break;
                case 'b' : result.push_back('\b'); break;
                case 'f' : result.push_back('\f'); break;
                case 'r' : result.push_back('\r'); break;
                case 'n' : result.push_back('\n'); break;
                case 't' : result.push_back('\t'); break;
                default: break;
            }
            i++;
        } else {
          result.push_back(currentChar);
        }
    }
    return result;
}

int main() {
    string line;
    while (getline(cin, line)) {
        string a = stringToString(line);
        getline(cin, line);
        string b = stringToString(line);
        
        string ret = Solution().addBinary(a, b);

        string out = (ret);
        cout << out << endl;
    }
    return 0;
}

#endif 