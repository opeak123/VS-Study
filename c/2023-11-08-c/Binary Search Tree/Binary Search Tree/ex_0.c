#include <stdio.h>
#include <stdlib.h>

#pragma warning (disable : 4996)

typedef struct Tree
{
	int value;
	struct Tree* left;
	struct Tree* right;
}Tree;

Tree* AddNode(Tree* t, int data);
Tree* GetMaxNode(Tree* t);
Tree* GetMinNode(Tree* t);
void DisplayInorder(Tree* t);

int main(void)
{
	Tree* root = NULL;
	Tree* findNode;
	int choice;
	int data;


	while (1)
	{
		system("cls");
		printf("\n\n\t\t Binary Search Tree(BST)\n\n\n");
		printf("1 노드 삽입 \n");
		printf("2 노드 삭제 \n");
		printf("3 노드 검색 \n");
		printf("4 최댓값 구하기 \n");
		printf("5 최솟값 구하기\n");
		printf("6 이진 검색 트리 출력(중위순회)\n");
		printf("0 프로그램 종료\n");
		printf("\n메뉴선택 : ");
		scanf("%d", &choice);

		while (getchar() != '\n');

		switch (choice)
		{


		case 1:
			printf("\n\n삽입할 정수 입력 : ");
			scanf("%d", &data);

			root = AddNode(root,data);
			break;

		case 2:
			break;
		case 3:
			break;
		case 4:
			findNode = GetMaxNode(root);
			printf("최댓값 : %d\n", findNode->value);
			break;
		case 5:
			findNode = GetMinNode(root);
			printf("최솟값 : %d\n", findNode->value);
			break;
		case 6:
			printf("중위순회 출력(오름차순) : ");
			DisplayInorder(root);
			break;
		case 0:
			exit(0);
		default:
			break;
		}
		printf("\n\n\t\t");
		system("pause");
	}

	return 0;
}

Tree* AddNode(Tree* t, int data)
{
	if (t == NULL)
	{
		t = (Tree*)malloc(sizeof(Tree)); //트리 노드 생성
		t->value = data;
		t->left = NULL;
		t->right = NULL;
	}
	else if (t->value > data) //삽입할 정수가 더 작은 경우 > left로
	{
		t->left = AddNode(t->left, data);
	}
	else if (t->value < data) //삽입할 정수가 더 클 경우 > right로
	{
		t->right = AddNode(t->right, data);
	}
	return t;
}

Tree* GetMaxNode(Tree* t)
{
	if (t != NULL)
	{
		if (t->right != NULL)
		{
			return GetMaxNode(t->right);
		}
	}
	return t;
}

Tree* GetMinNode(Tree* t)
{
	if (t != NULL)
	{
		while (t->left != NULL)
		{
			t = t->left;
		}
	}
	return t;
}

void DisplayInorder(Tree* t)
{
	if (t != NULL)
	{
		DisplayInorder(t->left);
		printf("%d ", t->value);
		DisplayInorder(t->right);
	}
}
