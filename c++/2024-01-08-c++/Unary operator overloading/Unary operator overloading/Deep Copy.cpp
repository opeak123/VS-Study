#include <iostream>



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
			ptr[i] = val * i;
		}
	}

	int GetSzie() const
	{
		return size;
	}
 
	int GetValue(int index) const
	{
		if (index < size && index >= 0)
		{
			return ptr[index];
		}
		else
		{
			std::cout << "Out of range !" << std::endl;
		}
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


	~Array()
	{
		delete[] ptr;
	}
};



int main(void)
{
	Array a1{ 5,10};
	Array a2 = { 3, 7 };

	/*std::cout << a.GetValue(9) << std::endl;
	std::cout << a.GetValue(0) << std::endl;*/

	a1 = a1;  



	return 0;
}