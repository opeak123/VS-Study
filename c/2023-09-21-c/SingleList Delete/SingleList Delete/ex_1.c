//#include <stdio.h>
//#include <memory.h>
//#include <string.h>
//#include <malloc.h>
//
//#define IS_EMPTY(g_head) (!(g_head))
//
//typedef struct Node* node_Pointer;
//typedef struct Node
//{
//	char nData[50];
//	node_Pointer next;
//
//}Node;
//
//Node* g_head = NULL;
//
//void InsertNewNode(char* getData)
//{
//	Node* newNode = (Node*)malloc(sizeof(Node));
//	memset(newNode, 0, sizeof(Node));
//	strcpy_s(newNode->nData, sizeof(newNode->nData), getData);
//
//	if (IS_EMPTY(g_head) == 1)
//	{
//		g_head = newNode;
//	}
//	else
//	{
//		newNode->next = g_head;
//		g_head = newNode;
//	}
//}
//
//int PrintNode()
//{
//	Node* pNode = g_head;
//
//	if (IS_EMPTY(pNode) == 1)
//	{
//		printf("노드가 없음\n");
//		return 1;
//	}
//
//	while (IS_EMPTY(pNode) == 0)
//	{
//		printf("[%p]의 데이터 ---> [%s]\n", pNode, pNode->nData);
//		printf("[%p]의 다음주소 ---> [%s]\n\n", pNode, pNode->next);
//		
//		pNode = pNode->next;
//	}
//	return 0;
//}
//
//int DeleteNode(char* getData)
//{
//	Node* pTemp = g_head;
//	Node* pDelete = pTemp;
//	int cmpCount = NULL;
//
//	if (pTemp == NULL)
//	{
//		printf("DeleteNode(): 삭제할 노드가없음\n");
//		return 1;
//	}
//
//	while (pTemp != NULL)
//	{
//		pDelete = pTemp;
//		pTemp = pTemp->next;
//
//		if (strcmp(pDelete->next, getData) == 0)
//		{
//			printf("DeleteNode(): %s 노드가 삭제됨\n\n", getData);
//			free(pDelete);
//			cmpCount++;
//		}
//		break;
//	}
//
//	if (cmpCount == NULL)
//	{
//		printf("DeleteNode(): 노드를 찾을 수 없음\n");
//	}
//}
//
//
//int main()
//{
//	InsertNewNode("Test01");
//	InsertNewNode("Test02");
//
//	PrintNode();
//	DeleteNode("Test01");
//
//	return 0;
//}