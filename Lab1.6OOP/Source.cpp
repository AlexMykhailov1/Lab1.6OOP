// Source.cpp
// Вкладені класи
// Михайлов Олександр
// Варіант 19

#include "Vector3D.h"

using namespace std;

int main()
{
	Vector3D::Triad T1, T2;

	T1.Read();
	T1.Display();

	T2.Read();
	T2.Display();

	T1.AddNum();
	T1.Display();

	T1.MultiplyNum();
	T1.Display();

	if (AreEqual(T1, T2))
		cout << " Coordinates are equal!" << endl;
	else
		cout << " Coordinates are not equal!" << endl;

	Vector3D V1, V2, V3;

	V1.Read();
	V1.Display();

	V2.Read();
	V2.Display();

	V3 = AddVector(V1, V2);
	V3.Display();

	cout << " Scalar product = " << ScalarVector(V1, V2) << endl;

	return 0;
}