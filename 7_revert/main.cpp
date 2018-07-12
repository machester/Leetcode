/**
 * 链栈
 */
#include <iostream>
#include <cmath>

using namespace std;

class Solution {
public:
    ~Solution();

    int reverse(int x)
    {
        typedef struct _node{
            int param;
            struct _node *next;


        }stackNode;
        stackNode *LLstack = new(stackNode);
        LLstack ->next = NULL;


        int revertedNum = 0;
        int index = 0;
        int temp = x;

        if(x == 0)
            return 0;

        if(x > 0) {
            //push stack
            while (temp)
            {
                ++index;

                stackNode *newNode = new(stackNode);
                newNode ->next = NULL;
                newNode -> param = temp % 10;
                newNode ->next = LLstack ->next;
                LLstack ->next = newNode;

                temp /= 10;

                cout << "index = " << index << " temp = " << temp << endl;
                cout << "index = " << index << " newNode- >param = " << newNode ->param << endl;
            }
        }
        else {
                    temp = temp * (-1);
        }
        cout << "pop stack : " << endl;
        LLstack = LLstack ->next;
        for(; index > 0; index--)
        {
            revertedNum += LLstack ->param;
            revertedNum *= 10;
            LLstack = LLstack ->next;
        }
        revertedNum /= 10;
        return  revertedNum;

    }

private:

};

int main() {

    cout << "---------- start ----------" << endl;

    int num;
    cout << "input integer : " << endl;
    cin >> num;
    Solution solution;


    cout << "reverted num is : "
            << solution.reverse(num)
            << endl;

    return 0;
}

Solution::~Solution() {
    cout << "system exit" << endl;
}