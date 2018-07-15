#include <iostream>

using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(NULL) {}
//};

typedef struct _ListNode {
    int val;
    struct _ListNode *next;
}ListNode;

class Solution {
public:
    ~Solution();
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if((NULL == l1) && (NULL == l2))
            return NULL;
        else if(NULL == l1)
            return l2;
        else if(NULL == l2)
            return l1;

        ListNode *NewList = new ListNode;
        NewList ->next = NULL;
        ListNode *rear = NewList;

        int valTemp = 0;
        while (NULL != l1 && NULL != l2) {

            if((l1 ->val) <= l2 ->val) {
                valTemp = l1 ->val;
                l1 = l1 ->next;
            }
            else {
                valTemp = l2 ->val;
                l2 = l2 ->next;
            }
            ListNode *newNode = new ListNode;
            newNode ->val = valTemp;
            newNode ->next = NULL;
            rear ->next = newNode;
            rear = rear ->next;
            rear ->next = newNode ->next;

        }
        if((NULL == l1) && (NULL == l2))
            return NewList ->next;
        else if(l1 == NULL)
            rear ->next = l2;
        else if(l2 == NULL)
            rear ->next = l1;
        return NewList ->next;

    }
    ListNode * CreatList(int length);
    void ShowList(ListNode * List);
};

int main() {
    ListNode * l1;
    ListNode * l2;
    Solution solution;
    l1 = solution.CreatList(5);
    l2 = solution.CreatList(6);
    solution.ShowList(l1);
    solution.ShowList(l2);
    cout << "-------------------------------------------------" << endl;
    ListNode * l3 = solution.mergeTwoLists(l1, l2);
    solution.ShowList(l3);
    return 0;
}

Solution::~Solution()
{
    std::cout << " exit" << std::endl;
}
ListNode* Solution::CreatList(int length)
{
    ListNode * rear = new ListNode;
    ListNode * Head;
    Head = rear;
    for(int i = 1; i <= length; i++) {
        ListNode * newNode = new ListNode;
        newNode ->val = i;
        newNode ->next = NULL;
        rear ->next = newNode;
        rear = newNode;
    }
    return Head ->next;
}
void Solution::ShowList(ListNode * List)
{
    cout << "list is : " << endl;
    for(ListNode * temp = List; temp != NULL; temp = temp ->next) {
        cout << "---> " <<(temp->val) << " ";
    }
    cout << endl;
}
