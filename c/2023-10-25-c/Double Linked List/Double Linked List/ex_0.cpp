#include <stdio.h>
#include <string.h>
#include <memory.h>

typedef struct Node* nodePointer;

typedef struct Node
{
	char* nData;
	nodePointer next;
	nodePointer prev;

}Node;

Node* g_head = NULL;
Node* g_tail = NULL;

int nodeLength;


//노드 초기화
void InitNode();

//노드 생성
void InsertAtHead();
void InsertAtTail();

//노드 검색
void SearchNode();

//노드 삭제
void DeleteNode();

//노드 수 반환
void GetLength();


int main(void)
{
	 

	return 0;
}