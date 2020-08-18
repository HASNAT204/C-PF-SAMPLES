#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	int random_number{};
	int min{ 1 };
	int max{ 6 };
	srand(time(nullptr));//if we dont sync with system time we will get same sequence every time
	int count{ 10 };
	cout << "RAND_MAX ON MY SYSTEM IS:" << RAND_MAX;
	for (size_t i{ 1 };i <= count;i++)
	{
		random_number = rand() % max + min;
		cout << random_number << endl;

	}
	
	system("pause");
}