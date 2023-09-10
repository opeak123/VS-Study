//#include <stdio.h>
//
//
//
//typedef struct Node
//{
//	//관리될 데이터(내용)
//	int nData;
//
//
//	//데이터 관리를 위한 포인터
//	struct Node* next;
//}Node;
//
//
//
//int main()
//{
//	Node list[5] = { 0 };
//	//구조체 5개
//
//
//	list[0].next = &list[1];
//	list[1].next = &list[2];
//	list[2].next = &list[3];
//	list[3].next = &list[4];
//	list[4].next = 0;
//
//
//
//	list[0].nData = 100;
//	list[1].nData = 200;
//	list[2].nData = 300;
//	list[3].nData = 400;
//	list[4].nData = 500;
//
//
//	printf_s("%d", list[1].nData); // 200
//
//	Node* pTmp = &list[0];
//	while (true)
//	{
//
//	}
//
//	//연결리스트 단순하게 보여준다면 이렇게 작성하면 끝 
//	return 0;
//}