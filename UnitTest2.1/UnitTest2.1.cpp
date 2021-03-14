#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 2.1/Line.h"
#include "../lab 2.1/Line.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest21
{
	TEST_CLASS(UnitTest21)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			
			Line a(7, 5, 2);
			int test = a.function();
			Assert::AreEqual(19, test);

		}
	};
}
