#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <math.h>
#include <stdbool.h>


struct ListNode {
	struct ListNode * next;
	int val;
};
typedef struct ListNode listTypde;


bool list_is_empty(listTypde *list)
{
	if (NULL == list)
		return true;
	else
		return false;
}

void show_list(listTypde *list)
{
	listTypde *tempList;
	if (!list_is_empty(list))
	{
		printf("list: ");
		for (tempList = list; NULL != tempList; tempList = tempList ->next)
		{
			printf("---> %d ", tempList ->val);
		}
		printf("\n");
	}
	else
		printf("List is empty...");

}

void list_init(listTypde **list)
{
	static int counter = 0;

	if (counter == 0)
	{
		*list = (listTypde *)malloc(sizeof(listTypde));

		(*list)->next = NULL;
		(*list)->val = 1;
		for (int index = 0; index < 1; index++)
		{
			listTypde * newNode = (listTypde *)malloc(sizeof(listTypde));
			newNode ->val = 9;
			newNode ->next = (*list) ->next;
			(*list)->next = newNode;
		}
		show_list((*list));
	}
	else
	{
		*list = (listTypde *)malloc(sizeof(listTypde));

		(*list)->next = NULL;
		(*list)->val = 9;
		for (int index = 0; index < 0; index++)
		{
			listTypde * newNode = (listTypde *)malloc(sizeof(listTypde));
			newNode ->val = ((index + 1) * 2) + 1;
			newNode ->next = (*list) ->next;
			(*list)->next = newNode;
		}
		show_list((*list));
	}
	counter++;
}

listTypde* addTwoNumbers(listTypde* l1, listTypde* l2)
{
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
			sum = tempL2 ->val;
		}
		else if (NULL == tempL2)
		{
			sum = tempL1 ->val;
		}
		else
			sum = ((tempL1 ->val) + (tempL2 ->val));

		if (sum > 9)
		{
			sum = (sum - 10);
			increaseFlag = 1;
		}
		else
		{
			sum = sum + increaseFlag;
			if (sum > 9)
			{
				sum = (sum - 10);
				increaseFlag = 0;
			}
			increaseFlag = 0;
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


int main() {

	listTypde * l1;
	listTypde * l2;
	listTypde * l3 = (listTypde *)malloc(sizeof(listTypde));;

	list_init(&l1);
	list_init(&l2);
	printf("---------- two list init finshed ----------\n");
	l3 = addTwoNumbers(l1, l2);
	show_list(l3);
	return 0;
}

