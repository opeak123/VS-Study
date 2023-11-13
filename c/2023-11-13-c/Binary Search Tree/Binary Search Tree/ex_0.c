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

			root = AddNode(root, data);
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
			return GetMinNode(t->left);
		}
	}
	return t;
}

Tree* DeleteNode(Tree* t, int target)
{
	Tree* temp;
	if (t->value == target)
	{
		if (t->left == NULL && t->right == NULL) //case1. 자식이 둘다없음
		{
			free(t);
			return NULL;
		}
		else if (t->left == NULL) //case2. 오른쪽 자식 노드만 있는경우 
		{
			temp = t->right;
			free(t);
			return temp; //오른쪽 자식 노도의 값 리턴
		}
		else if (t->right == NULL)//case3. 왼쪽 자식 노드만 있는경우
		{
			temp = t->left;
			free(t);
			return temp;
		}
		else //case 4. 둘다 있는경우
		{
			temp = GetMaxNode(t->left); //왼쪽 자식 노드 중 최대값을 찾아
			t->value = temp->value; //왼쪽 자식 중 최댓값을 삭제 노드로 대입
			t->left = DeleteNode(t->left, temp->value); //다시 제거하러 출발
		}
	}
	else if (target < t->value)
	{
		t->left = DeleteNode(t->left, target);
	}
	else //if (target > t->value)
	{
		t->right = DeleteNode(t->right, target);
	}
	return t;
}
//전위 중위 후위
//Preorder 
//Inorder
//Postorder

void PrintNode(Tree* t)
{
	if (t != NULL)
	{
		printf("%d ", t->value);
		PrintNode(t->left);
		PrintNode(t->right);
	}
}
