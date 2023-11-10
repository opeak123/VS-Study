#include <stdio.h> //index
#include <malloc.h>
#include <memory.h>
#include <stdlib.h>

#pragma warning (disable : 4996)

//삽입
//삭제 
//검색
//출력

typedef struct Tree
{
	int data;
	struct Tree* left;
	struct Tree* right;
} Tree;

Tree* InsertNode(Tree* t, int value);
void PrintNode(Tree* t);
Tree* SearchNode(Tree* t, int target);
Tree* GetMaxNode(Tree* t);
Tree* GetMinNode(Tree* t);


int main(void)
{
	Tree* root = NULL;
	int choice;
	int data;
	Tree* findNode;

	while (1)
	{
		system("cls");
		printf("\n\n\t\t Binary Search Tree(BST)\n\n\n");
		printf("1 노드 삽입\n");
		printf("2 노드 삭제\n");
		printf("3 노드 검색\n");
		printf("4 최댓값 구하기\n");
		printf("5 최솟값 구하기\n");
		printf("6 이진 검색 트리 출력(중위순회)\n");
		printf("0 프로그램 종료\n");
		printf("\n메뉴선택: ");
		scanf("%d", &choice);

		while (getchar() != '\n');

		switch (choice)
		{
		case 1:
			printf("\n\n삽입할 정수 입력: ");
			scanf("%d", &data);
			root = InsertNode(root, data);
			break;

		case 2:

			break;

		case 3:
			printf("\n\n검색할 정수 입력 : ");
			scanf("%d", &data);

			findNode = SearchNode(root, data);

			if(findNode == NULL)
			{
				printf("\n\n\t\t검색한 값은 존재하지 않습니다.\n");
			}
			else
			{
				printf("\n\n\t\t검색한 값은 존재합니다.\n");
			}
			break;

		case 4:
			findNode = GetMaxNode(root);
			if (findNode != NULL)
			{
				printf("\n\n\t\t 최댓값은 %d입니다/ \n", findNode->data);
			}
			break; 

		case 5:
			findNode = GetMinNode(root);
			if (findNode != NULL)
			{
				printf("\n\n\t\t 최솟값은 %d입니다/ \n", findNode->data);
			}
			break;

		case 6:
			printf("중위순회 출력(오름차순): ");
			PrintNode(root);
			printf("\n");
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

Tree* InsertNode(Tree* t, int value)
{
	if (t == NULL)
	{
		t = (Tree*)calloc(1, sizeof(Tree));
		t->data = value;
		t->left = NULL;
		t->right = NULL;
	}
	else if (t->data == value)
	{
		printf("error: 같은 값이 이미 존재합니다.\n");
	}
	else if (t->data > value)
	{
		t->left = InsertNode(t->left, value);
	}
	else
	{
		t->right = InsertNode(t->right, value);
	}

	return t;
}

void PrintNode(Tree* t)
{
	if(t != NULL)
	{
		PrintNode(t->left);
		printf("%d ", t->data);
		PrintNode(t->right);
	}
}

Tree* SearchNode(Tree* t, int target)
{
	if (t == NULL)
	{
		return NULL;
	}

	if (t->data == target)
	{
		return t;
	}
	else if (t->data > target)
	{
		return SearchNode(t->left, target);
	}
	else//(t->data < target)
	{
		return SearchNode(t->right, target);
	}
}

Tree* GetMaxNode(Tree* t)
{
	if (t == NULL)
	{
		return NULL;
	}

	if (t->right != NULL)
	{
		return GetMaxNode(t->right);
	}
	return t; //최댓값 노드 리턴
}

Tree* GetMinNode(Tree* t)
{
	if (t == NULL)
	{
		return NULL;
	}

	if (t->left != NULL)
	{
		return GetMinNode(t->left);
	}
	return t; //최솟값 노드 리턴
}
