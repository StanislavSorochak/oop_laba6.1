#include "pch.h"
#include "CppUnitTest.h"
#include "../oop_laba6.1/Array.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Array unitTest = Array(20);

			for (int i = 0; i < 20; i++)
				unitTest[i] = 0;
			unitTest[10] = -5;

			Assert::AreEqual(unitTest.minValue(), -5.);
		}
	};
}
