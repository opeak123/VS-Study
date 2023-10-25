#include <stdio.h>
#include <string.h>
#include <memory.h>
#include <malloc.h>

//노드 값을 확인할 지시문 선언
#define IS_EMPTY(g_head) (!(g_head))

//초기화
void InitNode();
//생성
void InsertAtHead(const char* getData); //헤드
void InsertAtTail(const char* getData); //테일
//삭제
int DeleteNode(const char* getData);
//찾기
int SearchNode(const char* getData);
//출력
int PrintNode();


//구조체 노드 및 포인터 생성
typedef struct Node* node_pointer;
typedef struct Node
{
	char* nData;
	node_pointer next;
	node_pointer prev;
}Node;

//헤드,테일 초기화
Node* g_head = NULL;
Node* g_tail = NULL;

//노드 갯수 확인할 변수 선언
int g_nodeCount = 0;


//헤드,테일 노드 생성 및 메모리 초기화
void InitNode(void)
{
	g_head = (Node*)malloc(sizeof(Node));
	g_tail = (Node*)malloc(sizeof(Node));
	g_nodeCount = 0;

	memset(g_head, 0, sizeof(Node));
	memset(g_tail, 0, sizeof(Node));

	g_head->next = g_tail->prev;	
	g_tail->prev = g_head->next;
	//g_head->next = g_tail;
}

void InsertAtHead(const char* getData)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	memset(newNode, 0, sizeof(Node));

	///
	newNode->next = g_head->next;
	newNode->prev = g_head;

	g_head->next = newNode;
	newNode->next->prev = newNode;///

	return 0;
}

void InsertAtTail(const char* getData)
{
}

//노드 삭제
int DeleteNode(const char* getData)
{
	Node* temp = g_head;
	Node* del = temp;
	int cmpCount = 0;

	if (IS_EMPTY(temp) == 1)
	{
		printf("DeleteNode() : head is empty -> \n");
		return 1;
	}

	while (temp != NULL)
	{
		//문자열 비교
		if (strcmp(temp->nData, getData) == 0)
		{
			//메모리 해제
			free(temp);
			cmpCount++;
			printf("DeleteNode() : deleted -> %s\n",getData);
			break;
		}
		//다음 노드 연결
		del = temp;
		temp = temp->next;
	}

	if (cmpCount == 0)
	{
		printf("DeleteNode() : can't find -> %s\n", getData);
		return 1;
	}

	return 0;
}

//노드 출력
int PrintNode()
{
	Node* temp = g_head;

	if (IS_EMPTY(temp) == 1)
	{
		printf("PrintNode() : head is empty\n");
		return 1;
	}
	
	do
	{
		printf("PrintNode() :");
		printf("nodeCount :%s\n", g_nodeCount);
		printf("%p's data -> %s\n\n", temp, temp->nData);
		g_nodeCount++;
		temp = temp->next;
	}
	while (temp != NULL);

	return 0;
}


int main(void)
{
	InitNode();
	return 0;
}