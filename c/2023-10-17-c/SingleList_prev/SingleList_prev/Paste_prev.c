#include <stdio.h>
#include <malloc.h>
#include <memory.h>
#include <string.h>

#define IS_EMPTY(g_head) (!(g_head))

typedef struct Node* node_Pointer;

typedef struct Node
{
	char nData[60];
	node_Pointer next;

}Node,NODE;

Node* g_head = NULL;

void InsertNewNode(char* getData);
void SearchNode(char* getData);
int DeleteNode(char* getData);
int PrintNode();

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

int DeleteNode(char* getData)
{
	Node* pTemp = g_head;
	Node* pPrev = NULL;
	int cmpCount = NULL;

	if (IS_EMPTY(pTemp) == 1)
	{
		printf("DeleteNode() : 노드없음\n");
		return 1;
	}

	while (pTemp != NULL)
	{
		if (strcmp(pTemp->nData, getData) == 0)
		{
			if(pPrev != NULL)
			{
				pPrev->next = pTemp->next;
			}
			else
			{
				g_head = pTemp->next;
			}
			printf("DeleteNode() : %s의 노드삭제함\n", getData);
			free(pTemp);
			cmpCount++;
			break;
		}
		pPrev = pTemp;
		pTemp = pTemp->next;
	}

	if (cmpCount == NULL)
	{
		printf("DeleteNode() : 노드없음 \n");
		return 1;
	}
}

int PrintNode()
{
	Node* pNode = g_head;

	if (IS_EMPTY(pNode) == 1)
	{
		printf("PrintNode() : 노드없음\n");
		return 1;
	}

	while (pNode != NULL)
	{
		printf("[%p] 주소값의 데이터 ---> [%s]의 다음주소 --->[%p]\n", pNode, pNode->nData,pNode->next);
		pNode = pNode->next; 
	}
}


int main() 
{
	//int PrintNode(); C언어에선 프로토타입의 중복선언 가능
	//DeleteNode = SearchNode 와 거의 비슷 
	InsertNewNode("Test01");
	InsertNewNode("Test02");
	InsertNewNode("Test03");
	PrintNode();
	DeleteNode("Test02");
	PrintNode();




	return 0;
}
