/**
 * 链队列
 */
#include <iostream>
using namespace std;

class Solution {
public:
    ~Solution();

    long long int reverse(int x) {
        struct _node {
            int param;
            struct _node *next;

        } stackNode;
        //init queue;
        struct _node *queueList = new(struct _node);
        queueList ->next = NULL;
        //init head and tail
        struct _node *queHead = queueList;
        struct _node *queTail = queueList;


        long long int revertedNum = 0;
        int index = 0;
        int temp = x;

        if (x == 0)
            return 0;

        //push item into queue
        while (temp) {
            ++index;

            struct _node *newNode = new(struct _node);
            newNode->param = temp % 10;
            queTail ->next = newNode ->next;
            queTail ->next = newNode;
            queTail = newNode;          //move tail to new item;

            temp /= 10;
            cout << "index = " << index << " newNode- >param = " << newNode->param << endl;
        }
        //printf stack
        struct _node *p;
        for (p = queHead->next; p != queTail; p = p->next)
            cout << "---> " << p->param;
        cout << "---> " << p->param;
        cout << endl;

        cout << "queue numbers : " << endl;
        struct _node *tt;
        for (tt = queHead ->next; tt != queTail; tt = tt ->next) {
            revertedNum += tt->param;
            cout << "revertNumber = " << revertedNum << endl;
            revertedNum *= 10;          //move positon
        }
        revertedNum += tt ->param; // last one
        cout << "revertNumber = " << revertedNum << endl;

        //溢出判定
        if ((revertedNum > 2147483648 - 1) || (revertedNum < (-2147483648)))
            return 0;
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

    long long int returnVal = solution.reverse(num);
    cout << "reverted num is : "
         << returnVal
         << endl;

    return 0;
}

Solution::~Solution() {
    cout << "system exit" << endl;
}

