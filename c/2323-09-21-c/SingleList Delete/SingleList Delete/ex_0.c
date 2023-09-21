#include <stdio.h>
#include <malloc.h>
#include <memory.h>
#include <string.h>

#define IS_EMPTY(g_head) (!(g_head))

typedef struct Node* node_Pointer;
typedef struct Node
{
	char nData[50];
	node_Pointer next;

}Node;

Node* g_head = NULL;


//출력 생성 제거 

void InsertNewNode(char* getData)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	memset(newNode,0,sizeof(Node));
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

void PrintNode(void)
{
	Node* pNode = g_head;

	while (IS_EMPTY(pNode) == 0)
	{
		// ~ 의 주소 데이터 ---> %s
		// %의 주소의 다음주소 ---> %p
		printf("[%p]의 데이터 ----> [%s]\n", pNode, pNode->nData);
		printf("[%p]의 다음주소 ---> [%p]\n\n", pNode, pNode->next);
		pNode = pNode->next;
	}
}

int DeleteNode(char* getData)
{
	Node* pTemp = g_head;
	Node* pDelete = pTemp;
	int cmpCount = NULL;

	if (IS_EMPTY(g_head) == 1)
	{
		printf("DeleteData() : 삭제할 노드가 없음\n");
		return 1;
	}

	while (pTemp != NULL)
	{
		pDelete = pTemp;
		pTemp = pTemp->next;
		
		if (strcmp(pDelete->nData, getData) == 0)
		{
			printf("DeleteData() : [%s]의 데이터가 삭제되었음\n", getData);
			free(pDelete);
			cmpCount++;
			break;
		}
	}

	if (cmpCount == 0)
	{
		printf("DeleteData() : 데이터를 찾을 수 없음\n");
		return 1;
	}

}


int main()
{
	InsertNewNode("Test01");
	InsertNewNode("Test02");
	InsertNewNode("Test03");

	PrintNode();
	DeleteNode("Test01");
	PrintNode();

	return  0;
}