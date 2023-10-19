#include <stdio.h>
#include <stdlib.h>

#pragma warning (disable : 4996)
#define MAX_SIZE 5

typedef struct Stack
{
	int arr[MAX_SIZE];
	int top;

}Stack;

void CreateStack(Stack* p);
void Push(Stack* p, int element);

int main()
{
	//1.push 2.pop 3.peek 4.count 5.clear 0.exit(최상단 노드 확인)

	int num,value; 
	Stack stack;

	CreateStack(&stack);

	while (1)
	{
		system("cls");
		printf("************************Stack************************\n");
		printf("**********************pick menu**********************\n\n");
		printf("↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓\n\n");

		printf("1. Push");
		printf("2. Pop");
		printf("3. Peek");
		printf("4. Count");
		printf("5. Clear");
		printf("0. Exit\n\n");

		printf("Enter your choice : ");
		scanf("%d", &num);
		while (getchar() != '\n');

		switch (num)
		{
		case 1:
			printf("\n\nEnter an integer value : ");
			scanf("%d", &value);
			while (getchar() != '\n');
			Push(&stack, value);
			printf("\n\n%d has been pushed\n\n", value);
			break;

		case 0:
			exit(0);

		default:
			printf("Wrong number\n");
			break;
		}
		system("pause");
	}


	return 0;
}

void CreateStack(Stack* p)
{
	p->top = -1;
}

void Push(Stack* p, int element)
{
	if (p->top == MAX_SIZE - 1)
	{
		printf("Stack overflow\n");
		return;
	}

	p->arr[++(p->top)] = element;
}

