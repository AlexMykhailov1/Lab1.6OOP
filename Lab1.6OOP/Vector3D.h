// Vector3D.h

#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Vector3D
{
public:
	class Triad
	{
	private:
		int x, y, z;
	public:
		int GetX() const { return x; };
		int GetY() const { return y; };
		int GetZ() const { return z; };

		void SetX(int value) { this->x = value; };
		void SetY(int value) { this->y = value; };
		void SetZ(int value) { this->z = value; };

		void Init(int, int, int);
		void Read();
		void Display();
		string toString() const;

		void AddNum();
		void MultiplyNum();
		friend bool AreEqual(Triad, Triad);
	};

	Triad triad;

	void SetTriad(Triad value) { this->triad = value; };
	Vector3D::Triad GetTriad() const { return triad; };

	void Init(Triad triad);
	void Display();
	void Read();
	string toString();

	friend Vector3D AddVector(Vector3D, Vector3D);
	friend int ScalarVector(Vector3D, Vector3D);
};

