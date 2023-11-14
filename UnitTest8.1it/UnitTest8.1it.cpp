#define _CRT_SECURE_NO_WARNINGS 
#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB8.1it/LAB8.1it.cpp"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

int CountPairs(char* str);

namespace YourNamespace
{
    TEST_CLASS(YourTestClass)
    {
    public:

        TEST_METHOD(CountPairsTest)
        {
            // Arrange
            char input[] = "abcdaaef";
            int expected_output = 1;

            // Act
            int result = CountPairs(input);

            // Assert
            Assert::AreEqual(result, expected_output);
        }

        // Add more test methods as needed for different scenarios
    };
}
