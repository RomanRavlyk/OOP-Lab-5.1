#include "pch.h"
#include "CppUnitTest.h"
#include "..//OOP Lab 5.1/Fraction.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Fraction b(5, 6);
			Assert::AreEqual(5.0, b.getFirst());
		}
	};
}
