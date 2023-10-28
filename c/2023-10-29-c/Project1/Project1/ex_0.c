#include <stdio.h>
#include <string.h>
#include <memory.h>
#include <malloc.h>

//노드 값을 확인할 지시문 선언
#define IS_EMPTY(g_head) (!(g_head))

//초기화
void InitNode();
//생성
int InsertAtHead(const char* getData); //헤드
int InsertAtTail(const char* getData); //테일
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
int g_nodeCount;


//헤드,테일 노드 생성 및 메모리 초기화
void InitNode(void)
{
	//헤드,테일 메모리 할당
	g_head = (Node*)malloc(sizeof(Node));
	g_tail = (Node*)malloc(sizeof(Node));

	//초기화
	g_nodeCount = 1;
	memset(g_head, 0, sizeof(Node));
	memset(g_tail, 0, sizeof(Node));

	//노드 위치 설명
	g_head->nData = "HEAD";
	g_tail->nData = "TAIL";

	g_head->next = g_tail;
	g_tail->prev = g_head;
}

int InsertAtHead(const char* getData)
{
	//새 노드 메모리 할당
	Node* newNode = (Node*)malloc(sizeof(Node));

	//메모리 초기화
	memset(newNode, 0, sizeof(Node));

	//데이터를 저장할 곳에 메모리 할당
	newNode->nData = (char*)malloc(strlen(getData) + 1);

	//문자열 복사
	strcpy_s(newNode->nData, strlen(getData) + 1, getData);

	//새 노드 앞 뒤 연결 
	newNode->next = g_head->next;
	newNode->prev = g_head;

	//헤드,테일노드 새 노드에 연결
	g_head->next = newNode;
	newNode->next->prev = newNode;

	return 0;
}

int InsertAtTail(const char* getData)
{
	//새 노드 메모리 할당
	Node* newNode = (Node*)malloc(sizeof(Node));

	//메모리 초기화
	memset(newNode, 0, sizeof(Node));

	//데이터를 저장할 곳에 메모리 할당
	newNode->nData = (char*)malloc(strlen(getData) + 1);

	//문자열 복사
	strcpy_s(newNode->nData, strlen(getData) + 1, getData);

	//노드 연결
	newNode->next = g_tail;
	newNode->prev = g_tail->prev;

	////새 노드를 tail의 prev에 대입
	//g_head->next = newNode;
	////새 노드를 g_head의 next에 대입
	//newNode->next->prev = newNode;


	//새 노드를 tail의 prev에 대입
	g_tail->prev->next = newNode;
	g_tail->prev = newNode;

	return 0;
}

//노드 삭제
int DeleteNode(const char* getData)
{
	//노드를 담을 변수 선언
	Node* temp = g_head;
	int cmpCount = 0;

	//HEAD가 NULL일 경우 RETURN
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
			//끊어질 노드 연결
			temp->prev->next = temp->next;
			temp->next->prev = temp->prev;

			//메모리 해제
			free(temp);
			cmpCount++;
			printf("DeleteNode() : deleted -> %s\n\n", getData);
			break;
		}
		//다음 노드 연결
		temp = temp->next;
	}

	//비교 할 문자열이 없을 경우 RETURN
	if (cmpCount == 0)
	{
		printf("DeleteNode() : can't find -> %s\n", getData);
		return 1;
	}

	return 0;
}

int SearchNode(const char* getData)
{
	//노드를 담을 변수 선언
	Node* temp = g_head;
	int cmpCount = 0;

	//HEAD가 NULL일 경우 RETURN
	if (IS_EMPTY(temp) == 1)
	{
		printf("SearchNode() : head is empty -> \n");
		return 1;
	}

	while (temp != NULL)
	{
		//문자열 비교
		if (strcmp(temp->nData, getData) == 0)
		{
			cmpCount++;
			printf("SearchNode() : found -> %s\n\n", getData);
			break;
		}
		//다음 노드 연결
		temp = temp->next;
	}

	//비교 할 문자열이 없을 경우 RETURN
	if (cmpCount == 0)
	{
		printf("SearchNode() : can't find -> %s\n\n", getData);
		return 1;
	}

	return 0;
}



//노드 출력
int PrintNode()
{
	//노드를 담을 변수 선언
	Node* temp = g_head;

	//HEAD가 NULL일 경우 RETURN
	if (IS_EMPTY(temp) == 1)
	{
		printf("PrintNode() : head is empty\n");
		return 1;
	}

	do
	{
		printf("PrintNode() :");
		printf("nodeCount: %d\n", g_nodeCount);
		printf("%p's data -> %s\n\n", temp, temp->nData);
		g_nodeCount++;
		//노드 연결
		temp = temp->next;
	} while (temp != NULL);

	return 0;
}

int main(void)
{
	InitNode();

	InsertAtTail("tail01");
	InsertAtTail("tail02");
	InsertAtTail("tail03");
	InsertAtHead("head01");
	InsertAtHead("head02");
	InsertAtHead("head03");

	SearchNode("tail03");
	DeleteNode("tail03");
	SearchNode("tail03");


	PrintNode();

	return 0;
}