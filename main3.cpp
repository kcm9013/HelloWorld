/*
#include <iostream>

using namespace std;

constexpr int fac(int n) {
	return n > 1 ? n * fac(n - 1) : 1;
}

int main(int argc, char* argv[])
{
	unsigned int x = 2999999999;
	cout << " x = " << x << endl;

	int someInterger = 256;
	short someShort;
	long someLong;
	float someFloat;
	double someDouble;

	someInterger++; //257
	someInterger *= 2;//514
	someShort = static_cast<short>(someInterger);//514
	someLong = someShort * 10000;//5140000
	someFloat = someLong + 0.785f;//5140000.785
	someDouble = static_cast<double>(someFloat) / 100000;//51.4
	cout << someDouble << endl;

	int firstNum = 0;
	cout << "firstNum : ";
	cin >> firstNum;
	int secondNum = 0;
	cout << "secondNum : ";
	cin >> secondNum;
	cout << "sum : ";
	cout << firstNum + secondNum << endl;

	const int a = 0;
	constexpr int b = fac(4);

}
*/