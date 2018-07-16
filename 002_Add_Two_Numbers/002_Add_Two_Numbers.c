/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int sum = 0;
	int increaseFlag = 0;

	struct ListNode * tempL1, * tempL2, *newList, *newNode, *newListHead;
	tempL1 = l1;
	tempL2 = l2;


	newList = (struct ListNode *)malloc(sizeof(struct ListNode));
	newList ->next = NULL;
	newListHead = newList;

	while ((NULL != tempL1) || (NULL != tempL2))
	{
		newNode = (struct ListNode *)malloc(sizeof(struct ListNode));

		if (NULL == tempL1)
		{
			sum = tempL2 ->val + increaseFlag;
            increaseFlag = 0;
		}
		else if (NULL == tempL2)
		{
			sum = tempL1 ->val + increaseFlag;
            increaseFlag = 0;
		}
		else
        {
            sum = ((tempL1 ->val) + (tempL2 ->val)) + increaseFlag;
            increaseFlag = 0;
        }
		/*----------------------------------------------------------------*/
		if (sum > 9)
		{
			sum = (sum - 10);
			increaseFlag = 1;
		}

		newNode ->val = sum;

		if (NULL == tempL1)
		{
			tempL2 = tempL2 ->next;
		}
		else if (NULL == tempL2)
		{
			tempL1 = tempL1 ->next;
		}
		else
		{
			tempL1 = tempL1 ->next;
			tempL2 = tempL2 ->next;
		}

		newList ->next = newNode;
		newNode ->next = NULL;
		newList = newList ->next;
	}
	// last increase, creat new node to storage.
	if (1 == increaseFlag)
	{
		newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
		newNode ->val = increaseFlag;
		increaseFlag = 0;

		newList ->next = newNode;
		newNode ->next = NULL;
	}

	return (newListHead ->next);
}