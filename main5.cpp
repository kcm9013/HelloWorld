/*
#include <iostream>
#include <bitset>

using namespace std;

int main(int argc, char* argv[])
{
	{
		int a = 10;
		int b = 0;
		//b = a++;// 10
		//b = ++a;// 11 (���� +1)
		//b = a--;// 10
		b = --a;// 9 (���� -1)
		cout << "a = " << a << " " << "b = " << b << endl;
	}

	{
		// ���� P.73 ����
		int a = 10;
		int b = -5;
		bool result = false;
		result = (a > b) ? true : false; // <,> ũ��
		result = (a == b) ? true : false; // = ũ��
		result = (a > 0 && b > 0) ? true : false; // && ������ ���̾�� true
		result = (a > 0 || b > 0) ? true : false; // || ǥ���� �߿��� �ϳ��� ���̸� true
		result = (a > 0 && --b > 0) ? true : false; // ǥ���� �� �պκ��� false�� �ڿ��� ���X
		result = !(a > 0) ? true : false;
		cout << "Result = " << boolalpha << result << noboolalpha << " b = " << b << endl;
	}

	{
		int num = 10;
		cout << "2���� ǥ�� : " << bitset<32>(num) << endl;
		cout << "8���� ǥ�� : " << oct << num << endl;
		cout << "10���� ǥ�� : " << dec << num << endl;
		cout << "16���� ǥ�� : " << hex << num << endl;

		int x = 0x35;
		int y = 0xf0;
		cout << " x = " << bitset<8>(x) << endl;
		cout << " y = " << bitset<8>(y) << endl;
		cout << " x & y = " << bitset<8>(x & y) << endl;
		cout << " x | y = " << bitset<8>(x | y) << endl;
		cout << " x ^ y = " << bitset<8>(x ^ y) << endl; // a,b ���� ������ true, �ٸ��� false
		cout << " ~x = " << bitset<8>(~x) << endl; // ���� X �� �ݴ밪 ���

		int x1 = x << 2;
		cout << " x1 = " << bitset<8>(x1) << endl;//���ڸ��� ������ �̵�, �ڿ� �� ���ڸ��� 0���� ǥ��

		char cX = 0b10010100; //b�� ù��° �ڸ����ڿ� ���� ���ڸ��� �޶���
		cout << " cX = " << bitset<8>(cX) << endl;
		cX = cX >> 2;
		cout << " cX = " << bitset<8>(cX) << endl;
	}

	{
		//�� ��ȯ

		int intVar = 7;
		double doubleVar = 1.5;
		float floatVar = 3.7f;

		intVar = doubleVar;

		//�ڷ��� �켱 ����
		//char -> int -> long -> float -> double -> long double {�Ǽ����̸鼭 ũ�Ⱑ ū���� �켱(����� ũ�� �Ǽ������ΰ��� �켱)}
		intVar = doubleVar + intVar * floatVar;
		//                        float
		//           double + (intVar * floatVar)
		//               double
		//intVar = {doubleVar + (intVar * floatVar)}
		//       int




		//static_cast : �����߿� �� �˻縦 ���� ������, ������ �Ҷ� ���Ŀ� ������ �״�� ��ȯ��.
		//dynamic_cast : ���� Ŭ������ �Ļ� Ŭ���� ���� ������ �Ǵ� ���� �� ��ȯ�� ���α׷� ���� �߿� �Ͼ���� ������.
		//reinterpret_cast : �����͸� �ٸ� �ڷ����� �����ͳ� ���� �ڷ�������, �Ǵ� �� ������ ��ȯ��.
		//const_cast : const ������ �Ͻ� ������.


		double d = 10.5;
		int a = static_cast<int>(d);
	}
}
*/