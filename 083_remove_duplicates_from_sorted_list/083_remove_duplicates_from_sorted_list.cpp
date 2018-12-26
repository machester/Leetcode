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
    struct ListNode {
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {};
    };
    
    ~Solution();
    ListNode* deleteDuplicates(ListNode* head);
    void show_string(string str);
    

};

int main() 
{
    int x = 8192;
    Solution solution;
    struct ListNode * lls = nullptr;
    // struct ListNode * ls = new struct ListNode;
    
    // lls = solution.deleteDuplicates(ls);
    return 0;
}

void Solution::show_string(string str)
{
    cout << "string is : " << str << endl;
    
}

ListNode* Solution::deleteDuplicates(ListNode* head)
{
    cout << "------------- start ---------" << endl;
    int retval;
    
    
    
    
    
    
    
    
    
    return retval;    
}

Solution::~Solution() 
{
    cout << "------------- end ---------" << endl;    
}

