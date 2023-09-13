#include <stdio.h>
#include <malloc.h>
#include <memory.h>
#include <string.h>
typedef struct Node
{
	char nData[50];
	struct Node* next;

}Node;

Node* g_head;

InsertNewNode(char* getData)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	memset(newNode, 0, sizeof(Node));
	strcpy_s(newNode->nData, sizeof(newNode->nData), getData);

	if(g_head == NULL)
	{
		g_head = newNode;
	}
	else
	{
		newNode->next = g_head;
		g_head = newNode;
	}
}




int main()
{



	return 0;
}