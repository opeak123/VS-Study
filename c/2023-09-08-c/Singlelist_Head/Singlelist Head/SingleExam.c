//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct NODE
//{
//    char szData[64];
//    struct NODE* next;
//} NODE;
//
//NODE* g_pHead = NULL;	// 헤드 노드
//
///* 연결 리스트 전체 리스트 출력 함수 */
//void PrintList(void)
//{
//    NODE* pHead = g_pHead;
//
//    while (pHead != NULL)
//    {
//        printf("[%p] %s, next[%p]\n", pHead, pHead->szData, pHead->next);
//        pHead = pHead->next;
//    }
//    printf("\n");
//}
//
///* 앞부분에 새 노드 추가 함수 */
//int InsertNewNode(char* pszData)
//{
//    NODE* pNode = (NODE*)malloc(sizeof(NODE));
//    if (pNode == NULL)
//        return 0;
//    memset(pNode, 0, sizeof(NODE));
//    strcpy_s(pNode->szData, sizeof(pNode->szData), pszData);
//
//    if (g_pHead == NULL)
//        g_pHead = pNode;
//    else
//    {
//        pNode->next = g_pHead;
//        g_pHead = pNode;
//    }
//
//    return 1;
//}
//
///* 연길 리스트 전체 리스트 삭제 */
//void ReleaseList(void)
//{
//    NODE* pTmp = g_pHead;
//
//    while (pTmp != NULL)
//    {
//         //반복문 내에서 변수 선언하는 것이 안좋지만 최근에는 애매함
//         //컴파일러가 최적화를 잘 해주기 때문
//         //오히려 접근성 제한으로 일부로 하는 경우도 존재
//        NODE* pDelete = pTmp;
//        pTmp = pTmp->next;
//
//        printf("Delete: [%p] %s\n", pDelete, pDelete->szData);
//        free(pDelete);
//    }
//}
//
///* 특정 노드를 존재하는 지 확인하는 함수 */
//int FindData(char* pszData)
//{
//    NODE* pTmp = g_pHead;
//    while (pTmp != NULL)
//    {
//        if (strcmp(pTmp->szData, pszData) == 0)
//            return 1;
//        pTmp = pTmp->next;
//    }
//
//    return 0;
//}
//
///* 특정 노드를 찾아 삭제하는 함수*/
//int DeleteData(char* pszData)
//{
//    NODE* pTmp = g_pHead;
//    NODE* pPrev = NULL;
//    while (pTmp != NULL)
//    {
//        if (strcmp(pTmp->szData, pszData) == 0)
//        {
//             //삭제
//            if (pPrev != NULL)
//                pPrev->next = pTmp->next;
//            else
//            {
//                 //삭제할 데이터가 첫 번째
//                g_pHead = pTmp->next;
//            }
//            free(pTmp);
//            return 1;
//        }
//        pPrev = pTmp;
//        pTmp = pTmp->next;
//    }
//
//    return 0;
//}
//
//int main(void)
//{
//     //List 테스트를 위한 코드
//    InsertNewNode("TEST01");
//    PrintList();
//    InsertNewNode("TEST02");
//    PrintList();
//    InsertNewNode("TEST03");
//    PrintList();
//
//    if (FindData("TEST01") == 1)
//        printf("FindData(): TEST01 found\n");
//    if (FindData("TEST02") == 1)
//        printf("FindData(): TEST02 found\n");
//    if (FindData("TEST03") == 1)
//        printf("FindData(): TEST03 found\n");
//    putchar('\n');
//
//    DeleteData("TEST03");
//    PrintList();
//    DeleteData("TEST02");
//    PrintList();
//    DeleteData("TEST01");
//    PrintList();
//
//    ReleaseList();
//
//    return 0;
//}