#include "pch.h"
#include "CppUnitTest.h"

extern "C" const char* RockPaperScissors(const char*, const char*);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RockPaperScissorsTest
{
	TEST_CLASS(RockPaperScissorsTest)
	{
	public:

		TEST_METHOD(Player1Wins)
		{
			// Test case where Player 1 chooses rock and Player 2 chooses scissors
			Assert::AreEqual(std::string("Player 1"), std::string(RockPaperScissors("rock", "scissors")));
		}

		TEST_METHOD(Player2Wins)
		{
			// Test case where Player 1 chooses rock and Player 2 chooses paper
			Assert::AreEqual(std::string("Player 2"), std::string(RockPaperScissors("rock", "paper")));
		}
	};
}
