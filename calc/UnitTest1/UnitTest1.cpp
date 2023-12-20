#include "pch.h"
#include "CppUnitTest.h"
#include "../calc/funkcje.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(logarytm(2), 0.693147, 0.1);

			double tab[4] = { 1, 2, 3, 4 };
			Assert::AreEqual(odchylenie(tab, 4), 1.11803, 0.1);

			Assert::AreEqual(eksponent(2), 7.38906, 0.1);

			Assert::AreEqual(maksimum(tab, 4), 4, 0.1);
		}
	};
}
