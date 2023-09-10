//#include <iostream>
//
//
//int main()
//{
//	int* array_ptr = nullptr;
//	int size = 0;
//
//	std::cout << "Enter size:";
//	std::cin >> size;
//
//	array_ptr = new int[size];
//
//	array_ptr[0] = 10;
//	array_ptr[1] = 20;
//	array_ptr[2] = 30;
//
//
//	std::cout << array_ptr[0] << std::endl;
//	std::cout << array_ptr[1] << std::endl;
//	std::cout << array_ptr[2] << std::endl;
//
//	delete[] array_ptr;
//
//	return 0;
//}


#include <iostream>

int main() {
    int* array_ptr = nullptr;
    int size = 0;

    std::cout << "Enter size:";
    std::cin >> size;

    array_ptr = new int[size];

    for (int i = 0; i < size; ++i) {
        array_ptr[i] = i * 10;
    }


    delete[] array_ptr;

    return 0;
}
