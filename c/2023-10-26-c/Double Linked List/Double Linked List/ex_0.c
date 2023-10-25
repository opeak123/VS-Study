#include <stdio.h>
#include <string.h>
#include <memory.h>
#include <malloc.h>

//지시문
#define IS_EMPTY (nodeLength == 0)

//노드 구조체 포인터 선언
typedef struct Node* nodePointer;

//노드 구조체 생성
typedef struct Node
{
	char* nData; 
	nodePointer next;
	nodePointer prev;

}Node;

//노드 앞 부분
Node* g_head = NULL;
//노드 끝 부분
Node* g_tail = NULL;

#pragma region ----------------------------Prototype


//노드 수 반환 integar
int nodeLength;

//노드 초기화
void InitNode();

//노드 생성
int InsertAtHead(const char* getData);
int InsertAtTail(const char* getData);

//노드 검색
Node* SearchNode(const char* getData);

//노드 삭제
int DeleteNode(const char* getData);

//노드 출력
int PrintNode();

//노드 수 반환
int GetLength();
#pragma endregion

void InitNode()
{
	g_head = (Node*)malloc(sizeof(Node));
	g_tail = (Node*)malloc(sizeof(Node));
	nodeLength = 0;

	memset(g_head, 0, sizeof(Node));
	memset(g_tail, 0, sizeof(Node));

	g_head->next = g_tail;
	g_tail->prev = g_head;
}


int InsertAtHead(const char* getData)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->nData = (char*)malloc(strlen(getData) + 1);

	strcpy_s(newNode->nData, sizeof(newNode->nData), getData);

	newNode->next = g_head->next;
	newNode->prev = g_head;

	g_head->next = newNode;
	newNode->next->prev = newNode;

	nodeLength++;
	return nodeLength;
}

int InsertAtTail(const char* getData)
{
	return 0;
}

Node* SearchNode(const char* getData)
{
	return NULL;
}

int DeleteNode(const char* getData)
{
	Node* temp = g_head;
	Node* del = temp;
	int cmpCount = 0;

	while (temp != NULL)
	{
		temp = temp->next;

		if (strcmp(del->nData, getData) == 0)
		{
			cmpCount++;
			free(del);
		}
	}

	if (cmpCount == 0)
		return 1;

	return 0;
}

int PrintNode()
{
	Node* pNode = g_head;

	while (pNode != NULL)
	{
		printf("데이터 ---> [%s]\n",pNode->nData);
		printf("[%p]의 다음 주소 ---> [%p]\n\n", pNode, pNode->next);
		//printf("%p %s %p \n", pNode->prev, pNode->nData, pNode->next);
		pNode = pNode->next;
	}
	return 0;
}

int GetLength(void)
{
	return nodeLength;
}

int main(void)
{
	InitNode();
	InsertAtHead("Test01");
	InsertAtHead("Test02");
	InsertAtHead("Test03");

	PrintNode();


	return 0;
}