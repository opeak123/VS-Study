//Address Book with double Pointer
//https://m.cafe.daum.net/c-study/4tdN/395

//1.삽입
//2.이름 검색
//3.번호 검색
//4.이름 정렬
//5.생년월일 정렬
//6.전화번호부 수정
//7.전화번호부 출력
//8.전화번호부 삭제
//0. 종료

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <string.h>

//#pragma warning(disable:4996)

typedef struct AddressBook** AddressBookPointer;
//주소록 구조체 생성
typedef struct AddressBook
{
	//이름
	char* name;
	//생년월일
	int birthday;
	//번호
	int number;
	AddressBookPointer bookPointer;
}AddressBook;


//1.삽입
void AddBook(AddressBook** book, const char* name, int day, int number);
//2.이름 검색
void NameSearch(AddressBook** book, char* name);
//3.번호 검색
void NumberSearch(AddressBook** book, int number);
//4.이름 정렬
void SortByName(AddressBook** book);
//5.생년월일 정렬
void SortByDay(AddressBook** book);
//6.주소록 수정 (번호,이름,생년월일)
void ModifyBook(AddressBook** book);
//7.전화번호부 출력
void PrintBook(void);
//8.전화번호부 삭제
void DeleteBook(void);
//0. 종료
//파일저장할건지 


void AddBook(AddressBook** book, const char* name, int day, int number)
{
	// 새로운 주소록 항목을 동적으로 할당
	AddressBook* newBook = (AddressBook*)malloc(sizeof(AddressBook));

	// 이름, 생년월일, 번호 저장
	//newBook->name = strdup(name);  // 이름은 따로 동적 할당 후 복사
	newBook->name = _strdup(name);
	newBook->birthday = day;
	newBook->number = number;

	// 새 항목을 주소록의 맨 앞에 추가
	newBook->bookPointer = *book;
	*book = newBook;
}

int main(void)
{
    AddressBook* book = NULL;

    char name[100];
    int day, number;
    printf("put name: ");
	scanf_s("%s", name, (unsigned)_countof(name));
	printf("put bithday: ");
    scanf_s("%d", &day);
    printf("put number: ");
    scanf_s("%d", &number);

    AddBook(&book, name, day, number);

    return 0;
}
