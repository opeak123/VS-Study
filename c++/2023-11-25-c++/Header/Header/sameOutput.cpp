/*#include <iostream>
#include <string>

class MyClass {
public:
    int value;
    std::string text;

    MyClass(int v, const std::string& t) : value(v), text(t) {}
};

int main() {
    MyClass obj1(1, "Test");     // 함수 호출과 유사한 초기화
    MyClass obj2{ 1, "Test" };     // uniform initialization
    MyClass obj3 = { 1, "Test" };  // uniform initialization (복사 생성)

    std::cout << obj1.value << " " << obj1.text << std::endl;
    std::cout << obj2.value << " " << obj2.text << std::endl;
    std::cout << obj3.value << " " << obj3.text << std::endl;

    return 0;
}*/

/*
* 
* 
이 세 가지 표현 방식은 모두 객체를 초기화하는 방법을 나타내며,
C++에서는 이들을 통틀어서 
"초기화 리스트" 또는 "초기화 방법"이라고 합니다.
그러나 각각은 사용되는 문맥에 따라 약간의 차이가 있습니다.



MyClass (1, "Test"):
이것은 함수 호출과 유사한 문법으로 보입니다.
만약 생성자가 두 개의 매개변수를 받는다면, 
이는 생성자 호출로 해석될 것입니다.
그러나 C++에서 이는 가장 복잡한 문법 중 하나로
보통 클래스의 복잡한 초기화를 위한 기능으로 사용됩니다.


MyClass {1, "Test"}:
이것은 C++11 이후 도입된 "uniform initialization" 문법입니다.
중괄호를 사용하여 초기화하며,
이는 초기화 리스트(initializer list)로 간주됩니다. 
이 방법은 초기화 규칙을 더 명확하게 하고,
더 일관된 초기화 구문을 제공합니다.



MyClass = {1, "Test"};:
이것은 이미 생성된 객체를 초기화 리스트를 사용하여 
다시 초기화하는 방법입니다. 
이는 C++11 이후에 도입된 초기화 리스트의 일부입니다



.*/