#include <stdio.h>
#include <memory.h>
#include <string.h>
#include <malloc.h>

#define IS_EMPTY(g_head) (!(g_head))

typedef struct Node* node_Pointer;
typedef struct Node
{
	char nData[50];
	node_Pointer next;
}Node;

Node* g_head = NULL;

void InsertSort(Node* getData)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	memset(newNode, 0, sizeof(Node));
	strcpy_s(newNode->nData, sizeof(newNode->nData), getData);


	if (IS_EMPTY(g_head) == 1)
	{
		g_head = newNode;
		newNode->next = NULL;
	}
	else
	{
		Node* nTemp = g_head;
		while (nTemp->next != NULL)
		{
			nTemp = nTemp->next;
		}
		nTemp->next = newNode;
		newNode->next = NULL;
	}
}

void InsertAtHead(Node* getData)
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
void InsertAtTail(char* getData)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	memset(newNode, 0, sizeof(Node));
	strcpy_s(newNode->nData, sizeof(newNode->nData), getData);
	newNode->next = NULL;

	if (IS_EMPTY(g_head))
	{
		g_head = newNode; // 리스트가 비어있을 경우
	}
	else
	{
		Node* tail = g_head;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newNode;
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

	do
	{
		printf("PrintNode()\n");
		printf("[%p] 주소값의 데이터 ---> [%s]\n", pNode, pNode->nData);
		printf("[%p]의 다음 주소 ---> [%p]\n\n", pNode, pNode->next);

		pNode = pNode->next;
	} 
	while (pNode != NULL);

	return 0;
}

int DeleteNode(char* getData)
{
	Node* dTemp = g_head;
	Node* dPrev = NULL;
	int cmpCount = 0;

	if (IS_EMPTY(dTemp) == 1)
	{
		printf("DeleteNode() : 노드없음\n");
		return 1;
	}

	while(dTemp != NULL)
	{
		if(strcmp(dTemp->nData, getData) == 0)
		{
			if (dPrev != NULL)
			{
				dPrev->next = dTemp->next;
			}
			else
			{
				g_head = dTemp->next;
			}
			printf("DeleteNode() : [%s]의 노드삭제 완료\n", getData);
			free(dTemp);
			cmpCount++;
			break;
		}
		dTemp = dTemp->next;
	}

	if(cmpCount == NULL)
	{
		printf("DeleteNode() : [%s]의 노드 찾지 못함\n\n",getData);
		return 1;
	}
}

int SearchNode(char* getData)
{
	Node* sNode = g_head;
	int cmpCount = 0;
	if(IS_EMPTY(sNode) == 1)
	{
		printf("SearchNode() : 노드없음\n");
	}

	while (sNode != NULL)
	{
		if(strcmp(sNode->nData, getData) == 0)
		{
			printf("SearchNode() : [%s]의 데이터 찾음\n", getData);
			cmpCount++;
		}
		sNode = sNode->next;
	}

	if (cmpCount == NULL)
	{
		printf("SearchNode() : [%s]의 노드 찾지 못함\n",getData);
		return 1;
	}
	return 0;
}



int main()
{
	/*물론 몇몇 C 컴파일러에서는 int를 생략하고
	main 함수를 선언하는 것을 허용할 수도 있습니다. 
	그러나 이는 컴파일러에 따라 다를 수 있으며
	이식성(다른 컴파일러 및 플랫폼에서 동작 여부)에 영향을 줄 수 있으므로,
	명확하게 int main()으로 선언하는 것이 좋은 습관입니다.

	또한, main 함수의 반환 값은 운영체제에게
	프로그램의 실행 상태를 알려주는 중요한 방법이므로,
	프로그램을 작성할 때 반환 값에 특별한 의미를 부여할 수 있습니다.
	일반적으로 정상 종료는 0을 반환하고, 
	오류 또는 비정상 종료는 0이 아닌 값을 반환합니다.*/

	//1.생성(head) ,(tail)
	//2.출력 
	//3.삭제
	//4.찾기

	InsertSort("Sort01");
	InsertAtHead("Test01");
	InsertAtTail("Test04");
	InsertAtHead("Test02");
	InsertAtHead("Test03");
	DeleteNode("Test01");
	SearchNode("Test01");
	SearchNode("Test02");
	PrintNode();

	return 0;
}