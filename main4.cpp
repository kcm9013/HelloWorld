
/*#include <iostream>
#include "Employeestruct.h"
using namespace std;

enum PieceType1 { PieceTypeKing = 1, PieceTypeQueen, PieceTypeRook = 10 , PieceTypePawn};

enum class PieceType
{
	King = 1,
	Queen,
	Rook = 10,
	Pwan
};

int main(int argc, char* argv[])
{
	PieceType1 myPiece = PieceTypeRook;
	int a = myPiece;
	PieceType myPiece2 = PieceType::King;
	//int B = myPiece2;//Enum class�� Ÿ���� ������ �� ����.
	//���� ���ڵ� ���� �� �� ä���
	Employee anEmployee;
	anEmployee.firstInitial = 'M';
	anEmployee.lastInitial = 'G';
	anEmployee.employeeNumber = 42;
	anEmployee.salary = 80000;
	// ���� ���ڵ忡 ����� �� ����ϱ�
	cout << "Employee: " << anEmployee.firstInitial << anEmployee.lastInitial << endl;
	cout << "Number: " << anEmployee.employeeNumber << endl;
	cout << "Salary: $" << anEmployee.salary << endl;
	return 0;
}
*/