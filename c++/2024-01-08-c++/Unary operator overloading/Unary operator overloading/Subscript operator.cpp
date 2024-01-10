#include <iostream>

#pragma pack(push, 1)

class Array
{
private:

	int* ptr;
	int size;

public:
	Array(int val, int size)
		:size{ size }
	{
		ptr = new int[size];

		for (int i = 0; i < size; i++)
		{
			ptr[i] = val + i;

			//std::cout << &ptr << std::endl;

			//6std::cout << ptr[i] << std::endl;
		}
	}

	int GetSzie() const
	{
		return size;
	}
 
	int GetValue(int index) const
	{
			return ptr[index];
		/*if (index < size && index >= 0)
		{
		}
		else
		{
			std::cout << "Out of range !" << std::endl;
		}*/
	}

	Array& operator=(const Array& rhs)
	{
		if (this == &rhs)
			return *this;

		delete ptr;
		size = rhs.size;
		ptr = new int[rhs.size];

		for (int i = 0; i < size; i++)
		{
			ptr[i] = rhs.ptr[i];
		}
		return *this;
	}

	int& operator[](int index) 
	{
		if (index < 0 || index >= size)
		{
			std::cout << "Out of range" << std::endl;
			exit(1);
			//	system(0);
		}
		return ptr[index];
	}

	int& operator[](int index) const 
	{
		if (index < 0 || index >= size)
		{
			std::cout << "Out of range" << std::endl;
			exit(1);
		//	system(0);
		}
		return ptr[index];
	}

	~Array()
	{
		delete[] ptr;
	}
};

#pragma pack(pop)


int main(void)
{
	const Array a1{ 5,10};

	//Array a2{ 3,5 };

	//std::cout << a1[0] << std::endl; //a1.operator=(0);
	//a1[0] = 10; 

	std::cout << sizeof(a1) << std::endl;

	return 0;
}