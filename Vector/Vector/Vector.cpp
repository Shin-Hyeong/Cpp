#include <iostream>

using namespace std;

template<typename T>
class Vector
{
public:
	Vector()
	{

	}

	~Vector()
	{
		if (_data)
			delete[] _data;

		_data = nullptr;
	}

	void push_back(const T& value)
	{
		if (_size == _capacity)
		{
			int capacity = static_cast<int>(_capacity * 1.5);
			if (capacity == _capacity)
				capacity++;
			_capacity = capacity;

			reserve(_capacity);
		}

		_data[_size] = value;
		_size++;
	}

	void reserve(int capacity)
	{
		if (_capacity >= capacity)
			return;

		_capacity = capacity;
		T* newData = new T[capacity];
		for (int i = 0; i < _size; i++)
			newData[i] = _data[i];

		if (_data)
			delete[] _data;

		_data = newData;

	}

	void clear()
	{
		if (_data)
		{
			delete[] _data;

			_data = new T[_capacity];
		}
	}

	T& operator[](const int pos)
	{
		return _data[pos];
	}

	int size() { return _size; }
	int capacity() { return _capacity; }



private:
	T* _data = nullptr;
	int _size = 0;
	int _capacity = 0;
};

int main()
{
	Vector<int> v;
	v.reserve(10);

	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
		cout << i << " " << v.size() << " " << v.capacity() << endl;
	}

	cout << v[5] << endl;

	v.clear();
	cout << "clear() 이후 vector.size() :  " << v.size() << ", vector.capacity() :  " << v.capacity() << endl;


	return 0;
}