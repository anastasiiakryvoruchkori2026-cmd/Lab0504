#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab0504/lab0504.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest0504
{
	TEST_CLASS(UnitTest0504)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;

			t = S0(2, 4);
			Assert::AreEqual(t, 0.8);

			t = S1(2, 4, 2);
			Assert::AreEqual(t, 0.8);

			t = S2(2, 4, 4);
			Assert::AreEqual(t, 0.8);

			t = S3(2, 4, 2, 0);
			Assert::AreEqual(t, 0.8);

			t = S4(2, 4, 4, 0);
			Assert::AreEqual(t, 0.8);
		}
	};
}
