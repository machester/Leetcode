/**
 * Question
Given a sorted linked list, delete all duplicates such that each element appear only once.

Example 1:

Input: 1->1->2
Output: 1->2
Example 2:

Input: 1->1->2->3->3
Output: 1->2->3


 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
    }
};
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
    void show_string(string str);
};

int main() 
{
    int x = 8192;
    Solution solution;
    int y = solution.climbStairs(x);
    cout << "x sqrt is: " << y << endl;  
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
    int retval;
    
    
    
    
    
    
    
    
    
    return retval;    
}

Solution::~Solution() 
{
    cout << "------------- end ---------" << endl;    
}

