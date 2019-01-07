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


 struct ListNode {
     int val;
     ListNode *next;
 };

class Solution {
public:
    ~Solution();
    ListNode* deleteDuplicates(ListNode* head);
    void show_string(ListNode *str);
    void remove_current_node(ListNode *prev, ListNode *next);
    void ListNode * init_list(ListNode * var);
    

};

int main() 
{
    int x = 8192;
    Solution solution;
    struct ListNode * lls = nullptr;
    // struct ListNode * ls = new struct ListNode;
    
    return 0;
}

void Solution::show_string(ListNode *str)
{
    cout << "string is : " << end;
    for(ListNode *item = str; item != null; item = item ->next) {
    	cout << "---> " << item->val
		<< ", " << end;
    }
    cout << endl;
}

void Solution::remove_current_node(ListNode *prev, ListNode *next)
{
	
	prev->next = next;
}
    
ListNode* Solution::deleteDuplicates(ListNode* head)
{
    cout << "------------- start ---------" << endl;
    int retval;
    
    return retval;    
}

void ListNode * init_list(ListNode * var)
{
	newList = new ListNode();

}

Solution::~Solution() 
{
    cout << "------------- end ---------" << endl;    
}

