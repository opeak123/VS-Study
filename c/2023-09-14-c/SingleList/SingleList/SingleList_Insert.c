//#include <stdio.h>
//#include <malloc.h>
//#include <memory.h>
//#include <string.h>
//
//#define IS_EMPTY(g_head) (!(g_head))
//
//typedef struct Node* node_pointer;
//
//typedef struct Node
//{
//	char nData[50];
//	node_pointer next;
//}Node;
//
//node_pointer g_head = NULL;
//
//
//void InsertNewNode(char* getData)
//{
//	Node* newNode = (Node*)malloc(sizeof(Node));
//	memset(newNode,0,sizeof(Node));
//	strcpy_s(newNode->nData, sizeof(newNode->nData), getData);
//
//	if (IS_EMPTY(g_head))
//	{
//		g_head = newNode;
//	}
//	else
//	{
//		newNode->next = g_head;
//		g_head = newNode;
//	}
//}
//void PrintNode(void)
//{
//	Node* p_head = g_head;
//
//	while (IS_EMPTY(p_head) == 0)
//	{
//		printf("[주소 : %p가 가리키는 데이터 -> %s]\n",p_head,p_head->nData);
//		printf("p_head의 다음 주소 : %p\n",p_head->next);
//		p_head = p_head->next;
//	}
//}
///*void PrintNode()
//{
//	Node* p_head = g_head;
//	Node* prev = NULL;
//
//	while (p_head != NULL)
//	{
//		Node* next = p_head->next;
//		p_head->next = prev;
//		prev = p_head;
//		p_head = next;
//	}
//
//	p_head = prev;
//
//	while (p_head != NULL)
//	{
//		printf("[주소 : %p가 가리키는 데이터 -> %s]\n", p_head, p_head->nData);
//		printf("p_head의 다음 주소 : %p\n", p_head->next);
//		p_head = p_head->next;
//	}
//}*/
//
//void DeleteNode(void) 
//{
//	Node* deleteTemp = g_head;
//	while (deleteTemp != NULL)
//	{
//		Node* pDelete = deleteTemp;  
//		deleteTemp = deleteTemp->next;
//		printf("%p의 주소에 있는 %s 데이터가 삭제됨\n", pDelete, pDelete->nData);
//		free(pDelete);
//	}
//}
//
//int FindData(char* getData)
//{
//	Node* findTemp = g_head;
//
//	while(IS_EMPTY(!findTemp))
//	{
//		if (strcmp(findTemp->nData, getData) == 1)
//		{
//			return 1;
//		}
//		findTemp = findTemp->next;
//	}
//	return 0;
//}
//
//
//int main()
//{
//	InsertNewNode("Test01");
//
//	InsertNewNode("Test02");
//	FindData("Test01");
//	PrintNode();
//
//	if(FindData("Test061") == 1)
//	{
//		printf("found");
//	} 
//	//DeleteNode();
//	  
//	return 0;
//}