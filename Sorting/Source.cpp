#include "stdio.h"
#include <string>
#include <vector>
struct Array
{
	Array(const int *data, const int size)
	{
		_size = size;
		_data = new int[_size];
		for (int i = 0; i < _size; i++)
			_data[i] = data[i];
	}

	int *_data;
	int _size;

	int size() { return _size; }

	void Print()
	{
		for (int i = 0; i < size(); i++)
		{
			printf("%d ", _data[i]);
		}

	}

	void BubbleSort()
	{
		int n = this->size();
		for (int iteration = 1; iteration < n; iteration++)
		{
			for (int index = 0; index < n - iteration; index++)
			{
				int left = _data[index];
				int right = _data[index + 1];

				if (left > right)
				{
					printf("\n(%d ->  <- %d) ", left, right);
					_data[index + 1] = left;
					_data[index] = right;
				}
			}
		}
	}
};

std::string ReadFromFile(const char* filename)
{
	errno_t err;
	FILE *fp;
	err = fopen_s(&fp, filename, "r");
	char buf[500];
	std::string *str = new std::string();
	while (std::fgets(buf, sizeof buf, fp))
	{
		str->append(buf);
	}
	return *str;
}

int main()
{
	int values[] = { 3, 2, 4, 1, 5 };
	
	std::string result = ReadFromFile("data.txt");
	std::vector<std::string> numbers;
	std::vector<int> intnumbers;
	std::string current;
	for (auto s : result)
	{
		if (s == ' ' || s == '\n' || s == '\t')
		{			
			numbers.push_back(current);
			current.clear();
		}			
		else
		{
			current.push_back(s);
		}
	}

	for(auto num : numbers)
		intnumbers.push_back(std::stoi(num));	
	
	Array arr = Array(intnumbers.data(), intnumbers.size());
	arr.BubbleSort();
	arr.Print();

}