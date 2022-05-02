#include <iostream>

using namespace std;

int main()
{
	int a = 3, b = 2;

	float c = 7.9f, d = 4.2f;

	cout << "정수 사칙연산" << endl;
	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;
	cout << a % b << endl;

	cout << "실수 사칙연산" << endl;
	cout << c + d << endl;
	cout << c - d << endl;
	cout << c * d << endl;
	cout << c / d << endl;
	cout << fmodf (c, d) << endl;

}