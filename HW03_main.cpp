
#include "HW03_SetOfIntegers.h"

int main()
{
	
	SetOfIntegers z;
	cin >> z;
	cout <<" Arr Z: \n" <<z;
	SetOfIntegers a(5,15,35,45,65);
	SetOfIntegers b(4,14,24,34,65);
	SetOfIntegers c(0,1,2,3,4);
	cout << " Arr C: \n" << c;

	cout << "===== element (+, +=) =====" << endl;
	cout << " c = z + 45\n";
	c = z + 45;
	cout << " Arr Z: \n" << z;
	cout << " Arr C: \n" << c;
	cout << " z += 45\n";
	z += 45;
	cout << " Arr Z: \n" << z;
	cout << "===== sets (+, +=) =====" << endl;
	cout << " Arr A: \n" << a;
	cout << " Arr B: \n" << b;
	cout << " c = a + b\n";
	c = a + b;
	cout << " Arr C: \n" << c;
	cout << " Arr A: \n" << a;
	cout << " a += b\n";
	a += b;
	cout << " Arr A: \n" << a;
	cout << " Arr B: \n" << b;
	cout << "===== element (-, -=) =====" << endl;
	cout << " c = z - 45\n";
	c = z - 45;
	cout << " Arr Z: \n" << z;
	cout << " Arr C: \n" << c;
	cout << " z -= 45\n";
	z -= 45;
	cout << " Arr Z: \n" << z;
	cout << "===== sets (-, -=) =====" << endl;
	SetOfIntegers d(5, 15, 35, 45, 65);
	SetOfIntegers f(4, 14, 24, 45, 45);
	cout << " Arr D: \n" << d;
	cout << " Arr F: \n" << f;
	cout << " c = d - f\n";
	c = d - f;
	cout << " Arr C: \n" << c;
	cout << " Arr D: \n" << d;
	cout << " d -= f\n";
	d -= f;
	cout << " Arr D: \n" << d;
	cout << "===== sets (*, *=) =====" << endl;
	SetOfIntegers m(5, 15, 35, 45, 65);
	SetOfIntegers n(4, 15, 24, 95, 45);
	cout << " Arr M: \n" << m;
	cout << " Arr N: \n" << n;
	cout << " c = d * f\n";
	c = m * n;
	cout << " Arr C: \n" << c;
	cout << " Arr M: \n" << m;
	cout << " d *= f\n";
	m *= n;
	cout << " Arr M: \n" << m;
	cout << "===== sets (==) =====" << endl;
	SetOfIntegers x(1, 15, 2, 45, 3);
	SetOfIntegers y(1, 15, 2, 3, 45);
	cout << " Arr X: \n" << x;
	cout << " Arr Y: \n" << y;
	cout << " \tx==y \n";

	if (x == y)cout << " true " << endl;
	else cout << " false " << endl;

	system("pause");
}

