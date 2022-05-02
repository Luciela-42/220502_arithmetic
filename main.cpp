#include <iostream>

using namespace std;

int main()
{
	int apple;
	int ball;
	apple = 4;
	ball = 7;

	float cash;
	float devcat;
	cash = 7.9f;
	devcat  = 4.2f;

	cout << "정수 사칙연산" << endl;
	cout << apple + ball << endl;
	cout << apple - ball << endl;
	cout << apple * ball << endl;
	cout << apple / ball << endl;
	cout << apple % ball << endl;

	cout << "실수 사칙연산" << endl;
	cout << cash + devcat << endl;
	cout << cash - devcat << endl;
	cout << cash * devcat << endl;
	cout << cash / devcat << endl;
	//cout << cash % devcat << endl; %연산자는 정수형에서 사용

	return 0;
}