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
//	memset(pNode,0, sizeof(Node));
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
//	return 0;
//}
//
//
//
////memset 예제
//// 
////결과에서 보셨듯
//// 배열 "blockdmask blog"에서 앞자리 5자리가
//// 'c' 값으로 초기화 된 것을 볼 수 있습니다.
//
////#include<string.h> // #include<memory.h> 도 괜찮습니다.
////#include<stdio.h>
////
////int main(void)
////{
////	char arr1[] = "blockdmask blog";
////	memset(arr1, 'c', 5 * sizeof(char));
////	printf(arr1);
////
////	return 0;
////}