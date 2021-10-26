#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab-5.4/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54
{
	TEST_CLASS(UnitTest54)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double tmp = S1(0,  1);
			Assert::AreEqual(0., tmp);
			
		}
	};
}
