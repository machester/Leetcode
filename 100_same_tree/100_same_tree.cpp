/**
 * Question
Given two binary trees, write a function to check if they are the same or not.

Two binary trees are considered the same if they are structurally identical and the nodes have the same value.

Example 1:

Input:     1         1
          / \       / \
         2   3     2   3

        [1,2,3],   [1,2,3]

Output: true
Example 2:

Input:     1         1
          /           \
         2             2

        [1,2],     [1,null,2]

Output: false
Example 3:

Input:     1         1
          / \       / \
         2   1     1   2

        [1,2,1],   [1,1,2]

Output: false


 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
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

