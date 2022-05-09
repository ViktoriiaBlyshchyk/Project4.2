#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Study\ООП\Project4.2\Project4.2\Figure.h"
#include "D:\Study\ООП\Project4.2\Project4.2\Figure.cpp"
#include "D:\Study\ООП\Project4.2\Project4.2\Rectangle.h"
#include "D:\Study\ООП\Project4.2\Project4.2\Rectangle.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Rectangle a(2, 3);
			int b = a.Area();
			Assert::AreEqual(b, 6);
		}
	};
}
