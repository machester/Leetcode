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

// #include <cstring>


 typedef struct ListNode {
     int val;
     struct ListNode *next;
 }list_node;

class Solution {
public:
    ~Solution();
    list_node * deleteDuplicates(list_node *head);
    
    void show_list(list_node *lls);
    void remove_current_node(list_node *prev, list_node *next);
    list_node * list_head_init(void);
    list_node * list_create_node(void);
    void set_current_node_val(list_node * node, int value);
    void add_node_tail(list_node *head, list_node *new_node);
    void add_node_head(list_node *head, list_node *new_node);
};

int main() 
{
    std::cout << "------------- start ---------" << std::endl;
    Solution solution;
    list_node * lls = solution.list_head_init();
    solution.set_current_node_val(lls, 1);
    
    
    // init sorted list
    // list_node * node_ptr;
    // for(int loop = 2; loop < 10; loop++) {
    //     node_ptr = solution.list_create_node();
    //     solution.set_current_node_val(node_ptr, loop);
    //     solution.add_node_tail(lls, node_ptr);
    // }
    
    // init duplicates sorted list
    list_node * node_ptr;
    for(int loop = 2; loop < 10; loop++) {
        node_ptr = solution.list_create_node();
        solution.set_current_node_val(node_ptr, loop);
        solution.add_node_tail(lls, node_ptr);
        if(loop % 2 != 0) {
            node_ptr = solution.list_create_node();
            solution.set_current_node_val(node_ptr, loop);
            solution.add_node_tail(lls, node_ptr);
        }
    }
    
    
    
    
    solution.show_list(lls);

    /*---------------- delete duplicated node -------------------*/
    std::cout << "------------- delete duplicated node ------------" << std::endl;    
    solution.deleteDuplicates(lls);
    std::cout << "------------- finished clean duplicated list ------------" << std::endl; 
    solution.show_list(lls);
    return 0;
}

Solution::~Solution() 
{
    std::cout << "------------- end ---------" << std::endl;    
}

list_node * Solution::deleteDuplicates(list_node * head)
{   
    if(head == nullptr || head->next == nullptr)
        return head;
    list_node * free_ptr = nullptr;
    list_node * prev_node = head;
    list_node * curr_node = head->next;
    
    while(curr_node != nullptr) {
        if(prev_node->val == curr_node->val) {

            if(nullptr == curr_node->next) {        // current node is the last node
                std::cout << "last node curr_node-> val = " << curr_node->val << std::endl;
                prev_node->next = nullptr;
                delete curr_node;
                curr_node = nullptr;            
            } else {            // current node not the last node
                free_ptr = curr_node;
                curr_node = curr_node->next;
                std::cout << "free_ptr -> val = " << free_ptr->val << std::endl;
                delete free_ptr;
                free_ptr = nullptr;
            }
        }
        if(curr_node != nullptr) {      // make sure if current node is last one and deleted
            // link node make sure is still a linked list. if delete this can make it linked
            prev_node->next = curr_node;
            // move prev_node and current node ptr
            prev_node = curr_node;
            curr_node = curr_node->next;
        }
        Solution::show_list(head);
    }
    return head;    
}

void Solution::show_list(list_node *lls)
{
    std::cout << "string is : " << std::endl;
    for(list_node *node = lls; node != nullptr; node = node->next) {
    	std::cout << "---> " << node->val << ", ";
    }
    std::cout << std::endl;
}

void Solution::remove_current_node(list_node *prev, list_node *next)
{
	prev->next = next->next;
}

list_node * Solution::list_head_init(void)
{
	list_node * newList = new list_node();
    newList->next = nullptr;
    return newList; 
}

list_node * Solution::list_create_node(void)
{
    list_node * new_node = new list_node();
    new_node->next = nullptr;
    return new_node; 
}



void Solution::add_node_tail(list_node *head, list_node *new_node)
{
    while(head->next != nullptr) {
        head = head->next;
    }
    head ->next = new_node;
    new_node ->next = nullptr;
}

void Solution::add_node_head(list_node *head, list_node *new_node)
{
    list_node * ptr = head;
    new_node ->next = ptr;
    head->next = new_node;
}

void Solution::set_current_node_val(list_node * node, int value)
{
    node->val = value;
}