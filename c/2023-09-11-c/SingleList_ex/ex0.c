#include <stdio.h>
#include <malloc.h>
#include <memory.h>
#include <string.h>

//구조체 생성
typedef struct Node
{
	char nData[64];
	struct Node* next;

}Node;

//헤드 노드 생성
Node* g_head;

int InsertNode(char* newData)
{
	//노드 생성
	Node* newNode = (Node*)malloc(sizeof(Node));



	if (newNode == NULL)
		return 0;


	//메모리 초기화
	memset(newNode,0,sizeof(Node));
	//복사
	strcpy_s(newNode->nData, sizeof(newNode->nData), newData);
	

	if (g_head == NULL)
	{
		g_head = newNode;
	}
	else
	{
		newNode->next = g_head; //원본코드(맞음)
		//g_head->next = newNode->nData; 틀림 (내가작성한거)
		g_head = newNode; //원본코드(맞음)
	}
	return 1;
}



int main()
{

	InsertNode("sad");
	//PrintList();
	return 0;
}