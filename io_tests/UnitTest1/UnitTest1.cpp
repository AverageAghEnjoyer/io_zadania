#include "pch.h"
#include "CppUnitTest.h"
#include "../ConsoleApplication2/ConsoleApplication2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{


			Assert::IsTrue(signup("", "password") == "Enter your login", L"Something went wrong");

			Assert::IsTrue(signup("login", "") == "Enter your password", L"Something went wrong");

			Assert::IsTrue(signup("", "") == "Enter your login", L"Something went wrong");

			Assert::AreEqual(usernameTaken("free_username"), false);

			Assert::AreEqual(usernameTaken("kasia"), true);

			Assert::IsTrue(signup("new_acc", "1234") == "Success", L"Something went wrong");

		}
	};
}
