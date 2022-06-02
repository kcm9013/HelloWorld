/*
#include <iostream>

using namespace std;

int main()
{
	{
		cout << "★" << " " << "★" << " " << "★" << " " << "★" << " " << "★" << " " << "★" << " " << "★" << " " << "★" << " " << "★" << " " << "★" << endl;
		cout << "★                         ★" << endl;
		cout << "★                         ★" << endl;
		cout << "★                         ★" << endl;
		cout << "★                         ★" << endl;
		cout << "★                         ★" << endl;
		cout << "★                         ★" << endl;
		cout << "★                         ★" << endl;
		cout << "★                         ★" << endl;
		cout << "★" << " " << "★" << " " << "★" << " " << "★" << " " << "★" << " " << "★" << " " << "★" << " " << "★" << " " << "★" << " " << "★" << endl;
	}

	{
		int a, b = { 0 };
		cout << "A is ?";
		cin >> a;
		cout << "B is ?";
		cin >> b;

		cout << " 16진수(a+b) = " << hex << uppercase << a + b << endl;
		//                                 대문자 출력

		//bool 표기
		bool result = false;
		result = (a - b > 0) ? true : false;
		cout << "Result = " << boolalpha << result << noboolalpha << endl;

		//false 표기
		if (a - b > 0)
		{
			cout << "true" << endl;

		}
		else
		{
			cout << "false" << endl;
		}

	{

		int a, b, c = { 0 };
		{
			cout << "A is ?";
			cin >> a;
			cout << "B is ?";
			cin >> b;
			cout << "C is ?";
			cin >> c;

			//if 표기법
			if (a + b > c)
			{
				cout << "a + b = " << a + b << endl;
			}
			else
			{
				cout << "c = " << c << endl;
			}

			int a = { 0b10101010 };
			int b = { 0111 };
			int c = { 0xff };
			cout << "a + b - c = " << a + b - c << endl;


		}

		{
			int a, b, c = { 0 };
			{
				cout << "A is ?";
				cin >> a;
				cout << "B is ?";
				cin >> b;
				cout << "C is ?";
				cin >> c;

				bool result = false;
				result = (a > b && a < c) ? true : false;
				cout << "Result = " << boolalpha << result << noboolalpha << endl;
			}
		}

	}
}
*/