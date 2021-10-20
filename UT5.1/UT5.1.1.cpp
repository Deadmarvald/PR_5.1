#include "pch.h"
#include "CppUnitTest.h"
#include "../PR5.1/Lab_05_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UT511
{
	TEST_CLASS(UT511)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double g;
			g = h(1., 0.);
			Assert::AreEqual(g, 1.);
		}
	};
}
