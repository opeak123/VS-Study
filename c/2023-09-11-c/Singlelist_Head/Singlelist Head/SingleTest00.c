//#include <stdio.h>
//#include <stdlib.h> //malloc.h
//#include <string.h> //memory.h
////#include <tchar.h>
//
//typedef struct Node
//{
//
//	char szData[64];
//	struct Node* next;
//
//}Node;
//
//Node* g_pHead = NULL;
//
//
//
////연결 리스트 전체 데이터 출력
//void PrintList(void)
//{
//	Node* pHead = g_pHead;
//	while (pHead != NULL)
//	{
//		printf_s("[%p] %s, next[%p]\n",
//			pHead, pHead->szData, pHead->next);
//		pHead = pHead->next;
//	}
//	putchar('\n');
//}
//
//int InsertNewNode(char* pszData)
//{
//	Node* pNode = (Node*)malloc(sizeof(Node));
//	memset(pNode, 0, sizeof(Node));
//
//	strcpy_s(pNode->szData, sizeof(pNode->szData), pszData);
//
//
//	if (g_pHead == NULL)
//	{
//		g_pHead = pNode;
//	}
//	else
//	{
//		pNode->next = g_pHead;
//		g_pHead = pNode;
//
//	}
//
//	return 1;
//}
//
//void RealeaseNode(void)
//{
//	Node* pTmp = g_pHead;
//
//	while (pTmp != NULL)
//	{
//		Node* pDelete = pTmp;
//		pTmp = pTmp->next;
//
//		printf("Delete: [%p] %s\n", pDelete, pDelete->szData);
//		free(pDelete);
//	}
//}
//
//
//int FindData(char* pszData)
//{
//	Node* pTmp = g_pHead;
//
//
//	while (pTmp != NULL)
//	{
//		if (strcmp(pTmp->szData, pszData) == 0)
//			return 1;
//		pTmp = pTmp->next;
//	}
//
//	return 0;
//}
//
//
//int DeleteData(char* pszData)
//{
//	Node* pTmp = g_pHead;
//	Node* pPrev= NULL;
//
//
//	while (pTmp != NULL)
//	{
//		if (strcmp(pTmp->szData, pszData) == 0)
//		{
//			//삭제
//			printf("DeleteData(): %s\n", pTmp->szData);
//
//			if (pPrev != NULL)
//			{
//				//prev가 null이라 들어오지못함
//				pPrev->next = pTmp->next;
//			}
//
//			else //따라서 else 문으로
//			{
//				//삭제할 데이터가 첫 번째인경우
//				g_pHead = pTmp->next;
//			}
//			free(pTmp);
//
//			return 1;
//		}
//		pPrev = pTmp;
//		pTmp = pTmp->next;
//	}
//
//	return 0;
//}
//
//
//
//int main()
//{
//
//	//List 테스트를 위한 코드 
//	InsertNewNode("Test01");
//	PrintList();
//	InsertNewNode("Test02");
//	PrintList();
//	InsertNewNode("Test03");
//	PrintList();
//
//	if (FindData("Test01") == 1)
//		printf("FindData() : Test01 found\n");
//
//	if (FindData("Test02") == 1)
//		printf("FindData() : Test02 found\n");
//
//	if (FindData("Test03") == 1)
//		printf("FindData() : Test03 found\n");
//
//	DeleteData("Test02");
//	DeleteData("Test01");
//	DeleteData("Test03");
//
//	RealeaseNode();
//
//	return 0;
//}
//
