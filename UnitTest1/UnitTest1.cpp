#include "pch.h"
#include "CppUnitTest.h"
#include "../AP_Lab№6.1.іт/AP_Lab№6.1.іт.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:
        TEST_METHOD(TestGenerateArray)
        {
            const int size = 10;
            int a[size];
            generateArray(a, size);

            for (int i = 0; i < size; i++) {
                Assert::IsTrue(a[i] >= -10 && a[i] <= 35);
            }
        }

        TEST_METHOD(TestCountElements)
        {
            const int size = 5;
            int a[size] = { 1, 2, 3, 4, 5 };
            int count = countElements(a, size);
            Assert::AreEqual(4, count);  // 1, 2, 4, 5 задовольняють критерій
        }

        TEST_METHOD(TestSumElements)
        {
            const int size = 5;
            int a[size] = { 1, 2, 3, 4, 5 };
            int sum = sumElements(a, size);
            Assert::AreEqual(12, sum);  // 1 + 2 + 4 + 5 = 12
        }

        TEST_METHOD(TestReplaceElements)
        {
            const int size = 5;
            int a[size] = { 1, 2, 3, 4, 5 };
            replaceElements(a, size);

            Assert::AreEqual(0, a[0]);
            Assert::AreEqual(0, a[1]);
            Assert::AreEqual(3, a[2]);
            Assert::AreEqual(0, a[3]);
            Assert::AreEqual(0, a[4]);
        }
    };
}