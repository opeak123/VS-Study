//#include <stdio.h>
//#include <string.h>
//#include <memory.h>
//#include <malloc.h>
//
//
//#define IS_EMPTY(g_head) (!(g_head))
//
//typedef struct Node* node_pointer;
//
//typedef struct Node
//{
//	char nData[64];
//	node_pointer next;
//}Node;
//
//Node* g_head = NULL;
//
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
//void PrintNode(void)
//{
//	Node* pNode = g_head;
//
//	while (IS_EMPTY(pNode) == 0)
//	{
//		//%p의 주소가 가리키는곳의 데이터 --->  %s 
//		//%s 데이터의 다음 주소 ---> %p 
//		printf("%p의 주소가 가리키는곳의 데이터 --->  %s\n",
//			pNode,pNode->nData);
//
//		printf("%s 데이터의 다음 주소 ---> %p\n\n",
//			pNode->nData, pNode->next);
//		pNode = pNode->next;
//	}
//}
//
//void DeleteNode(char* getData)
//{
//	Node* pTemp = g_head;
//	Node* pDelete = pTemp;
//
//	int foundNode = NULL;
//
//	if (pTemp == NULL)
//		printf("삭제할 노드가 없음");
//
//	while (pTemp != NULL)
//	{
//		pDelete = pTemp;
//		pTemp = pTemp->next;
//
//		if (strcmp(pTemp->nData, getData) == 0)
//		{
//			printf("%s의 노드가 삭제되었음\n", pTemp->nData);
//			free(pDelete);
//			foundNode++;
//			break;
//		}
//
//		if (foundNode == NULL)
//		{
//			printf("%s의 데이터를 찾을 수 없음\n", getData);
//			break;
//		}
//	}
//}
//
//int main()
//{
//	InsertNewNode("Test01");
//	InsertNewNode("Test02");
//
//	PrintNode();
//
//	DeleteNode("Test0331");
//	PrintNode();
//
//
//	return 0;
//}