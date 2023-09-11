//#include <stdio.h>
//#include <malloc.h> //malloc
//#include <memory.h> //memeset
//#include <string.h>
//
////출력 , 삽입(2방향) ,삭제, 
//typedef struct Node
//{
//	char szData[64];
//	struct Node* next;
//
//}Node;
//
//Node* pHead = NULL;
//
//void PrintList(void)
//{
//	Node* originHead = pHead;
//	while (originHead != NULL)
//	{
//		printf("[%p] : %s, next -> %p\n", originHead, originHead->szData, originHead->next);
//
//		originHead = originHead->next;
//	}
//	putchar('\n');
//}
//
//int InsertNode(char* pszData)
//{
//	Node* pNode = (Node*)malloc(sizeof(Node));
//	memset(pNode,0,sizeof(Node));
//	strcpy_s(pNode->szData,sizeof(pNode->szData),pszData);
//
//	if (pHead == NULL)
//	{
//		pHead = pNode;
//	}
//	else
//	{
//		pNode->next = pHead;
//		pHead = pNode;
//	}
//
//	return 1;
//}
//
//
//int main()
//{
//	InsertNode("test01");
//	PrintList();
//	InsertNode("test02");
//	PrintList();
//	InsertNode("test03");
//	PrintList();
//
//
//
//	return 0  ;
//}