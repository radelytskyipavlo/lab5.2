#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x = 0.5;
			double eps = 0.0000001;
			int n = 0;
			double s = 0;
			double expected = atan(x);
			double actual = S(x, eps, n, s);
			Assert::AreEqual(expected, actual, eps);
		}
	};
}
