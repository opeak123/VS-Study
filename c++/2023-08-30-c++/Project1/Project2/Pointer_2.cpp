//#include <iostream>
//
//
//void main()
//{
//
//	int* p1 = nullptr;
//	double* p2 = nullptr;
//	unsigned* p3 = nullptr;
//	unsigned long long* p4 = nullptr;
//
//	std::cout << "p1 :" << sizeof(p1) << std::endl;
//	std::cout << "p2 :" << sizeof(p2) << std::endl;
//	std::cout << "p3 :" << sizeof(p3) << std::endl;
//	std::cout << "p4 :" << sizeof(p4) << std::endl;
//
//	//제공하신 코드에서는 모든 포인터 변수 p1, p2, p3 및 p4가
//	//동일한 크기(대략 8바이트)인 것으로 보입니다.
//	//이 동작은 최신 데스크톱 및 서버 플랫폼을 포함한\
//	// 대부분의 64비트 시스템에서 예상되며 일반적입니다.
//
//	//모두 동일한 크기를 갖는 이유는 64비트 주소 지정 및 메모리 관리의 특성 때문입니다. 
//	// 64비트 시스템의 경우 :
//	// 64비트 시스템에서 포인터 변수는 가리키는 데이터 유형에 관계없이
//    // 8바이트의 일관된 크기를 갖습니다. 이는 64비트 아키텍처의 기본 특성입니다.
//}