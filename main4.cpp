#include <iostream>

using namespace std;

enum PieceType1 { PieceTypeKing = 1, PieceTypeQueen, PieceTypeRook = 10 , PieceTypePawn};

enum class PeiceType : unsigned long {King = 1, Queen, Rook = 10, Pwan};

int main()
{
	PieceType1 myPiece = PieceTypeRook;
	int a = myPiece;

	PieceType myPiece2 = PieceType::PieceTypeKing;
	int B = myPiece2;
}