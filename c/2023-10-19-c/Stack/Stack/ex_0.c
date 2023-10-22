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
int Pop(Stack* p);
void PrintStack(Stack* p);
void ClearStack(Stack* p);



int main()
{
	//1.push 2.pop 3.print 4.clear 5.count 0.exit(최상단 노드 확인)

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
		printf("3. Print");
		printf("4. Clear");
		printf("5. Count");
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

		case 2:
			value = Pop(&stack);
			if (value == -1)
			{
				printf("stack is underflow\n");
			}
			else
			{
				printf("\n\n\t\t%d pop\n\n\n", value);
			}
			break;

		case 3:

			PrintStack(&stack);

			break;

		case 4:
			ClearStack(&stack);
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
	printf("\t\tstack p value is -1\n\n");
}

int Pop(Stack* p)
{
	if (p->top == -1) //underflow
	{
		return -1;
	}
	return p->arr[p->top--];
}

void Push(Stack* p, int element)
{
	if (p->top == MAX_SIZE - 1)
	{
		printf("Stack overflow\n");
		return 0;
	}
	 
	p->arr[++(p->top)] = element;
}

void PrintStack(Stack* p)
{
	int i;
	printf("print stack(LIFO) : ");
	for (i = p->top; i >= 0; i--)
	{
		printf("%d", p->arr[i]);
	}
	puts("");
}

void ClearStack(Stack* p)
{
	p->top = -1;
}
