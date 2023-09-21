#include <stdio.h>
#include <string.h>
#include <memory.h>
#include <malloc.h>

#define IS_EMPTY(g_head) (!(g_head))

typedef struct Node* node_pointer;

typedef struct Node
{
	char nData[20];
	node_pointer next;
}Node;


Node* g_head = NULL;

void InsertNewNode(char* getData)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	memset(newNode, 0, sizeof(Node));
	strcpy_s(newNode->nData, sizeof(newNode->nData), getData);

	if (IS_EMPTY(g_head) ==  1)
	{
		g_head = newNode;
	}
	else
	{
		newNode->next = g_head;
		g_head = newNode;
	}
}

void PrintNode(void)
{
	Node* pNode = g_head;

	if (IS_EMPTY(pNode) == 1)
	{
		printf("출력할 노드가 없음\n");
	}
	while (IS_EMPTY(pNode) == 0)
	{
		printf("[%p]의 데이터 ---> [%s]\n",pNode,pNode->nData);
		printf("[%p]의 데이터의 다음 주소 ---> [%p]\n\n", pNode, pNode->next);
		pNode = pNode->next;
	}
}

void DeleteNode(char* getData)
{
	Node* pTemp = g_head;
	Node* pDelete = pTemp;
	int foundNode = NULL;

	if (IS_EMPTY(pTemp) == 1)
	{
		printf("삭제할 노드가 없음\n");
		return 1;
	}

	while (pTemp != NULL)
	{
		pDelete = pTemp;
		pTemp = pTemp->next;

		if (strcmp(pDelete->nData, getData) == 0)
		{
			printf("%s의 해당 노드를 삭제하였음\n",getData);
			free(pDelete);
			foundNode++;
			break;
		}
	}

	if (foundNode == NULL)
	{
		printf("해당 노드를 찾을 수 없음\n");
	}
}


int main()
{
	InsertNewNode("Test01");
	InsertNewNode("Test02");
	InsertNewNode("Test03");

	PrintNode();

	DeleteNode("Test02");
	PrintNode();


	return 0;
}