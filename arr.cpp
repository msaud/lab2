#include "arr.h"
#include <iostream>

using namespace std;


int sum(node * head[])
{
	int Sum = 0;
	int i = 0; 
	
	node* curr;

	while (i < SIZE)
	{	
		curr = head[i];
		while(curr)
		{
			Sum += curr->data;
			curr = curr->next;
		}
		i++;
	}
	delete curr;
	return Sum;
}

int removeTwo(node * head[])
{
	node* prev;
	node* curr;

	int count = 0;
	int i = 0;

	while (i < SIZE)
	{
		curr = head[i];
		prev = NULL;

		while (curr)
		{
			if(curr->data == 2)
			{
				if(prev == 0)
				{
					head[i] = head[i]->next;
					delete curr;
					curr = head[i];
					count++;
				}
				else
				{
					prev->next = curr->next;
					delete curr;
					curr = prev->next;
					count++;
				}
			}
			else
			{
				prev = curr;
				curr = curr->next;
			}
		}

		i++;
	}
	return count;
}
