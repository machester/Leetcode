/**
 * 链栈
 */
#include <iostream>
#define DEBUG
using namespace std;

class Solution {
public:
    ~Solution();

    int reverse(int x) {
        typedef struct _node {
            int param;
            struct _node *next;


        } stackNode;
        struct _node *Lstack_top = NULL;


        int revertedNum = 0;
        int index = 0;
        int temp = x;

        if (x == 0)
            return 0;

        if (x < 0)
            temp = temp * (-1);

        //push stack
        while (temp) {
            ++index;

            struct _node *newNode = new(struct _node);
            newNode->param = temp % 10;
            newNode->next = Lstack_top;
            Lstack_top = newNode;

            temp /= 10;
            cout << "index = " << index << " newNode- >param = " << newNode->param << endl;
        }
#ifdef DEBUG
        //printf stack
        struct _node *p;
        for (p = Lstack_top; p != NULL; p = p->next)
            cout << "---> " << p->param;
        cout << endl;
#endif

        cout << "pop stack : " << endl;
        for (; index > 0; index--) {
            revertedNum += Lstack_top->param;
            revertedNum *= 10;
            Lstack_top = Lstack_top->next;
        }
        revertedNum /= 10;
        if (x < 0)
            return revertedNum * -1;
        else
            return revertedNum;

    }
};

int main() {

    cout << "---------- start ----------" << endl;

    int num;
    cout << "input integer : " << endl;
    cin >> num;
    Solution solution;

    int returnVal = solution.reverse(num);
    cout << "reverted num is : "
         << returnVal
         << endl;

    return 0;
}

Solution::~Solution() {
    cout << "system exit" << endl;
}