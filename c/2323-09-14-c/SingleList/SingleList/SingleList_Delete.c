#include <stdio.h>
#include <malloc.h>
#include <memory.h>
#include <string.h>

// 0  1
#define IS_EMPTY(g_head) (!(g_head))

typedef struct Node* node_Pointer;

typedef struct Node
{
	char nData[10];
	node_Pointer next;
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

void PrintNode()
{
	Node* pNode = g_head;

	while (IS_EMPTY(pNode) == 0)
	{
		//의 주소가 가리키는 데이터 ---> :
		//의 다음주소 --->
		printf("[%p]의 주소가 가리키는 데이터 ---> [%s]\n", pNode, pNode->nData);
		printf("[%p]의 다음 주소 ---> [%p]\n\n", pNode, pNode->next);
		pNode = pNode->next;
	}
}

void DeleteNode(char* getData)
{
	Node* pTemp = g_head;
	Node* pDelete = pTemp;
	int foundNode = NULL;

	while (pTemp != NULL)
	{
		pDelete = pTemp;
		pTemp = pTemp->next;

		if (strcmp(pDelete->nData, getData) == 0)
		{
			// ~의 데이터가 삭제되었음
			printf("%s의 데이터가 삭제되었음\n", getData);
			free(pDelete);
			foundNode++;
			break;
		}
	}
	if (foundNode == NULL)
	{
		printf("%s의 데이터를 찾을 수 없음\n", getData);
	}
}

int main()
{

	InsertNewNode("Test01");
	InsertNewNode("Test02");
	InsertNewNode("Test03");

	//DeleteNode("Test03");
	PrintNode();



	return 0;
}