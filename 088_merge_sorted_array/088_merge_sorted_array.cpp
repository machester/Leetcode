/**
 * Question
Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.

Note:

The number of elements initialized in nums1 and nums2 are m and n respectively.
You may assume that nums1 has enough space (size that is greater or equal to m + n) to hold additional elements from nums2.
Example:

Input:
nums1 = [1,2,3,0,0,0], m = 3
nums2 = [2,5,6],       n = 3

Output: [1,2,2,3,5,6]


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
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
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n);
    void number_show(vector<int> num);
};

int main() 
{ 
    vector<int> ls1 = {1,2,3,4,5,6,7};
    vector<int> ls2 = {3,4,5,6,7,8,9,10};
    
    Solution solution;
    solution.merge(ls1, ls1.size(), ls2, ls2.size());
    cout << "merged sqrt is: "  << endl;  
    solution.number_show(ls1);

    return 0;
}

void Solution::merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
    cout << "-------------- merge list -------------" << endl;
    if(nums1.empty())
        return ;
    else if(nums2.empty())
        return ;
    
    vector<int> newNum (0, (n + m)); 
    
    int position_mark = 0;
    vector<int>::iterator item_nums1;
    vector<int>::iterator item_nums2;
    
    while
    
    
    for(item_nums1 = nums1.begin(); item_nums1 != nums1.end(); item_nums1++) {
        for(item_nums2 = nums2.begin(); item_nums2 != nums2.end(); item_nums2++) {
            if(*item_nums2 <= *item_nums1) {
                // temp
                nums1.insert(item_nums1, 1, *item_nums2);
                cout << "inset " << *item_nums2 << " to " << position_mark;
            }
        }
        position_mark++;
    }
}

void Solution::number_show(vector<int> num)
{
    for(vector<int>::iterator item = num.begin(); item != num.end(); item++)
        cout << " --> " << *item << " ";
    cout << endl;
}

Solution::~Solution() 
{
    std::cout << "------------- end ---------" << std::endl;    
}


#if 0
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //从尾部开始，向前移动
        int tail=m+n-1;
        m--;
        n--;
        while(m>=0 && n>=0)
        {
            if(nums1[m]>=nums2[n])
                nums1[tail--]=nums1[m--];
            else
                nums1[tail--]=nums2[n--];
        }
        //nums1中剩余的前n个数复制到nums1
        while(n>=0)
            nums1[n]=nums2[n--];
        
        return ;
    }
    
    
    
class Solution {
public:
    void static merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
        vector<int> vec;
        for (int i=0;i<m;i++)
            vec.push_back(nums1[i]);
        int i=0;
        int j=0;
        for (int k = 0; k < nums1.size(); ++k) {
            if (i > m-1) {
                nums1[k] = nums2[j];
                j++;
            }
            else if (j > n-1) {
                nums1[k] = vec[i];
                i++;
            }
            else if (vec[i] < nums2[j]) {
                nums1[k] = vec[i];
                i++;
            }
            else {
                nums1[k] = nums2[j];
                j++;
            }
        }
    }
};
#endif