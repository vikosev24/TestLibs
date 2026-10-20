#include "pch.h"
#include "CppUnitTest.h"
#include "../layer1/foo.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(foo(1, 2), 3);
		}
	};
}
