#include "lists.h"

int is_palindrome(listint_t **head)
{
	short res = 1;
    int i = 0, j = 0;
	int arr[2048];
	listint_t *index = *head;

	if (!head || !(*head) || !(*head)->next)
		return (res);

	while (index)
	{
		arr[j++] = index->n;
		index = index->next;
	}

	j--;
	while (i <= j && res)
	{
		if (arr[i] != arr[j])
			res = 0;
		i++, j--;
	}

	return (res);
}
