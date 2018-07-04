#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Calculator/calculator.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorUnitTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// TODO: �ڴ�������Դ���
			Calculator* calc = new Calculator();
			string ret = calc->Solve("11+22");
			Assert::AreEqual(ret, (string)"11+22=33");
		}
		TEST_METHOD(TestMethod2)
		{
			// TODO: �ڴ�������Դ���
			Calculator* calc = new Calculator();
			string ret = calc->Solve("11+32/4");
			Assert::AreEqual(ret, (string)"11+32/4=19");
		}
		TEST_METHOD(TestMethod3)
		{
			// TODO: �ڴ�������Դ���
			Calculator* calc = new Calculator();
			string ret = calc->Solve("11+32/4-100");
			Assert::AreEqual(ret, (string)"11+32/4-100=81");
		}
	};
}