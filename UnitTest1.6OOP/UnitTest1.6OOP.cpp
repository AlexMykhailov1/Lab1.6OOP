#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab1.6OOP/Vector3D.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest16OOP
{
	TEST_CLASS(UnitTest16OOP)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Vector3D::Triad T1;
			T1.SetX(1);
			Assert::AreEqual(1, T1.GetX());
		}
	};
}
