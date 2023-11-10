#include <stdio.h> //index
#include <malloc.h>
#include <memory.h>
#include <stdlib.h>

//삽입
//삭제 
//검색
//출력
Tree* InsertNode(Tree* root, int value);

typedef struct Tree
{
	int data; 

	struct Tree* left;
	struct Tree* right;

}Tree;


int main(void)
{
	//free
	return 0;
}

Tree* InsertNode(Tree* root, int value)
{
	if (root == NULL)
	{
		root = (Tree*)calloc(1, sizeof(Tree));

		root->data = value;

		root->left = NULL;
		root->right = NULL;
	}
	else if (root->data == value)
	{
		printf("error : same value\n");
		return root;
	}
	else if (root->data > value)
	{
		root->left = InsertNode(root->left, value);
	}
	else //(root->data < value)
	{
		root->right = InsertNode(root->right, value);
	}

	return root;
}

void Print(Tree* root)
{
	if (root != NULL)
	{
		printf("%d", root->data);
		Print(root->right);
		Print(root->left);
	}
}