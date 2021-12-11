#include "HW03_SetOfIntegers.h"
SetOfIntegers TEMP;

SetOfIntegers::SetOfIntegers()
{
	_size = 5;
	_arr = new int[_size];
	srand(time(NULL));
	for (int i = 0; i < _size; i++)
	{
		for (;;)
		{
			bool flag = true;

			int x = rand() % 98 + 1;

			for (int j = 0; j < i; j++)
			{
				if (_arr[j] == x) { flag = false; break; }
			}
			if (flag) { _arr[i] = x; break; }
		}
	}

}

SetOfIntegers::SetOfIntegers(int size)
{
	_size = size;
	_arr = new int[_size];
	srand(time(NULL));
	for (int i = 0; i < _size; i++)
	{
		for (;;)
		{
			bool flag = true;

			int x = rand() % 98 + 1;

			for (int j = 0; j < i; j++)
			{
				if (_arr[j] == x) { flag = false; break; }
			}
			if (flag) { _arr[i] = x; break; }
		}
	}


}

SetOfIntegers::SetOfIntegers(int a, int b, int c, int d, int f)
{
	int n = 5;
	int* temp = new int[n];
	temp[0] = a;
	temp[1] = b;
	temp[2] = c;
	temp[3] = d;
	temp[4] = f;
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (temp[i] == temp[j]) { temp[j] = NewX(); i = 0; j = i + 1; cout << "error..." << endl; continue; }
		}
	}
		_size = 5;
		_arr = new int[_size];
		for (int i = 0; i < n; i++)
		{
			_arr[i] = temp[i];
		}
}

SetOfIntegers::SetOfIntegers(const SetOfIntegers& arr)
{
	cout << "String Copirovanie" << endl;

	this->_size = arr._size;
	this->_arr = new int[_size];
	for (int i = 0; i < _size; i++)
	{
		_arr[i] = arr._arr[i];
	}
}

SetOfIntegers::~SetOfIntegers()
{
	cout << "Compiler Destroyed:\t" << this << endl;
	delete[] _arr;
}

void SetOfIntegers::SetArr(int x, int i)
{
	_arr[i] = x;
}
int SetOfIntegers::GetArr(int i)
{
	return _arr[i];
}

void SetOfIntegers::ToString()
{
	for (int i = 0; i < _size; i++)
	{
		cout << _arr[i] << '\t';
	}
	cout << endl;
}

const SetOfIntegers SetOfIntegers::operator+(const SetOfIntegers& arr)
{
	int counter = 0;
	for (int i = 0; i < arr._size; i++)
	{
		bool flag = true;
		for (int j = 0; j < this->_size; j++)
		{
			if (this->_arr[j] == arr._arr[i]) { flag = false;/* break;*/ }
		}
		if (flag)counter++;
	}
	TEMP._size = this->_size + counter;
	TEMP._arr = new int[TEMP._size];
	for (int i = 0; i < this->_size; i++)
	{
		TEMP._arr[i] = this->_arr[i];
	}
	int z = this->_size;
	for (int i = 0; i < arr._size; i++)
	{
		bool flag = true;
		for (int j = 0; j < this->_size; j++)
		{
			if (this->_arr[j] == arr._arr[i]) { flag = false; continue; }
		}
		if (flag) { ::TEMP._arr[z] = arr._arr[i]; z++; }
	}


	return TEMP;
}

const SetOfIntegers& SetOfIntegers::operator+=(const SetOfIntegers& arr)
{

	int counter = 0;
	for (int i = 0; i < arr._size; i++)//îïåðàíä íàõîäÿùååñÿ ñïðàâà îò îïåðàòîðà
	{
		bool flag = true;
		for (int j = 0; j < this->_size; j++)//îïåðàíä íàõîäÿùèéñÿ ñëåâà îò îïåðàòîðà
		{
			if (this->_arr[j] == arr._arr[i]) { flag = false; break; }
		}
		if (flag)counter++;
	}
	TEMP._size = this->_size + counter;
	TEMP._arr = new int[TEMP._size];
	for (int i = 0; i < this->_size; i++)
	{
		TEMP._arr[i] = this->_arr[i];
	}
	int z = this->_size;
	for (int i = 0; i < arr._size; i++)
	{
		bool flag = true;
		for (int j = 0; j < this->_size; j++)
		{
			if (this->_arr[j] == arr._arr[i]) { flag = false; continue; }
		}
		if (flag) { TEMP._arr[z] = arr._arr[i]; z++; }
	}
	delete[] this->_arr;
	this->_size = TEMP._size;
	this->_arr = new int[this->_size];
	for (int i = 0; i < TEMP._size; i++)
	{
		_arr[i] = TEMP._arr[i];
	}


	return SetOfIntegers(*this);
}

const SetOfIntegers SetOfIntegers::operator-(const int& x)
{
	bool flag = true;
	for (int i = 0, j = 0; i < _size; i++)
	{
		if (_arr[i] == x) { flag = false; break; }
	}
	if (flag)
	{
		cout << " error... " << endl;
		return SetOfIntegers(*this);
	}
	TEMP._size = _size - 1;
	TEMP._arr = new int[TEMP._size];

	for (int i = 0,j=0; i < _size; i++)
	{
		if (_arr[i] != x) {	TEMP._arr[j] = _arr[i]; j++; }
	}
	return TEMP;
}

const SetOfIntegers& SetOfIntegers::operator-=(const int& x)
{
	bool flag = true;
	for (int i = 0, j = 0; i < _size; i++)
	{
		if (_arr[i] == x) { flag = false; break; }
	}
	if (flag)
	{
		cout << " error... " << endl;
		return SetOfIntegers(*this);
	}
	TEMP._size = _size - 1;
	TEMP._arr = new int[TEMP._size];

	for (int i = 0, j = 0; i < _size; i++)
	{
		if (_arr[i] != x) { TEMP._arr[j] = _arr[i]; j++; }
	}
	delete[] this->_arr;
	_size = TEMP._size;
	_arr = new int[_size];
	for (int i = 0; i < _size; i++)
	{
		_arr[i] = TEMP._arr[i];
	}

	return SetOfIntegers(*this);

}

const SetOfIntegers SetOfIntegers::operator-(const SetOfIntegers& arr)
{
	int counter = 0;
	for (int i = 0; i < _size; i++){
		bool flag = true;
		for (int j = 0; j < arr._size; j++)
		{
			if (_arr[j] == arr._arr[i]) { flag = false; break; }
		}
		if (flag)counter++;
	}
	TEMP._size = counter;
	TEMP._arr = new int[TEMP._size];
	for (int i = 0, z = 0; i < _size; i++) {
		bool flag = true;
		for (int j = 0; j < arr._size; j++)
		{
			if (_arr[i] == arr._arr[j]) { flag = false; break; }

		}
		if (flag) { TEMP._arr[z] = _arr[i]; z++; }
	}


	return TEMP;
}

const SetOfIntegers& SetOfIntegers::operator-=(const SetOfIntegers& arr)
{
	int counter = 0;
	for (int i = 0; i < _size; i++) {
		bool flag = true;
		for (int j = 0; j < arr._size; j++)
		{
			if (_arr[j] == arr._arr[i]) { flag = false; break; }
		}
		if (flag)counter++;
	}
	TEMP._size = counter;
	TEMP._arr = new int[TEMP._size];
	for (int i = 0, z = 0; i < _size; i++) {
		bool flag = true;
		for (int j = 0; j < arr._size; j++)
		{
			if (_arr[i] == arr._arr[j]) { flag = false; break; }

		}
		if (flag) { TEMP._arr[z] = _arr[i]; z++; }
	}
	delete[] this->_arr;	
	_size = TEMP._size;
	_arr = new int[_size];
	for (int i = 0; i < _size; i++)
	{
		_arr[i] = TEMP._arr[i];
	}

	return SetOfIntegers(*this);
}

const SetOfIntegers SetOfIntegers::operator*(const SetOfIntegers& arr)
{
	int counter = 0;
	for (int i = 0; i < _size; i++) {
		bool flag = false;
		for (int j = 0; j < arr._size; j++)
		{
			if (_arr[j] == arr._arr[i]) { flag = true; break; }
		}
		if (flag)counter++;
	}
	TEMP._size = counter;
	TEMP._arr = new int[TEMP._size];
	for (int i = 0, z = 0; i < _size; i++) {
		bool flag = false;
		for (int j = 0; j < arr._size; j++)
		{
			if (_arr[i] == arr._arr[j]) { flag = true; break; }

		}
		if (flag) { TEMP._arr[z] = _arr[i]; z++; }
	}


	return TEMP;
}

const SetOfIntegers& SetOfIntegers::operator*=(const SetOfIntegers& arr)
{
	int counter = 0;
	for (int i = 0; i < _size; i++) {
		bool flag = false;
		for (int j = 0; j < arr._size; j++)
		{
			if (_arr[j] == arr._arr[i]) { flag = true; break; }
		}
		if (flag)counter++;
	}
	TEMP._size = counter;
	TEMP._arr = new int[TEMP._size];
	for (int i = 0, z = 0; i < _size; i++) {
		bool flag = false;
		for (int j = 0; j < arr._size; j++)
		{
			if (_arr[i] == arr._arr[j]) { flag = true; break; }

		}
		if (flag) { TEMP._arr[z] = _arr[i]; z++; }
	}
	delete[] this->_arr;	
	_size = TEMP._size;
	_arr = new int[_size];
	for (int i = 0; i < _size; i++)
	{
		_arr[i] = TEMP._arr[i];
	}

	return SetOfIntegers(*this);
}

const SetOfIntegers SetOfIntegers::operator+(const int& x)
{
	for (int i = 0; i < _size; i++)
	{
		if (x == _arr[i]) { cout << "error..." << endl; return SetOfIntegers(*this); }
	}
	TEMP._size = this->_size + 1;
	TEMP._arr = new int[TEMP._size];
	for (int i = 0; i < this->_size; i++)
	{
		TEMP._arr[i] = _arr[i];
	}
	TEMP._arr[this->_size] = x;
	return TEMP;
}

const SetOfIntegers& SetOfIntegers::operator+=(const int& x)
{
	int n = this->_size + 1;
	int* temp = new int[n];
	for (int i = 0; i < this->_size; i++)
	{
		temp[i] = _arr[i];
	}
	temp[this->_size] = x;
	delete[] this->_arr;	
	this->_size = n;
	this->_arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		_arr[i] = temp[i];
	}

	return SetOfIntegers(*this);
}

int SetOfIntegers::NewX()
{
	srand(time(NULL));
	int x = rand() % 98 + 1;
	return x;
}

const SetOfIntegers& SetOfIntegers::operator=(const SetOfIntegers& arr)
{
	delete[] this->_arr;
	this->_size = arr._size;
	this->_arr = new int[_size];
	for (int i = 0; i < _size; i++)
	{
		_arr[i] = arr._arr[i];
	}

	return SetOfIntegers(*this);
}

bool SetOfIntegers::operator==(const SetOfIntegers& arr)
{
	bool flag;
	for (int i = 0; i < this->_size; i++)
	{
		flag = false;
		for (int j = 0; j < arr._size; j++)
		{
			if (this->_arr[i] == arr._arr[j]) { flag = true; break; }
		}
		if (flag == false)return flag;
	}
	return flag;
}


int NewX()
{
	srand(time(NULL));
	int x = rand() % 98 + 1;
	return x;
}
ostream& operator<< (ostream& output, const SetOfIntegers& arr)
{
	
for (int i = 0; i < arr._size; i++)
{
	output<<to_string(arr._arr[i]) << '\t';
}
cout << endl;

	return output;
}
istream& operator>> (istream& input, SetOfIntegers& arr)
{
	for (int i = 0; i < arr._size; )
	{
		bool flag = true;
		cout << "\n Insert " << i + 1 << " the number -";
		input >> arr._arr[i];
		if (i > 0) {
			for (int j = 0; j < i ; j++)
			{
				if (arr._arr[i] == arr._arr[j]) { flag = false; cout << " arror... number match!!!" << endl; }
			}
		}
		if (flag)i++;
	}

	return input;
}
