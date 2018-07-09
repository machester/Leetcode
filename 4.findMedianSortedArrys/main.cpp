#include <iostream>
#include <vector>

class Solution {
public:
    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
    using namespace std;

        cout << "nums1:" << endl;
        for(int i = 0; i < nums1.size(); i++) {
            cout << "[ " << i << " ] "<< " = " << nums1[i] << " ---> ";
        }
        cout << endl;

        cout << "nums2:" << endl;
        for(int i = 0; i < nums2.size(); i++) {
            cout << "[ " << i << " ] "<< " = " << nums2[i] << " ---> ";
        }
        

    }
};

using namespace std;

std::vector<int>nums1;
std::vector <int>nums2;

int main() {
    std::cout << "-------------------- system start -----------------" << std::endl;
    for(int i = 0; i < 10; i++){
        nums1.push_back(i + 2);
    }
    for(int j = 1; j < 10; j++){
        nums2.push_back(j + 2);
    }
    cout << "inited arry:"<<endl;
    cout << "nums1:" << endl;
    for(int i = 0; i < nums1.size(); i++) {
        cout << "[ " << i << " ] "<< " = " << nums1[i] << " ---> ";
    }
    cout << endl;

    cout << "nums2:" << endl;
    for(int i = 0; i < nums2.size(); i++) {
        cout << "[ " << i << " ] "<< " = " << nums2[i] << " ---> ";
    }
    cout << endl;


    class Solution solution;
    solution.findMedianSortedArrays(nums1, nums2);
    return 0;
}