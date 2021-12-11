#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <ostream>
#include <cstdlib>
#include <ctime>

using namespace std;
class SetOfIntegers
{
private:
	int* _arr;
	int _size;
public:
	SetOfIntegers();
	SetOfIntegers(int size);
	SetOfIntegers(int a, int b, int c, int d, int f);
	SetOfIntegers(const SetOfIntegers& arr);
	~SetOfIntegers();
	void SetArr(int x,int i);
	int GetArr(int i);
	void ToString();
	const SetOfIntegers operator+ (const int& x);
	const SetOfIntegers operator+= (const int& x);
	const SetOfIntegers operator+ (const SetOfIntegers& arr);
	const SetOfIntegers operator+= (const SetOfIntegers& arr);
	const SetOfIntegers operator- (const int& x);
	const SetOfIntegers operator-= (const int& x);
	const SetOfIntegers operator- (const SetOfIntegers& arr);
	const SetOfIntegers operator-= (const SetOfIntegers& arr);
	const SetOfIntegers operator* (const SetOfIntegers& arr);
	const SetOfIntegers operator*= (const SetOfIntegers& arr);
	int NewX();
	const SetOfIntegers operator= (const SetOfIntegers& arr);
	bool operator== (const SetOfIntegers& arr);
	friend ostream& operator<< (ostream& output, const SetOfIntegers& arr);
	friend istream& operator>> (istream& input, SetOfIntegers& arr);

};
int NewX();
