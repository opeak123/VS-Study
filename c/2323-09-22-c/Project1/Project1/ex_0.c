#include <stdio.h>
#include <malloc.h>
#include <memory.h>
#include <string.h>

#define IS_EMPTY(g_head) (!(g_head))

typedef struct Node* node_pointer;

typedef struct Node
{
	char nData[50];
	node_pointer next;
}Node;

Node* g_head = NULL;


void InsertNewNode(char* getData)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	memset(newNode, 0, sizeof(Node));
	strcpy_s(newNode->nData, sizeof(newNode->nData), getData);

	if (IS_EMPTY(g_head) == 1)
	{
		g_head = newNode;
	}
	else
	{
		newNode->next = g_head;
		g_head = newNode;
	}
}

int PrintNode()
{
	Node* pNode = g_head;

	if (IS_EMPTY(pNode) == 1)
	{
		printf("출력할 노드가없음\n");
		return 1;
	}

	while (IS_EMPTY(pNode) == 0)
	{
		printf("[%p]의 데이터 --> [%s]\n", pNode, pNode->nData);
		printf("[%p]의 다음주소 --> [%p]\n\n", pNode, pNode->next);
		pNode = pNode->next;
	}
	return 0;
}


int DeleteNode(char* getData)
{
	Node* pTemp = g_head;
	Node* pDelete = pTemp;
	int cmpCount = NULL;

	if (IS_EMPTY(pTemp) == 1)
	{
		printf("DeleteNode() : 삭제할 노드가 없음\n");
		return 1;
	}

	while (pTemp != NULL)
	{
		pDelete = pTemp;
		pTemp = pTemp->next;

		if (strcmp(pDelete->nData, getData) == 0)
		{
			printf("DeleteNode() : [%s]의 노드를 삭제함\n", getData);
			free(pDelete);
			cmpCount++;
			break;
		}
	}

	if (cmpCount == NULL)
		printf("DeleteNode() : [%s]의 노드를 찾지못함\n", getData);

}


int FindData(char* getData)
{
	Node* pTemp = g_head;
	int cmpCount = NULL;

	if (IS_EMPTY(g_head) == 1)
	{
		printf("FindData(): 노드가 없음\n");
		return 1;
	}

	while (pTemp != NULL)
	{
		if (strcmp(pTemp->nData, getData) == 0)
		{
			printf("FindData() : [%s]의 노드를 찾음\n", getData);\
			cmpCount++;
			break;
		}
		pTemp = pTemp->next;
	}

	if (cmpCount == NULL)
	{
		printf("FindData() : [%s]의 노드를 찾지못함\n", getData);
	}


	return 0;
}


int main()
{
	InsertNewNode("Test01");
	InsertNewNode("Test02");
	InsertNewNode("Test03"); 
	PrintNode();

	FindData("Test02");

	return 0;
}