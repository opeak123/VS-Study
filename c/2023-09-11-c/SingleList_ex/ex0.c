//#include <stdio.h>
//#include <malloc.h>
//#include <memory.h>
//#include <string.h>
//
////구조체 생성
//typedef struct Node
//{
//	char nData[64];
//	struct Node* next;
//
//}Node;
//
////헤드 노드 생성
//Node* g_head;
//
//int InsertNode(char* newData)
//{
//	//노드 생성
//	Node* newNode = (Node*)malloc(sizeof(Node));
//
//
//
//	if (newNode == NULL)
//		return 0;
//
//
//	//메모리 초기화
//	memset(newNode,0,sizeof(Node));
//	//복사
//	strcpy_s(newNode->nData, sizeof(newNode->nData), newData);
//	//strncpy_s(newNode->nData, sizeof(newNode->nData), newData, _TRUNCATE);
//	// strncpy_s는 버퍼크기를 맞게 자르거나 제어할때
//
//	if (g_head == NULL)
//	{
//		g_head = newNode;
//	}
//	else
//	{
//		newNode->next = g_head;
//		g_head = newNode; //순서 바꾸면 데이터 유실
//	} 
//	return 1; 
//}
//
//void PrintNode(void)
//{ 
//	Node* p_head = g_head;
//	while (p_head != NULL)
//	{
//		printf("[주소값: %p에 들어있는 데이터 : %s] = ", p_head, p_head->nData);
//		printf("[다음 next값 : %p]\n", p_head->next);
//		p_head = p_head->next;
//
//	}
//	putchar('\n');
//}
//
//
//int main()
//{
//
//	InsertNode("sad");
//	//PrintNode();
//
//	InsertNode("happy");
//	PrintNode();
//	return 0;
//}