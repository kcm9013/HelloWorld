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
		//b = ++a;// 11 (먼저 +1)
		//b = a--;// 10
		b = --a;// 9 (먼저 -1)
		cout << "a = " << a << " " << "b = " << b << endl;
	}

	{
		// 교재 P.73 참고
		int a = 10;
		int b = -5;
		bool result = false;
		result = (a > b) ? true : false; // <,> 크기
		result = (a == b) ? true : false; // = 크기
		result = (a > 0 && b > 0) ? true : false; // && 양쪽이 참이어야 true
		result = (a > 0 || b > 0) ? true : false; // || 표현식 중에서 하나라도 참이면 true
		result = (a > 0 && --b > 0) ? true : false; // 표현식 중 앞부분이 false면 뒤에는 계산X
		result = !(a > 0) ? true : false;
		cout << "Result = " << boolalpha << result << noboolalpha << " b = " << b << endl;
	}

	{
		int num = 10;
		cout << "2진수 표기 : " << bitset<32>(num) << endl;
		cout << "8진수 표기 : " << oct << num << endl;
		cout << "10진수 표기 : " << dec << num << endl;
		cout << "16진수 표기 : " << hex << num << endl;

		int x = 0x35;
		int y = 0xf0;
		cout << " x = " << bitset<8>(x) << endl;
		cout << " y = " << bitset<8>(y) << endl;
		cout << " x & y = " << bitset<8>(x & y) << endl;
		cout << " x | y = " << bitset<8>(x | y) << endl;
		cout << " x ^ y = " << bitset<8>(x ^ y) << endl; // a,b 값이 같으면 true, 다르면 false
		cout << " ~x = " << bitset<8>(~x) << endl; // 지정 X 와 반대값 출력

		int x1 = x << 2;
		cout << " x1 = " << bitset<8>(x1) << endl;//두자리씩 앞으로 이동, 뒤에 빈 두자리는 0으로 표기

		char cX = 0b10010100; //b뒤 첫번째 자리숫자에 따라 앞자리가 달라짐
		cout << " cX = " << bitset<8>(cX) << endl;
		cX = cX >> 2;
		cout << " cX = " << bitset<8>(cX) << endl;
	}

	{
		//형 변환

		int intVar = 7;
		double doubleVar = 1.5;
		float floatVar = 3.7f;

		intVar = doubleVar;

		//자료형 우선 순위
		//char -> int -> long -> float -> double -> long double {실수형이면서 크기가 큰것이 우선(사이즈가 크고 실수형태인것이 우선)}
		intVar = doubleVar + intVar * floatVar;
		//                        float
		//           double + (intVar * floatVar)
		//               double
		//intVar = {doubleVar + (intVar * floatVar)}
		//       int




		//static_cast : 실행중에 형 검사를 하지 않으며, 컴파일 할때 수식에 지정된 그대로 변환됨.
		//dynamic_cast : 기초 클래스와 파생 클래스 간의 포인터 또는 참조 형 변환이 프로그램 실행 중에 일어나도록 지시함.
		//reinterpret_cast : 포인터를 다른 자료형의 포인터나 정수 자료형으로, 또는 그 역으로 변환됨.
		//const_cast : const 지정을 일시 해제함.


		double d = 10.5;
		int a = static_cast<int>(d);
	}
}
*/