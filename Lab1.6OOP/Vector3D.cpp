// Vector3D.cpp

#include "Vector3D.h"

void Vector3D::Triad::Init(int i1, int i2, int i3) {
	SetX(i1);
	SetY(i2);
	SetZ(i3);
}

void Vector3D::Triad::Read() {
	int x, y, z;

	cout << " Enter x: "; cin >> x;
	cout << " Enter y: "; cin >> y;
	cout << " Enter z: "; cin >> z;

	Init(x, y, z);
}

void Vector3D::Triad::Display() {
	cout << toString() << endl;
}

string Vector3D::Triad::toString() const {
	stringstream sout;
	sout << " ( " << x << " ; " << y << " ; " << z << " )" << endl;
	return sout.str();
}

void Vector3D::Triad::AddNum() {
	int a;
	cout << endl << " Enter number to add: "; cin >> a;

	this->x += a;
	this->y += a;
	this->z += a;
}

void Vector3D::Triad::MultiplyNum() {
	int m;
	cout << endl << " Enter number to multiply: "; cin >> m;

	this->x *= m;
	this->y *= m;
	this->z *= m;
}


bool AreEqual(Vector3D::Triad T1, Vector3D::Triad T2) {
	if (T1.x == T2.x && T1.y == T2.y && T1.z == T2.z)
		return true;
	else
		return false;
}

void Vector3D::Init(Triad triad) {
	SetTriad(triad);
}

void Vector3D::Display() {
	cout << toString() << endl;
}

void Vector3D::Read() {
	Triad t;
	t.Read();
	Init(t);
}

string Vector3D::toString() {
	stringstream sout;
	sout << " Vector = " << triad.toString();
	return sout.str();
}

Vector3D AddVector(Vector3D V1, Vector3D V2) {
	Vector3D V3;
	int x = V1.triad.GetX() + V2.triad.GetX(),
		y = V1.triad.GetY() + V2.triad.GetY(),
		z = V1.triad.GetZ() + V2.triad.GetZ();

	V3.triad.Init(x, y, z);
	return V3;
}

int ScalarVector(Vector3D V1, Vector3D V2) {
	return V1.triad.GetX() * V2.triad.GetX() + V1.triad.GetY() * V2.triad.GetY() + V1.triad.GetZ() * V2.triad.GetZ();
}