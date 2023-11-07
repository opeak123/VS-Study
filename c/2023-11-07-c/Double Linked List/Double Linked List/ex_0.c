#include <stdio.h>
#include <memory.h>
#include <string.h>
#include <malloc.h>

#define IS_EMPTY(g_head) (!(g_head))

typedef struct Node* node_pointer;
typedef struct Node
{
	char* nData;
	node_pointer prev;
	node_pointer next;
}Node;

Node* g_head = NULL;
Node* g_tail = NULL;
int g_nodeCount = 0;

void InitList()
{
	g_head = (Node*)malloc(sizeof(Node));
	g_tail = (Node*)malloc(sizeof(Node));

	memset(g_head, 0, sizeof(Node));
	memset(g_tail, 0, sizeof(Node));

	g_head->nData = "HEAD";
	g_tail->nData = "TAIL";

	g_head->next = g_tail;
	g_tail->prev = g_head;
}

int PrintList(void)
{
	Node* temp = g_head->next;
	int count = 0;

	if (IS_EMPTY(g_head) == 1)
	{
		printf("PrintList() : error\n");
		return 1;
	}

	while (temp != g_tail)
	{
		count++;
		printf("\n[%p]'s data ----> [%s]'s next -> [%p] nodeCount : [%d]\n", temp, temp->nData, temp->next, count);
		temp = temp->next;
	}
	return 0;
}

int InsertAtHead(const char* getData)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->nData = (char*)malloc(strlen(getData) + 1);
	memset(newNode->nData, 0, sizeof(Node));
	strcpy_s(newNode->nData, strlen(getData) + 1, getData);

	newNode->prev = g_head;
	newNode->next = g_head->next;

	g_head->next = newNode;
	newNode->next->prev = newNode;

	g_nodeCount++;

	return g_nodeCount;
}

int InsertAtTail(const char* getData)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->nData = (char*)malloc(strlen(getData) + 1);

	memset(newNode->nData, 0, sizeof(Node));
	strcpy_s(newNode->nData, strlen(getData) + 1, getData);

	newNode->next = g_tail;
	newNode->prev = g_tail->prev;

	g_tail->prev->next = newNode;
	g_tail->prev = newNode;

	g_nodeCount++;

	return g_nodeCount;
}

int DeleteNode(const char* getData)
{
	Node* del = g_head;
	int cmpCount = 0;

	if (IS_EMPTY(del) == 1)
	{
		printf("DeleteNode() : node don't exist\n");
		return 1;
	}

	while (del != NULL)
	{
		if (strcmp(del->nData, getData) == 0)
		{
			del->next->prev = del->prev;
			del->prev->next = del->next;

			free(del);
			cmpCount++;
			g_nodeCount--;
			printf("DeleteNode() : deleted : [%s]\n", getData);
			break;
		}
		del = del->next;
	}

	if (cmpCount == 0)
	{
		printf("DeleteNode() : can't find : [%s]\n", getData);
	}
	return 0;
}

int SearchNode(const char* getData)
{
	Node* temp = g_head;
	int cmpCount = 0;

	if (IS_EMPTY(temp) == 1)
	{
		printf("SearchNode() : node don't exist\n");
		return 1;
	}

	while (temp != NULL)
	{
		if (strcmp(temp->nData, getData) == 0)
		{
			cmpCount++;
			printf("SearchNode() : found : [%s]\n", getData);
			printf("SearchNode() : [%s]'s count number : [%d]\n", getData, g_nodeCount);
			break;
		}
		temp = temp->next;
	}

	if (cmpCount == 0)
	{
		printf("SearchNode() : can't find : [%s]\n", getData);
	}
	return 0;
}

int main()
{
	InitList();

	InsertAtTail("tail01");
	InsertAtTail("tail02");
	InsertAtTail("tail03");

	InsertAtHead("head01");

	SearchNode("head01");

	DeleteNode("head01");

	SearchNode("tail01");

	InsertAtHead("head02");
	InsertAtHead("head03");

	PrintList();


	return 0;
}
