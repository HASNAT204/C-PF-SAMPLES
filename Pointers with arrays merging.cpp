#include<iostream>
using namespace std;

int* apply_all(const int* const array_1, size_t size_1, const int* const array_2, size_t size_2)
{
	int* new_array;
	new_array = new int[size_1 * size_2];
	int position{};
	for (size_t i{ 0 };i < size_2;i++)
	{
		for (size_t j{ 0 };j < size_1;j++)
		{
			position[new_array] = array_1[j] * array_2[i];
			++position;
		}

	}
	return new_array;
}

void print(const int* const array, size_t size)
{
	cout << "[";
	for (size_t i{ 0 };i < size;i++)
	
		cout << array[i]<<" ";
		cout << "]";
		cout << endl;
	
	
}

int main()
{
	const int size_1{ 5 };
	const int size_2{ 3 };
	int array_1[]{1,2,3,4,5 };
	int array_2[]{ 10,20,30 };
	cout << "...........array1.........." << endl;
	print(array_1, size_1);
	cout << "\n";
	cout << "...........array2.........." << endl;
	print(array_2, size_2);
	cout << "\n";
	int* result=apply_all(array_1,size_1,array_2,size_2);
	constexpr size_t results_size{ size_1 * size_2 };
	cout << "...........result.........." << endl;
	print(result, results_size);
	delete []result;
	cout << endl;


	system("pause");
}